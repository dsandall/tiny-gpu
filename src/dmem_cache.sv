`default_nettype none
`timescale 1ns/1ns

// MEMORY CONTROLLER
// > Receives memory requests from all LSUs
// > Throttles requests based on limited external memory bandwidth
// > Waits for responses from external memory and distributes them back to cores

// CACHE ADDITIONS
// > Retreive groups of bytes from memory
// > Stores bytes into cache lines
// > Saves them for later reads
parameter READ_ONLY = 0;
parameter CACHE_OFFSET_BITS = 1;
parameter CACHE_INDEX_BITS = 4;

module dmem_cache #(
    parameter ADDR_BITS = 8, // 16 bit addresses
    parameter DATA_BITS = 8, // 8 for data, 16 for program mem
    parameter NUM_CONSUMERS = 8, // The number of consumers accessing memory through this controller
    parameter NUM_CHANNELS = 4  // The number of concurrent channels available to send requests to global memory
) (
    input wire clk,
    input wire reset,

    // Consumer Interface (Fetchers / LSUs)
    input wire [NUM_CONSUMERS-1:0] consumer_read_valid,
    input wire [ADDR_BITS-1:0] consumer_read_address [NUM_CONSUMERS-1:0],
    output logic [NUM_CONSUMERS-1:0] consumer_read_ready,
    output logic [DATA_BITS-1:0] consumer_read_data [NUM_CONSUMERS-1:0],

    input wire [NUM_CONSUMERS-1:0] consumer_write_valid,
    input wire [ADDR_BITS-1:0] consumer_write_address [NUM_CONSUMERS-1:0],
    input wire [DATA_BITS-1:0] consumer_write_data [NUM_CONSUMERS-1:0],
    output logic [NUM_CONSUMERS-1:0] consumer_write_ready,

    // Memory Interface (Data / Program)    
    output logic [NUM_CHANNELS-1:0] mem_read_valid,
    output logic [ADDR_BITS-1:0] mem_read_address [NUM_CHANNELS-1:0],
    input wire [NUM_CHANNELS-1:0] mem_read_ready,
    input wire [DATA_BITS-1:0] mem_read_data [NUM_CHANNELS-1:0],

    output logic [NUM_CHANNELS-1:0] mem_write_valid,
    output logic [ADDR_BITS-1:0] mem_write_address [NUM_CHANNELS-1:0],
    output logic [DATA_BITS-1:0] mem_write_data [NUM_CHANNELS-1:0],
    input wire [NUM_CHANNELS-1:0] mem_write_ready
);
    ////
    //// Cache Data / SRAM 
    // mem_addr = [tag][line index][offset]
    // mem_addr = [3]  [4]         [1] bits

    // we start with cache offset, index and total address len (8b address
    // space is very tight...)

    // do the calculations based on provided bits
    `include "cache_utils.svh"
    // now we have all these definitions
    
    
    ////
    // Cache State: 
    ////

    //// For each hardware memory controller:
    //// FSM States. Could be split into more states,
    ////    depending on penalties for num clock cycles vs the clock freq of the cache FSM as a whole 
    typedef enum logic [7:0] {
        IDLE,
        CACHE_HIT,
        CACHE_MISS,
        CACHE_MISS_WAIT,
        READ_RELAYING,
        WRITE_WAITING,
        WRITE_RELAYING
    } controller_state_t;
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
            mem_read_valid <= 0;
            mem_read_address <= 0;
            
            mem_write_valid <= 0;
            mem_write_address <= 0;
            mem_write_data <= 0;
            
            consumer_read_ready <= 0;
            consumer_read_data <= 0;
            consumer_write_ready <= 0;
            
            current_consumer <= 0;
            controller_state <= 0;
            consumer_mutex = 0;
            
            // Initialize cache lines
            for (int k = 0; k < CACHE_NUM_LINES; k = k + 1) begin
                cache[k].data  <= '0;
                cache[k].tag   <= '0;
                cache[k].valid <= '0;
                cache[k].dirty <= 1'b0;
            end
        end
    end

    `define LINE_BITS CACHE_INDEX_BITS+CACHE_OFFSET_BITS-1:CACHE_OFFSET_BITS
    `define TAG_BITS ADDR_BITS-1:CACHE_INDEX_BITS+CACHE_OFFSET_BITS
    `define OFFSET_BITS CACHE_OFFSET_BITS-1:0


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
                                consumer_req_offset <= consumer_read_address[j][CACHE_OFFSET_BITS-1:0]; //how many bits to offset into the cache line 
                                
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
                                    consumer_write_address[j][CACHE_OFFSET_BITS-1:0],
                                    consumer_write_data[j]
                                );

                                cache[`REQUESTED_LINE].valid <= cache[`REQUESTED_LINE].valid |
                                    cache_valid_mask_by_offset(consumer_write_address[j][CACHE_OFFSET_BITS-1:0]);
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

function automatic logic [7:0] select_consumer_read_data;
    input int offset_bits;
    input logic [7:0] offset;           // up to 255 chunks supported
    input logic [255:0] line_data;      // up to 32 bytes; adjust width if needed
    input logic [7:0] tail_data;

    int max_index;
    int total_chunks;
    int i;

    begin
        total_chunks = 2 ** offset_bits;
        max_index = total_chunks - 1;

        // Default to zero
        select_consumer_read_data = 8'h00;

        // If offset == last chunk index, take tail_data
        if (offset == max_index) begin
            select_consumer_read_data = tail_data;
        end else begin
            // Manually select the byte at the specified offset
            for (i = 0; i < total_chunks; i = i + 1) begin
                if (offset == i) begin
                    select_consumer_read_data = line_data[(8*i)+:8];
                end
            end
        end
    end
endfunction
