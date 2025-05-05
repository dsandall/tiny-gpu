`default_nettype none
`timescale 1ns/1ns
`include "utils.svh"

// MEMORY CONTROLLER
// > Receives memory requests from all LSUs
// > Throttles requests based on limited external memory bandwidth
// > Waits for responses from external memory and distributes them back to cores

// CACHE ADDITIONS
// > Retreive groups of bytes from memory
// > Stores bytes into cache lines
// > Saves them for later reads
//

// Update: April 18
// Dylan Sandall
// 
// the arbiter_cache serves both as a global cache shared between all threads,
// as well as a parallel state machine that can handle and manage requests.
//
// (Threads(LSUs)) or (Cores(Fetchers)) -> request from arbiter_cache 
//  arbiter_cache -> requests from parallel memory access channels
//
// The model is parameterized, and abstracted in the hopes that it will be
// useful later. 
//
// it has been tested as:
// Program Arbiter:
//  - 1 Read Only Memory Channel
//  - 2 Read Only Consumer Cores
//  - 16 bit bus 
//  - 8 bit address space 
//  - (2**8bits) * 16 bits addressable memory space in global mem
//  Cache:
//  - 1 bit offset 
//  - 4 bit index
//  - (3) bit tag
//  - results in (16*(2**1)=)32bit cache line size(must read from main mem in 2 sequential
//  16b chunks) 
//  - results in (2**4=)16 lines in cache, 
//  - 512 cache bits total (allows up to 32 threads different instruction
//  memory at once) (TODO: should be totally overkill for SIMD)
//
// Data Arbiter:
//  - 4 R/W Main Data Memory Channels
//  - 8 R/W Consumer Threads
//  - 8 bit data bus
//  - 8 bit address space
//  - (2**8bits) * 8 bits addressable memory space in global mem
//  Cache:
//  - 1 bit offset
//  - 4 bit index
//  - (3) bit tag
//  - results in (8*(2**1)=)16bit cache line size (must read from main mem in 2 sequential
//  bytes) 
//  - results in (2**4=)16 lines in cache, 
//  - 256 cache bits total (allows up to 32 threads to have a spot in the data
//  cache) (TODO:too small for current thread configuration)
//
//  with the current 8 threads, 256 cache bits is decent, but should be
//  rearranged to allow for more threads and perhaps less program memory cache
//
//  if we did HW contex switching, we can get threads to 16-32.
//  then, i expect we will have trouble with cache, largely depending on the use
//  case

module arbiter_cache #(
    parameter NUM_CONSUMERS, // The number of consumers accessing memory through this controller
    parameter NUM_CHANNELS,  // The number of concurrent channels available to send requests to global memory
    parameter ADDR_BITS, // 16 bit addresses
    parameter CACHE_OFFSET_BITS = 1,
    parameter CACHE_INDEX_BITS = 4,
    parameter CONSUMER_BUS_BITS = 8, // 8 for data, 16 for program mem
    parameter MEMORY_BUS_BITS = 8, 
    parameter BITS_ADDRESSABLE = MEMORY_BUS_BITS
  ) (
    input wire clk,
    input wire reset,
    
    // Consumer Interface (Fetchers / LSUs)
    `CONSUMER_READ_MODULE(consumer, NUM_CONSUMERS, ADDR_BITS, CONSUMER_BUS_BITS),
    `CONSUMER_WRITE_MODULE(consumer, NUM_CONSUMERS, ADDR_BITS, CONSUMER_BUS_BITS),
    `CHANNEL_READ_MODULE(mem, NUM_CHANNELS, ADDR_BITS, MEMORY_BUS_BITS),
    `CHANNEL_WRITE_MODULE(mem, NUM_CHANNELS, ADDR_BITS, MEMORY_BUS_BITS)

);
    ////
    //// Cache Data / SRAM 
    // mem_addr = [tag][line index][offset]
    // mem_addr = [3]  [4]         [1] bits

    // we start with cache offset, index and total address len (8b address
    // space is very tight...)

    // do the calculations based on provided bits
    `include "cache_utils.svh"
    
    ////
    // Cache State: 
    ////

    //// For each hardware memory controller:
    controller_state_t controller_state [NUM_CHANNELS-1:0];
    controller_state_t consumer_state [NUM_CONSUMERS-1:0];
    
    //// For each cache line:
    cache_line_t cache [CACHE_NUM_LINES-1:0];

    //// For each consumer interface:
    // Keep track of state for each channel and which jobs each channel is handling
    // The highest level ones, used for communication between channels
    logic [$clog2(NUM_CONSUMERS)-1:0] current_consumer [NUM_CHANNELS-1:0]; // Which consumer is each channel currently serving
    logic [NUM_CONSUMERS-1:0] consumer_mutex; // Which channels are being served? Prevents many workers from picking up the same request.
    logic [CACHE_NUM_LINES-1:0] cache_line_mutex; 
    logic [NUM_CONSUMERS-1:0] main_mem_request;
    localparam NUM_GRANTS = NUM_CONSUMERS + CACHE_NUM_LINES;
    logic [NUM_GRANTS-1:0] granted;
    logic [$clog2(NUM_CHANNELS)-1:0] num_grants_this_cycle;
    
    // Reset Block
    always @(posedge clk) begin
      if (reset) begin 
            `CONSUMER_READ_MODULE_RESET(consumer);
            `CONSUMER_WRITE_MODULE_RESET(consumer);
            `CHANNEL_READ_MODULE_RESET(mem);
            `CHANNEL_WRITE_MODULE_RESET(mem);

            `ZERO_ARRAY(current_consumer, NUM_CHANNELS)
            `ZERO_ARRAY(controller_state, NUM_CHANNELS)

            `ZERO_ARRAY(main_mem_request, NUM_CONSUMERS)
            `ZERO_ARRAY(granted, NUM_CONSUMERS)
            `ZERO_ARRAY(consumer_state, NUM_CONSUMERS)

            `ZERO_ARRAY(consumer_mutex, NUM_CONSUMERS)
            `ZERO_ARRAY(cache_line_mutex, NUM_CONSUMERS)

            // Initialize cache lines
           `ZERO_ARRAY(cache, CACHE_NUM_LINES)
           cache[1].tag <= 1;
           cache[2].tag <= 2;
           cache[3].tag <= 3;
           cache[4].tag <= 4;
        end
    end

    //// Memory Channel Generate Block
    //// This is the rest of the file. 4 channels of parallel memory reads
    `define NEXTSTATE(state) controller_state[i] <= state
    `define NEXTSTATE_CONS(state) consumer_state[j] <= state
    `define IS_READ consumer_read_valid[j]
    `define IS_WRITE consumer_write_valid[j]
    `define IS_UNSERVED !consumer_mutex[j]
    `define REQUESTED_ADDR (`IS_READ ? consumer_read_address[j] : (`IS_WRITE ? consumer_write_address[j] : 0))
    `define REQUESTED_LINE (`IS_READ ? consumer_read_address[j][`LINE_BITS] : (`IS_WRITE ? consumer_write_address[j][`LINE_BITS] : 0))
    `define REQUESTED_TAG (`IS_READ ? consumer_read_address[j][`TAG_BITS] : (`IS_WRITE ? consumer_write_address[j][`TAG_BITS]: 0))
    `define REQUESTED_OFFSET (`IS_READ ? consumer_read_address[j][`OFFSET_BITS] : (`IS_WRITE ? consumer_write_address[j][`OFFSET_BITS]: 0))

    `define CC current_consumer[i]
    `define CC_IS_READ consumer_read_valid[`CC]
    `define CC_IS_WRITE consumer_write_valid[`CC]
    //`define CC_IS_UNSERVED !consumer_mutex[j]
    `define CC_REQUESTED_ADDR (`CC_IS_READ ? consumer_read_address[`CC] : (`CC_IS_WRITE ? consumer_write_address[`CC] : 0))
    `define CC_REQUESTED_LINE (`CC_IS_READ ? consumer_read_address[`CC][`LINE_BITS] :( `CC_IS_WRITE ? consumer_write_address[`CC][`LINE_BITS] : 0))
    `define CC_REQUESTED_TAG (`CC_IS_READ ? consumer_read_address[`CC][`TAG_BITS] :( `CC_IS_WRITE ? consumer_write_address[`CC][`TAG_BITS]: 0))
    `define CC_REQUESTED_OFFSET (`CC_IS_READ ? consumer_read_address[`CC][`OFFSET_BITS] :( `CC_IS_WRITE ? consumer_write_address[`CC][`OFFSET_BITS]: 0))


    logic [$clog2(NUM_GRANTS)-1:0] last_grant;
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            last_grant <= 0;
            granted <= 0;
        end else begin
            granted <= 0;
            num_grants_this_cycle <= 0;

            // Round-robin arbitration NOTE: (each cycle, the next available
            // grant is broadcast and recorded. no priority across grant types)
            for (int z = 0; z < NUM_GRANTS; z++) begin
                int zeeper = (last_grant + 1 + z) % NUM_GRANTS; //TODO: change to always prioritize consumers?

                int j = zeeper;
                int l = zeeper - NUM_CONSUMERS;

                logic is_consumer_req = (zeeper < NUM_CONSUMERS);
                logic grant_consumer = is_consumer_req && (main_mem_request[j] && !consumer_mutex[j]);
                logic grant_cache_line = !is_consumer_req && (cache[l].dirty && cache[l].valid && !cache_line_mutex[l]);
                
                if ( grant_consumer || grant_cache_line ) begin
                   granted[zeeper] <= 1;
                   last_grant <= zeeper;
                   if (++num_grants_this_cycle >= NUM_CHANNELS) begin
                     break;
                   end
                end
            end
        end
    end
/////////////////////
/////////////////////
/////////////////////
/////////////////////

    generate

    for (genvar consumer_i = 0; consumer_i < NUM_CONSUMERS; consumer_i++) begin : consumer_if
      
      int j = consumer_i; // hack to take advantage of the macros
      
      logic req_chunk_valid;
      assign req_chunk_valid = cache[`REQUESTED_LINE].valid[`REQUESTED_OFFSET];
      logic tag_valid;
      assign tag_valid = (cache[`REQUESTED_LINE].tag == `REQUESTED_TAG); 

      always @(posedge clk) begin
      case (consumer_state[j])

        //// Idle state, waiting for transaction
        IDLE: begin

          if (`IS_READ) begin
            if (!(req_chunk_valid && tag_valid)) begin
               if (!main_mem_request[j]) begin main_mem_request[j] <= 1; end
               `NEXTSTATE_CONS(IDLE);

            end else begin

                 // Read requested data chunk from cache
                 consumer_read_data[j] <= cache_read_by_offset(
                     cache[`REQUESTED_LINE].data,
                     `REQUESTED_OFFSET 
                 );

                 main_mem_request[j] <= 0; // we no longer need it from main mem

                 // free the consumer
                 // wait for ack
                 consumer_read_ready[j] <= 1;
                 `NEXTSTATE_CONS(READ_RELAYING);
            end

          end else if (`IS_WRITE) begin
            // tag invalid, cache invalid
            if (!tag_valid || !cache[`REQUESTED_LINE].valid) begin


                if (!cache[`REQUESTED_LINE].dirty) begin
                    if (tag_valid && !cache[`REQUESTED_LINE].valid) begin
                            // wait for main mem direct write
                            if (!main_mem_request[j]) begin main_mem_request[j] <= 1; end 
                            `NEXTSTATE_CONS(WRITE_RELAYING);

                    end else if (!tag_valid && cache[`REQUESTED_LINE].valid) begin
                            if (cache_line_mutex[`REQUESTED_LINE]) begin
                                  // free the consumer
                                  consumer_write_ready[j] <= 1;
                                  cache[`REQUESTED_LINE].dirty <= 1'b1;
                                  // clear validation, except for the new chunk
                                  cache[`REQUESTED_LINE].valid <= cache_valid_mask_by_offset(`REQUESTED_OFFSET);
                                  cache[`REQUESTED_LINE].data[$unsigned(`REQUESTED_OFFSET) * MEMORY_BUS_BITS +: MEMORY_BUS_BITS] <= consumer_write_data[j];
                                  `NEXTSTATE_CONS(WRITE_RELAYING);
                            end else begin
                                  // wait for main mem direct write
                                  if (!main_mem_request[j]) begin main_mem_request[j] <= 1; end 
                                  `NEXTSTATE_CONS(WRITE_RELAYING);
                            end

                    end else if  (!tag_valid && !cache[`REQUESTED_LINE].valid) begin
                            // wait for main mem direct write
                            if (!main_mem_request[j]) begin main_mem_request[j] <= 1; end 
                            `NEXTSTATE_CONS(WRITE_RELAYING);
                    end
                 end else begin
                    if (tag_valid && !cache[`REQUESTED_LINE].valid) begin
                            // wait for main mem direct write
                            if (!main_mem_request[j]) begin main_mem_request[j] <= 1; end 
                            `NEXTSTATE_CONS(WRITE_RELAYING);
                    end else if (!tag_valid && cache[`REQUESTED_LINE].valid) begin
                        // no can do, buckaroo
                            // wait for main mem direct write
                            if (!main_mem_request[j]) begin main_mem_request[j] <= 1; end 
                            `NEXTSTATE_CONS(WRITE_RELAYING);
                    end else if  (!tag_valid && !cache[`REQUESTED_LINE].valid) begin
                            // wait for main mem direct write
                            if (!main_mem_request[j]) begin main_mem_request[j] <= 1; end 
                            `NEXTSTATE_CONS(WRITE_RELAYING);
                    end
                 end


            // tag valid, not dirty
            end else if (tag_valid && cache[`REQUESTED_LINE].valid) begin

              if(cache[`REQUESTED_LINE].dirty && req_chunk_valid) begin
                  //WARN: shouldnt happen but ok
              end

              if (!cache[`REQUESTED_LINE].dirty)begin 
                cache[`REQUESTED_LINE].dirty <= 1'b1;
                // clear validation, except for the new chunk
                cache[`REQUESTED_LINE].valid <= cache_valid_mask_by_offset(`REQUESTED_OFFSET);

             end else if (cache[`REQUESTED_LINE].dirty) begin
              // tag valid, assume you're not in it yet
                cache[`REQUESTED_LINE].valid <= cache[`REQUESTED_LINE].valid |
                cache_valid_mask_by_offset(`REQUESTED_OFFSET);
             end

             // free the consumer
             consumer_write_ready[j] <= 1;
             cache[`REQUESTED_LINE].data[$unsigned(`REQUESTED_OFFSET) * MEMORY_BUS_BITS +: MEMORY_BUS_BITS] <= consumer_write_data[j];
             `NEXTSTATE_CONS(WRITE_RELAYING);
             end
          end
        end

        //// Informs the consumer that a read has been completed
        READ_RELAYING: begin
          //chunks_read <= 0;
          if (!consumer_read_valid[j]) begin 
              consumer_read_ready[j] <= 0; // release the consumer communication line
              `NEXTSTATE_CONS(IDLE);
          end
        end

         //// Informs the consumer that a write has been completed
        WRITE_RELAYING: begin 
            if (!consumer_write_valid[j]) begin 
                consumer_mutex[j] = 0;
                main_mem_request[j] <= 0; // WARN: should probably clear this flag in other one
                consumer_write_ready[j] <= 0;
                `NEXTSTATE_CONS(IDLE);
            end
        end
        endcase
      end
    end
        

    // these could be merged to current_grant , only 1 is ever in use at once
    logic [$clog2(NUM_CONSUMERS)-1:0] current_consumer [NUM_CHANNELS-1:0]; // Which consumer is each channel currently serving
    logic [$clog2(CACHE_NUM_LINES)-1:0] current_line [NUM_CHANNELS-1:0]; // Which consumer is each channel currently serving
    logic [$clog2(NUM_CHUNKS)-1:0] chunk_i[NUM_CHANNELS-1:0];

    // For each memory channel, we handle processing concurrently
    for (genvar i = 0; i < NUM_CHANNELS; i = i + 1) begin : channel_if

        // setting up some per-channel state registers
        logic consumer_req_offset [7:0]; //arbitrary size todo:
        int chunks_read = 0;

        always @(posedge clk) begin
            case (controller_state[i])

            //// Idle state, waiting for transaction
            IDLE: begin

                // While this channel is idle, 
                // poll through consumers looking for one with a pending request
                for (int gi = 0; gi < NUM_GRANTS; gi++) begin 

                      int j = gi;
                      int line_i = gi - NUM_CONSUMERS;

                      //check if data is in the cache
                      logic req_chunk_valid = cache[`REQUESTED_LINE].valid[`REQUESTED_OFFSET];
                      logic tag_valid = (cache[`REQUESTED_LINE].tag == `REQUESTED_TAG); 

                      // NOTE: grants are accepted with consumers then dirty
                      // line priorities. client must still be blocked. 
                      if (granted[gi]) begin
                          if ((gi < NUM_CONSUMERS) && (`IS_READ || `IS_WRITE) && !(req_chunk_valid && tag_valid)) begin
                              
                              if (`IS_READ) begin
                                   // set up memory read
                                   mem_read_valid[i] <= 1;
                                   mem_read_address[i] <= consumer_read_address[j] & CACHE_OFFSET_MASK; // | chunks_read; // todo: parameterize masking out the offset bit 
                                   consumer_req_offset <= `REQUESTED_OFFSET; //how many bits to offset into the cache line 
                                   
                                    cache_line_mutex[`REQUESTED_LINE] = 1; // because we will be writing to the cache
                                   `NEXTSTATE(CACHE_MISS);

                              //// Consumer Write Request Available (direct to memory)
                              end else if (`IS_WRITE) begin
                                   // Memory Write Request (direct from consumer)
                                   mem_write_valid[i] <= 1;
                                   mem_write_address[i] <= consumer_write_address[j];
                                   mem_write_data[i] <= consumer_write_data[j];

                                   // direct to memory writes do not take
                                   // cache mutex
                                   `NEXTSTATE(DIRECT_WRITE_WAITING);
                              end

                              // And in all cases,
                              //mutex-like behavior
                              consumer_mutex[j] = 1;
                              `CC <= j;
                          end
                          // NOTE: lower priority cache line grants 
                          else if ((gi >= NUM_CONSUMERS) && cache[line_i].dirty) begin
                            // for a granted dirty line, 
                            // take cache_line mutex.
                            // write all valid chunks from cache
                            //    and mark as not dirty
                            //
                            // release the cache line mutex

                            cache_line_mutex[line_i] = 1;
                            current_line[i] = line_i;

                            // for X chunks...
                            chunk_i[i] <= 0;
                            cache[line_i].dirty <= 0; // NOTE: marked not dirty only at begin (could be dirtied while writing chunks)
                            `NEXTSTATE(SETUP_WRITEBACK);
                          end
                          break;
                      end
                end
            end
            ///////////////

            // CONSUMER -> MAIN MEM
            ////
            //// Wait for response from memory for pending write request
            DIRECT_WRITE_WAITING: begin 
                if (mem_write_ready[i]) begin 
                    mem_write_valid[i] <= 0;
                    consumer_write_ready[`CC] <= 1;
                    `NEXTSTATE(IDLE);
                end
            end

            ///////////////

            // CACHE -> MAIN MEM
            SETUP_WRITEBACK: begin
               //if the chunk is valid... 
               if (cache[current_line[i]].valid[chunk_i[i]]) begin
                 // write it
                  mem_write_address[i] <= {cache[current_line[i]].tag, current_line[i], chunk_i[i]};
                  mem_write_data[i] <= cache[current_line[i]].data
                      [(CHUNK_SIZE*(chunk_i[i]+1))-1 -: CHUNK_SIZE];

                  mem_write_valid[i] <= 1;

              end 

              // If you're not done with the chunks, go to next one
              if (chunk_i[i] < (NUM_CHUNKS)) begin//NOTE: chunks-1?
                  `NEXTSTATE(INDIRECT_WRITE_WAITING);
              end else begin
                  cache_line_mutex[current_line[i]] = 0;
                  `NEXTSTATE(IDLE);
              end

              // always iterated though
              chunk_i[i] <= chunk_i[i] + 1;
            end

            // CACHE -> MAIN MEM (dirty lines)
            INDIRECT_WRITE_WAITING: begin 
                if (mem_write_ready[i]) begin 

                    mem_write_valid[i] <= 0;

                    if (chunk_i[i] < (NUM_CHUNKS - 1)) begin
                        `NEXTSTATE(SETUP_WRITEBACK);
                    end else begin
                         // go back to idle
                        cache_line_mutex[current_line[i]] = 0;
                        `NEXTSTATE(IDLE);
                    end
                end
            end

            ///////////////

            // CONSUMER -> CACHE -> (all blocked on) MAIN MEM 
            /// Cache Miss States: manages the sequence for filling a line
            // with chunks
            ////
            CACHE_MISS_WAIT: begin
                //start another read request
                mem_read_address[i] <= (`CC_REQUESTED_ADDR & CACHE_OFFSET_MASK) | chunks_read; // mask out the offset bit
                mem_read_valid[i] <= 1;
                `NEXTSTATE(CACHE_MISS);
            end

            // CONSUMER -> CACHE -> (all blocked on) MAIN MEM 
            ////
            //// Waits for read transaction from memory, stores data into current cache line (or portion of line)
            //// Reads from memory at least one time (serializes filling
            //1 cache line in chunks)
            CACHE_MISS: begin
                // if this hardware channel has a finished mem request:
                if (mem_read_ready[i]) begin 
                    // end memory request sig
                    mem_read_valid[i] <= 0;
                    chunks_read <= chunks_read + 1;

                    // complete memreads
                    cache[`CC_REQUESTED_LINE].data
                        [(CHUNK_SIZE*(chunks_read+1))-1 -: CHUNK_SIZE] <= mem_read_data[i];

                    // If you're not done with the chunks, keep waiting
                    if (chunks_read < (NUM_CHUNKS - 1)) begin
                        `NEXTSTATE(CACHE_MISS_WAIT);

                    // If it's the final chunk read, the cache is now valid and properly tagged
                    end else begin

                        // Tag it and bag it
                        // Validate all chunks in the cache line and set tag
                        cache[`CC_REQUESTED_LINE].valid <= {NUM_CHUNKS{1'b1}};
                        cache[`CC_REQUESTED_LINE].tag   <= mem_read_address[i][`TAG_BITS];
                        cache[`CC_REQUESTED_LINE].dirty <= 1'b0;
    
                        chunks_read <= 0;
                        consumer_mutex[`CC] = 0; // release mutex bit
                        cache_line_mutex[`CC_REQUESTED_LINE] = 0; // release mutex bit
                        `NEXTSTATE(IDLE); 
                        //TODO: can save 1 cycle here
                    end
                end
            end


            endcase
        end
    end
    endgenerate
endmodule
