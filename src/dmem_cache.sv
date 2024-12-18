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

    localparam CACHE_OFFSET_BITS = 1;
    localparam CACHE_INDEX_BITS = 4;

    // kinda gross, just pretend it's a case statement
    localparam CACHE_OFFSET_MASK = (CACHE_OFFSET_BITS == 0) ? 16'hBEEF :
    (CACHE_OFFSET_BITS == 1) ? 16'hFFFE :
    (CACHE_OFFSET_BITS == 2) ? 16'hFFFC : 16'h0000;
    localparam CACHE_TAG_BITS = ADDR_BITS - CACHE_INDEX_BITS - CACHE_OFFSET_BITS; //3 bit tags
    localparam NUM_CHUNKS = 2**(CACHE_OFFSET_BITS); 
    localparam CHUNK_SIZE = DATA_BITS;
    localparam CACHE_LINE_SIZE_BITS = NUM_CHUNKS * CHUNK_SIZE; //todo testing: this also should equal 
    localparam CACHE_NUM_LINES = 2**CACHE_INDEX_BITS; //todo testing: cache_num_lines * cache_line_size * tag possibilities should be equal to size of memory address space?
    
    // struct packed {
    //     bit [CACHE_LINE_SIZE_BITS-1:0] data;
    //     bit [CACHE_TAG_BITS-1:0] tag; //UID for cache data
    //     bit valid; //starts at 0, set to 1 when written to memory
    //     bit dirty; //starts at 0, set to 1 when written to by consumer (gpu thread)
    // } cache [CACHE_NUM_LINES-1:0];
    
    logic cache_valid [CACHE_NUM_LINES-1:0] [NUM_CHUNKS-1:0];
    logic cache_dirty [CACHE_NUM_LINES-1:0];
    logic cache_tags [CACHE_NUM_LINES-1:0] [CACHE_TAG_BITS-1:0];
    logic cache_data [CACHE_NUM_LINES-1:0] [CACHE_LINE_SIZE_BITS-1:0];
    wire [CACHE_INDEX_BITS-1:0] cache_line_read [NUM_CONSUMERS-1:0]; //todo: this should probably be what the channels act on, rather than per consumer.
    wire [CACHE_INDEX_BITS-1:0] cache_line_write [NUM_CONSUMERS-1:0]; //todo: this should probably be what the channels act on, rather than per consumer.

    //// Memory Channel Construction
    ////

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

    // Keep track of state for each channel and which jobs each channel is handling
    // The highest level ones, used for communication between channels
    logic [$clog2(NUM_CONSUMERS)-1:0] current_consumer [NUM_CHANNELS-1:0]; // Which consumer is each channel currently serving
    logic [NUM_CONSUMERS-1:0] channel_serving_consumer; // Which channels are being served? Prevents many workers from picking up the same request.

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
            channel_serving_consumer = 0;
            
            cache_data <= 0;
            cache_dirty <= 0;
            cache_tags <= 0;
            cache_valid <= 0;
        end
    end

    logic [NUM_CONSUMERS-1:0] tag_match_read;

    generate 
        for (genvar j = 0; j < NUM_CONSUMERS; j = j + 1) begin 
            assign cache_line_read[j] = consumer_read_address[j][CACHE_INDEX_BITS+CACHE_OFFSET_BITS-1:CACHE_OFFSET_BITS]; // extract the requested cache line as bits 
            assign cache_line_write[j] = consumer_write_address[j][CACHE_INDEX_BITS+CACHE_OFFSET_BITS-1:CACHE_OFFSET_BITS]; // extract the requested cache line as bits 
        end
    endgenerate

    //// Memory Channel Generate Block
    //// This is the rest of the file. 4 channels of parallel memory reads
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

                    // While this channel is idle, cycle through consumers looking for one with a pending request
                    for (int j = 0; j < NUM_CONSUMERS; j = j + 1) begin 
                        tag_match_read[j]  = (cache_tags[cache_line_read[j]] == consumer_read_address[j][ADDR_BITS-1:CACHE_INDEX_BITS+CACHE_OFFSET_BITS]); // does the tag match the tag in cache?
                        
                        //// Consumer Read Request Available
                        if (consumer_read_valid[j] && !channel_serving_consumer[j]) begin
                            //read request, check if data is in the cache
                            if(cache_valid[cache_line_read[j]][consumer_read_address[j][CACHE_OFFSET_BITS-1:0]] && tag_match_read[j]) begin
                                // cache hit case
                                controller_state[i] <= CACHE_HIT;
                                
                            end else begin
                                // set up memory read
                                mem_read_address[i] <= consumer_read_address[j] & CACHE_OFFSET_MASK; // | chunks_read; // todo: parameterize masking out the offset bit 
                                mem_read_valid[i] <= 1;
                                controller_state[i] <= CACHE_MISS;
                            end
                            
                            //mutex-like behavior
                            channel_serving_consumer[j] = 1;
                            current_consumer[i] <= j;
                            
                            // save some data for next step
                            consumer_req_offset <= consumer_read_address[j][CACHE_OFFSET_BITS-1:0]; //how many bits to offset into the cache line 
                            
                            // Once we find a pending request, pick it up with this channel and stop looking for requests
                            break;

                        //// Consumer Write Request Available
                        end else if (consumer_write_valid[j] && !channel_serving_consumer[j]) begin 
                            // mutex-like behavior
                            channel_serving_consumer[j] = 1;
                            current_consumer[i] <= j;
                            
                            // Memory Write Request
                            mem_write_valid[i] <= 1;
                            mem_write_address[i] <= consumer_write_address[j];
                            mem_write_data[i] <= consumer_write_data[j];
                            controller_state[i] <= WRITE_WAITING;

                            //// Writing Data to cache line
                            // Cache validation?
                            // If it's already valid, the data will be updated and remain valid.
                            // if it's not already valid, writing one chunk of data does not validate the cache. Push the data regardless, it's ok
                            // todo: also check write tag match
                            case (consumer_write_address[j][CACHE_OFFSET_BITS-1:0]) // find the byte which the user is trying to write
                                0: begin
                                    cache_data[cache_line_write[j]][(CHUNK_SIZE*(0+1))-1:CHUNK_SIZE*0] <= consumer_write_data[j]; //todo: param for different chunk sizes
                                    cache_valid[cache_line_write[j]] <= cache_valid[cache_line_write[j]] | 2'b01;
                                end
                                1: begin
                                    cache_data[cache_line_write[j]][(CHUNK_SIZE*(1+1))-1:CHUNK_SIZE*1] <= consumer_write_data[j]; //todo: param for different chunk sizes
                                    cache_valid[cache_line_write[j]] <= cache_valid[cache_line_write[j]] | 2'b10;
                                end
                            endcase        
                            
                            // Once we find a pending request, pick it up with this channel and stop looking for requests
                            break;
                        end
                    end
                end
                
                ////
                //// Directly relay information from cache to consumer
                CACHE_HIT: begin
                    //just relay the stuff from the cache
                    consumer_read_ready[current_consumer[i]] <= 1;
                    controller_state[i] <= READ_RELAYING;
                    
    
                    // For cache lines that are not == word length 
                    case (CACHE_OFFSET_BITS)
                        0: begin
                            // If CACHE_OFFSET_BITS is 0, assume no offset and just select the first byte
                            consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][7:0]; //mem_read_data?
                        end
                    
                        1: begin
                            // If CACHE_OFFSET_BITS is 1, use consumer_req_offset to select the correct byte
                            if (consumer_req_offset == 0) begin
                                consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][7:0];
                            end else begin
                                consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][15:8];
                            end
                        end
                    
                        2: begin
                            // If CACHE_OFFSET_BITS is 2, we may have to select data from 4-byte chunks
                            // You can use similar logic to the previous case
                            case (consumer_req_offset)
                                0: consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][7:0];
                                1: consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][15:8];
                                2: consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][23:16];
                                3: consumer_read_data[current_consumer[i]] <= mem_read_data[i];
                            endcase
                        end

                        3: begin
                            // Handle the case where CACHE_OFFSET_BITS is 3
                            // Handling a 3-bit offset
                            if (consumer_req_offset == 0) begin
                                consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][31:0];
                            end else if (consumer_req_offset == 3) begin
                                consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][39:32];
                            end else begin
                                consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][47:40];
                            end
                        end
                    
                        default: begin
                            // Handle any default or invalid cases if needed
                            consumer_read_data[current_consumer[i]] <= 0;
                        end
                    endcase
                end
                

                            
                ////
                //// Waits for read transaction from memory, stores data into cache
                CACHE_MISS: begin

                    if (mem_read_ready[i]) begin 
                        // end memory request sig
                        mem_read_valid[i] <= 0;
                        chunks_read <= chunks_read + 1;

                        // complete memreads
                        case (chunks_read) 
                            0: begin
                                cache_data[cache_line_read[current_consumer[i]]][(CHUNK_SIZE*(0 +1))-1:CHUNK_SIZE*0] <= mem_read_data[i]; //todo: param for different chunk sizes
                            end
                            1: begin
                                cache_data[cache_line_read[current_consumer[i]]][(CHUNK_SIZE*(1 +1))-1:CHUNK_SIZE*1] <= mem_read_data[i]; //todo: param for different chunk sizes
                            end
                            2: begin
                                cache_data[cache_line_read[current_consumer[i]]][(CHUNK_SIZE*(2 +1))-1:CHUNK_SIZE*2] <= mem_read_data[i]; //todo: param for different chunk sizes   
                            end
                            3: begin
                                cache_data[cache_line_read[current_consumer[i]]][(CHUNK_SIZE*(3 +1))-1:CHUNK_SIZE*3] <= mem_read_data[i]; //todo: param for different chunk sizes
                            end
                        endcase                        
                        
    
                        // If you're not done with the chunks, keep waiting
                        if (chunks_read < (NUM_CHUNKS - 1)) begin

                            controller_state[i] <= CACHE_MISS_WAIT;


                        // If it's the final chunk read, the cache is now valid and properly tagged
                        end else begin

                            // Tag it and bag it
                            cache_valid[cache_line_read[current_consumer[i]]] <= 2'b11; // validate cache line TODO:
                            cache_tags[cache_line_read[current_consumer[i]]] <= mem_read_address[i][ADDR_BITS-1:ADDR_BITS-CACHE_TAG_BITS];
    
                            // give the data back to the consumer
                            consumer_read_ready[current_consumer[i]] <= 1;
                            controller_state[i] <= READ_RELAYING; // next state
                            
                            // set the consumer read data to the desired cache line
                            // it's not pretty... but it works. Had trouble with parameterization
                            case (CACHE_OFFSET_BITS)
                                0: begin
                                    // If CACHE_OFFSET_BITS is 0, assume no offset and just select the first byte
                                    consumer_read_data[current_consumer[i]] <= mem_read_data[i]; //mem_read_data?
                                end
                            
                                1: begin
                                    // If CACHE_OFFSET_BITS is 1, use consumer_req_offset to select the correct byte out of 2 chunks
                                    case (consumer_req_offset)
                                        0: consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][7:0];
                                        1: consumer_read_data[current_consumer[i]] <= mem_read_data[i];
                                    endcase
                                end
                            
                                2: begin
                                    // If CACHE_OFFSET_BITS is 2, we may have to select data from 4 chunks
                                    // You can use similar logic to the previous case
                                    case (consumer_req_offset)
                                        0: consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][7:0];
                                        1: consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][15:8];
                                        2: consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][23:16];
                                        3: consumer_read_data[current_consumer[i]] <= mem_read_data[i];
                                    endcase
                                    
                                end
    
                                // 3: begin
                                //     // Handle the case where CACHE_OFFSET_BITS is 3
                                //     // Handling a 3-bit offset
                                //     case (consumer_req_offset)
                                //         0: consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][7:0];
                                //         1: consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][15:8];
                                //         2: consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][23:16];
                                //         3: consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][7:0];
                                //         4: consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][7:0];
                                //         5: consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][15:8];
                                //         6: consumer_read_data[current_consumer[i]] <= cache_data[cache_line_read[current_consumer[i]]][23:16];
                                //         7: consumer_read_data[current_consumer[i]] <= mem_read_data[i];
                                //     endcase
                                // end
                            
                                // default: begin
                                //     // Handle any default or invalid cases if needed
                                //     consumer_read_data[current_consumer[i]] <= 0;
                                // end
                            endcase
                        end
                    end
                end
    
                ////
                ////
                CACHE_MISS_WAIT: begin
                    //start another read request
                    mem_read_address[i] <= (consumer_read_address[current_consumer[i]] & CACHE_OFFSET_MASK) | chunks_read; // mask out the offset bit
                    mem_read_valid[i] <= 1;
    
                    controller_state[i] <= CACHE_MISS;                    
                end

                ////
                //// Wait for response from memory for pending write request
                WRITE_WAITING: begin 
                    if (mem_write_ready[i]) begin 
                        mem_write_valid[i] <= 0;
                        consumer_write_ready[current_consumer[i]] <= 1;
                        controller_state[i] <= WRITE_RELAYING;
                    end
                end
                
                ////
                //// Informs the consumer that a read has been completed
                READ_RELAYING: begin
                    chunks_read <= 0;
                    if (!consumer_read_valid[current_consumer[i]]) begin 
    
                        channel_serving_consumer[current_consumer[i]] = 0; // release mutex bit
                        consumer_read_ready[current_consumer[i]] <= 0; // release the consumer communication line
                        controller_state[i] <= IDLE; 
                    end
                end
                
                ////
                //// Informs the consumer that a write has been completed
                WRITE_RELAYING: begin 
                    if (!consumer_write_valid[current_consumer[i]]) begin 
                        channel_serving_consumer[current_consumer[i]] = 0;
                        consumer_write_ready[current_consumer[i]] <= 0;
                        controller_state[i] <= IDLE;
                    end
                end
                endcase
            end
        end
    endgenerate
endmodule
