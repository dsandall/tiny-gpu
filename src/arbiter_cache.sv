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
    
    //// For each cache line:
    cache_line_t cache [CACHE_NUM_LINES-1:0];

    //// For each consumer interface:
    // Keep track of state for each channel and which jobs each channel is handling
    // The highest level ones, used for communication between channels
    logic [$clog2(NUM_CONSUMERS)-1:0] current_consumer [NUM_CHANNELS-1:0]; // Which consumer is each channel currently serving
    logic [NUM_CONSUMERS-1:0] consumer_mutex; // Which channels are being served? Prevents many workers from picking up the same request.

    // Reset Block
    always @(posedge clk) begin
        if (reset) begin 
            
            `CONSUMER_READ_MODULE_RESET(consumer);
            `CONSUMER_WRITE_MODULE_RESET(consumer);
            `CHANNEL_READ_MODULE_RESET(mem);
            `CHANNEL_WRITE_MODULE_RESET(mem);

            `ZERO_ARRAY(current_consumer, NUM_CHANNELS)
            `ZERO_ARRAY(controller_state, NUM_CHANNELS)
            `ZERO_ARRAY(consumer_mutex, NUM_CONSUMERS)

            // Initialize cache lines
           `ZERO_ARRAY(cache, CACHE_NUM_LINES)
        end
    end



    //// Memory Channel Generate Block
    //// This is the rest of the file. 4 channels of parallel memory reads
    `define NEXTSTATE(state) controller_state[i] <= state
    `define IS_READ consumer_read_valid[j]
    `define IS_WRITE consumer_write_valid[j]
    `define IS_UNSERVED !consumer_mutex[j]
    `define REQUESTED_ADDR (`IS_READ ? consumer_read_address[j] : `IS_WRITE ? consumer_write_address[j] : 0)
    `define REQUESTED_LINE (`IS_READ ? consumer_read_address[j][`LINE_BITS] : `IS_WRITE ? consumer_write_address[j][`LINE_BITS] : 0)
    `define REQUESTED_TAG (`IS_READ ? consumer_read_address[j][`TAG_BITS] : `IS_WRITE ? consumer_write_address[j][`TAG_BITS]: 0)
    `define REQUESTED_OFFSET (`IS_READ ? consumer_read_address[j][`OFFSET_BITS] : `IS_WRITE ? consumer_write_address[j][`OFFSET_BITS]: 0)

    `define CC current_consumer[i]
    `define CC_IS_READ consumer_read_valid[`CC]
    `define CC_IS_WRITE consumer_write_valid[`CC]
    //`define CC_IS_UNSERVED !consumer_mutex[j]
    `define CC_REQUESTED_ADDR (`CC_IS_READ ? consumer_read_address[`CC] : `CC_IS_WRITE ? consumer_write_address[`CC] : 0)
    `define CC_REQUESTED_LINE (`CC_IS_READ ? consumer_read_address[`CC][`LINE_BITS] : `CC_IS_WRITE ? consumer_write_address[`CC][`LINE_BITS] : 0)
    `define CC_REQUESTED_TAG (`CC_IS_READ ? consumer_read_address[`CC][`TAG_BITS] : `CC_IS_WRITE ? consumer_write_address[`CC][`TAG_BITS]: 0)
    `define CC_REQUESTED_OFFSET (`CC_IS_READ ? consumer_read_address[`CC][`OFFSET_BITS] : `CC_IS_WRITE ? consumer_write_address[`CC][`OFFSET_BITS]: 0)

    generate
        
        // For each memory channel, we handle processing concurrently
        for (genvar i = 0; i < NUM_CHANNELS; i = i + 1) begin 

            // setting up some per-channel state registers
            logic consumer_req_offset [7:0]; //arbitrary size todo:
            int chunks_read = 0;

            always @(posedge clk) begin
                    
                case (controller_state[i])

                ////
                //// Idle state, waiting for transaction
                IDLE: begin

                    // While this channel is idle, 
                    // poll through consumers looking for one with a pending request
                    for (int j = 0; j < NUM_CONSUMERS; j = j + 1) begin 
                        
                        // for reads: does the tag match the tag in cache?
                        logic tag_valid;
                        tag_valid = (cache[`REQUESTED_LINE].tag == `REQUESTED_TAG); 
                        
                        if ((`IS_READ||`IS_WRITE )&&`IS_UNSERVED) begin
                            //mutex-like behavior
                            consumer_mutex[j] = 1;
                            `CC <= j;

                            //// Consumer Read Request Available and unserved?
                            if (`IS_READ) begin
                                //read request, check if data is in the cache
                                logic req_line_valid = cache[`REQUESTED_LINE].valid[`REQUESTED_OFFSET];
                                if ( req_line_valid && tag_valid) begin
                                    // cache hit case
                                    `NEXTSTATE(CACHE_HIT);
                                    
                                end else begin
                                    // set up memory read
                                    mem_read_address[i] <= consumer_read_address[j] & CACHE_OFFSET_MASK; // | chunks_read; // todo: parameterize masking out the offset bit 
                                    mem_read_valid[i] <= 1;
                                    `NEXTSTATE(CACHE_MISS);
                                end
                                
                                // save some data for next cycle
                                consumer_req_offset <= `REQUESTED_OFFSET; //how many bits to offset into the cache line 
                                
                                // Once we find a pending request, pick it up with this channel and stop looking for requests
                                break;
    
                            //// Consumer Write Request Available
                            end else if (`IS_WRITE) begin 
                                
                                // Memory Write Request
                                mem_write_valid[i] <= 1;
                                mem_write_address[i] <= consumer_write_address[j];
                                mem_write_data[i] <= consumer_write_data[j];
                                `NEXTSTATE(WRITE_WAITING);
    
                                //// Writing Data to cache line
                                // Update cache line data and valid bit for this chunk
                                cache[`REQUESTED_LINE].data <= cache_write_by_offset(
                                    cache[`REQUESTED_LINE].data,
                                    `REQUESTED_OFFSET,
                                    consumer_write_data[j]
                                );

                                cache[`REQUESTED_LINE].valid <= cache[`REQUESTED_LINE].valid |
                                    cache_valid_mask_by_offset(`REQUESTED_OFFSET);
                                cache[`REQUESTED_LINE].dirty <= 1'b1;
                                
                                // Once we find a pending request, pick it up with this channel and stop looking for requests
                                break;
                            end
                        end
                    end
                end
                
                ////
                //// Directly relay information from cache to consumer
                CACHE_HIT: begin
                    //just relay the stuff from the cache
                    consumer_read_ready[`CC] <= 1;
                    `NEXTSTATE(READ_RELAYING);
    
                    // Read requested data chunk from cache
                    consumer_read_data[`CC] <= cache_read_by_offset(
                        cache[`CC_REQUESTED_LINE].data,
                        consumer_req_offset
                    );
                end
                
                            
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
    
                            // give the data back to the consumer
                            consumer_read_ready[`CC] <= 1;
                            `NEXTSTATE(READ_RELAYING); // next state
                            
                            // set the consumer read data to the desired cache line
                            consumer_read_data[`CC] <= select_consumer_read_data(
                                CACHE_OFFSET_BITS,
                                consumer_req_offset,
                                cache[`CC_REQUESTED_LINE].data,
                                mem_read_data[i]
                            );
                        end
                    end
                end
    
                ////
                ////
                CACHE_MISS_WAIT: begin
                    //start another read request
                    mem_read_address[i] <= (`CC_REQUESTED_ADDR & CACHE_OFFSET_MASK) | chunks_read; // mask out the offset bit
                    mem_read_valid[i] <= 1;
                    `NEXTSTATE(CACHE_MISS);
                end

                ////
                //// Wait for response from memory for pending write request
                WRITE_WAITING: begin 
                    if (mem_write_ready[i]) begin 
                        mem_write_valid[i] <= 0;
                        consumer_write_ready[`CC] <= 1;
                        `NEXTSTATE(WRITE_RELAYING);
                    end
                end
                
                ////
                //// Informs the consumer that a read has been completed
                READ_RELAYING: begin
                    chunks_read <= 0;
                    if (!consumer_read_valid[`CC]) begin 
                        consumer_mutex[`CC] = 0; // release mutex bit
                        consumer_read_ready[`CC] <= 0; // release the consumer communication line
                        `NEXTSTATE(IDLE); 
                    end
                end
                
                ////
                //// Informs the consumer that a write has been completed
                WRITE_RELAYING: begin 
                    if (!consumer_write_valid[`CC]) begin 
                        consumer_mutex[`CC] = 0;
                        consumer_write_ready[`CC] <= 0;
                        `NEXTSTATE(IDLE);
                    end
                end
                endcase
            end
        end
    endgenerate
endmodule

