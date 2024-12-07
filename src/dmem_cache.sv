`default_nettype none
`timescale 1ns/1ns

// MEMORY CONTROLLER
// > Receives memory requests from all LSUs
// > Throttles requests based on limited external memory bandwidth
// > Waits for responses from external memory and distributes them back to cores
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
    // localparam CACHE_NUM_LINES = ((2**ADDR_BITS))*DATA_BITS)/CACHE_LINE_SIZE_BITS = 128; //if you were to store all of memory the mem in cache...
// localparam CACHE_LINE_SIZE_BITS = 32; //2 instructions per line

localparam CACHE_OFFSET_BITS = 1;
localparam CACHE_INDEX_BITS = 4;
localparam CACHE_TAG_BITS = ADDR_BITS - CACHE_INDEX_BITS - CACHE_OFFSET_BITS; //3 bit tags
localparam NUM_CHUNKS = 2**(CACHE_OFFSET_BITS); 
localparam CHUNK_SIZE = DATA_BITS;
localparam CACHE_LINE_SIZE_BITS = NUM_CHUNKS * CHUNK_SIZE; //todo testing: this also should equal 
localparam CACHE_NUM_LINES = 2**CACHE_INDEX_BITS; //todo testing: cache_num_lines * cache_line_size * tag possibilities should be equal to size of memory address space?
//mem_addr = [tag][line index][offset]
//mem_addr = [remaining][4][3] bits


    // struct packed {
    //     bit [CACHE_LINE_SIZE_BITS-1:0] data;
    //     bit [CACHE_TAG_BITS-1:0] tag; //UID for cache data
    //     bit valid; //starts at 0, set to 1 when written to memory
    //     bit dirty; //starts at 0, set to 1 when written to by consumer (gpu thread)
    // } cache [CACHE_NUM_LINES-1:0];

    logic cache_valid [CACHE_NUM_LINES-1:0];
    logic cache_dirty [CACHE_NUM_LINES-1:0];
    logic cache_tags [CACHE_NUM_LINES-1:0] [CACHE_TAG_BITS-1:0];
    logic cache_data [CACHE_NUM_LINES-1:0] [CACHE_LINE_SIZE_BITS-1:0];

    // struct packed {
    //     bit [CACHE_LINE_SIZE_BITS-1:0] data;
    //     bit [CACHE_TAG_BITS-1:0] tag; //UID for cache data
    //     bit valid; //starts at 0, set to 1 when written to memory
    //     bit dirty; //starts at 0, set to 1 when written to by consumer (gpu thread)
    // } dummycache [CACHE_NUM_LINES-1:0];

    // initial begin
    //     dummycache = 0;
    //     #5
    //     dummycache[0].valid = 1;
    //     #5
    //     dummycache[1].valid = 1;
    // end

    typedef enum logic [7:0] {
        IDLE,
        CACHE_HIT,
        CACHE_MISS,
        CACHE_MISS_WAIT,
        CACHE_MISS_2,
        CACHE_MISS_WAIT_2,
        READ_RELAYING,
        WRITE_WAITING,
        WRITE_RELAYING
    } controller_state_t;

    // Keep track of state for each channel and which jobs each channel is handling
    controller_state_t controller_state [NUM_CHANNELS-1:0];
    logic [$clog2(NUM_CONSUMERS)-1:0] current_consumer [NUM_CHANNELS-1:0]; // Which consumer is each channel currently serving
    logic [NUM_CONSUMERS-1:0] channel_serving_consumer; // Which channels are being served? Prevents many workers from picking up the same request.
    
    logic [CACHE_INDEX_BITS-1:0] cache_line [NUM_CONSUMERS-1:0];
    logic [NUM_CONSUMERS-1:0] tag_match;

    // For each channel, we handle processing concurrently
    generate
        for (genvar i = 0; i < NUM_CHANNELS; i = i + 1) begin 

            logic consumer_req_offset [7:0]; //arbitrary size todo:
            int chunks_read = 0;


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
    
                    
                case (controller_state[i])
                IDLE: begin
                    // While this channel is idle, cycle through consumers looking for one with a pending request
                    for (int j = 0; j < NUM_CONSUMERS; j = j + 1) begin 
                        cache_line[j] = consumer_read_address[j][CACHE_INDEX_BITS+CACHE_OFFSET_BITS-1:CACHE_OFFSET_BITS];
                        tag_match[j]  = (cache_tags[cache_line[j]] == consumer_read_address[j][ADDR_BITS-1:CACHE_INDEX_BITS+CACHE_OFFSET_BITS]);
                        
                        if (consumer_read_valid[j] && !channel_serving_consumer[j]) begin
                            //read request, check if data is in the cache
                            if(cache_valid[cache_line[j]] && tag_match[j]) begin
                                controller_state[i] <= CACHE_HIT;
                                
                            end else begin
                                // set up memory read
                                mem_read_address[i] <= consumer_read_address[j] & 16'hFFFE; // mask out the offset bit
                                mem_read_valid[i] <= 1;
                                controller_state[i] <= CACHE_MISS;
                            end
                            
                            //mutex-like behavior
                            channel_serving_consumer[j] = 1;
                            current_consumer[i] <= j;
                            
                            consumer_req_offset <= consumer_read_address[j][CACHE_OFFSET_BITS-1:0]; //how many bits to offset into the cache line 
    
                            
                            // Once we find a pending request, pick it up with this channel and stop looking for requests
                            break;
                        end else if (consumer_write_valid[j] && !channel_serving_consumer[j]) begin 
                            channel_serving_consumer[j] = 1;
                            current_consumer[i] <= j;
                            
                            mem_write_valid[i] <= 1;
                            mem_write_address[i] <= consumer_write_address[j];
                            mem_write_data[i] <= consumer_write_data[j];
                            controller_state[i] <= WRITE_WAITING;
                            
                            // Once we find a pending request, pick it up with this channel and stop looking for requests
                            break;
                        end
                    end
                end
                
    
                CACHE_HIT: begin
                    //just relay the stuff from the cache (can i add delay here in sv?)
                    consumer_read_ready[current_consumer[i]] <= 1;
                    controller_state[i] <= READ_RELAYING;
                    
    
                    // //For cache lines that are not == word length 
                    // if (consumer_read_address[current_consumer[i]][0] == 1'b0) begin
                    //     consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][7:0];
                    // end else begin
                    //     consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][15:8];
                    // end
                    // // todo: experimental parameterized version 
                    case (CACHE_OFFSET_BITS)
                        0: begin
                            // If CACHE_OFFSET_BITS is 0, assume no offset and just select the first byte
                            consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][7:0]; //mem_read_data?
                        end
                    
                        1: begin
                            // If CACHE_OFFSET_BITS is 1, use consumer_req_offset to select the correct byte
                            if (consumer_req_offset == 0) begin
                                consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][7:0];
                            end else begin
                                consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][15:8];
                            end
                        end
                    
                        2: begin
                            // If CACHE_OFFSET_BITS is 2, we may have to select data from 4-byte chunks
                            // You can use similar logic to the previous case
                            case (consumer_req_offset)
                                0: consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][7:0];
                                1: consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][15:8];
                                2: consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][23:16];
                                3: consumer_read_data[current_consumer[i]] <= mem_read_data[i];
                            endcase
                        end

                        3: begin
                            // Handle the case where CACHE_OFFSET_BITS is 3
                            // Handling a 3-bit offset
                            if (consumer_req_offset == 0) begin
                                consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][31:0];
                            end else if (consumer_req_offset == 3) begin
                                consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][39:32];
                            end else begin
                                consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][47:40];
                            end
                        end
                    
                        default: begin
                            // Handle any default or invalid cases if needed
                            consumer_read_data[current_consumer[i]] <= 0;
                        end
                    endcase
                end
                
                CACHE_MISS: begin
                    // Wait for first response from memory for pending read request
                    if (mem_read_ready[i]) begin 
                        mem_read_valid[i] <= 0;
                        // consumer_read_ready[current_consumer[i]] <= 1;
                        // consumer_read_data[current_consumer[i]] <= mem_read_data[i];
                        
                        cache_data[cache_line[current_consumer[i]]][CHUNK_SIZE-1:0] <= mem_read_data[i]; //todo: param for different chunk sizes
                        chunks_read <= chunks_read + 1;
    
                        if (CACHE_INDEX_BITS < 1) begin
                            // go directly to end state
                            controller_state[i] <= READ_RELAYING;                    
                        end else begin
                            // otherwise continue
                            controller_state[i] <= CACHE_MISS_WAIT;
                        end
                    end
                end
                
                
    
                CACHE_MISS_2: begin
                    // Wait for second response from memory for pending read request
                    if (mem_read_ready[i]) begin 
                        // end memory request sig
                        mem_read_valid[i] <= 0;
                        
                        // complete memreads, 
                        cache_data[cache_line[current_consumer[i]]][15:8] <= mem_read_data[i]; //todo: second chunk 
                        chunks_read <= chunks_read + 1;
    
                        if (chunks_read < (NUM_CHUNKS - 1)) begin
                            controller_state[i] <= CACHE_MISS_WAIT_2;
                        end else begin
                            // (if final chunk read) the cache is now valid and properly tagged
                            cache_valid[cache_line[current_consumer[i]]] <= 1; // validate cache line
                            cache_tags[cache_line[current_consumer[i]]] <= mem_read_address[i][ADDR_BITS-1:ADDR_BITS-CACHE_TAG_BITS];
    
                            // give the data back to the consumer
                            consumer_read_ready[current_consumer[i]] <= 1;
                            controller_state[i] <= READ_RELAYING; // next state
                            
                            // // todo: experimental parameterized version 
                            // consumer_req_offset = CHUNK_SIZE * consumer_read_address[current_consumer[i]][CACHE_OFFSET_BITS-1:0]; //how many bits to offset into the cache line 
                            // consumer_read_data[current_consumer[i]] <= cache[cache_line[current_consumer[i]]].data[consumer_req_offset+CHUNK_SIZE-1:consumer_req_offset];
                            // //temporary fix
                            case (CACHE_OFFSET_BITS)
                                0: begin
                                    // If CACHE_OFFSET_BITS is 0, assume no offset and just select the first byte
                                    consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][7:0]; //mem_read_data?
                                end
                            
                                1: begin
                                    // If CACHE_OFFSET_BITS is 1, use consumer_req_offset to select the correct byte
                                    if (consumer_req_offset == 0) begin
                                        consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][7:0];
                                    end else begin
                                        consumer_read_data[current_consumer[i]] <= mem_read_data[i];
                                    end
                                end
                            
                                2: begin
                                    // If CACHE_OFFSET_BITS is 2, we may have to select data from 4-byte chunks
                                    // You can use similar logic to the previous case
                                    case (consumer_req_offset)
                                        0: consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][7:0];
                                        1: consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][15:8];
                                        2: consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][23:16];
                                        3: consumer_read_data[current_consumer[i]] <= mem_read_data[i];
                                    endcase
                                end
    
                                3: begin
                                    // Handle the case where CACHE_OFFSET_BITS is 3
                                    // Handling a 3-bit offset
                                    if (consumer_req_offset == 0) begin
                                        consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][31:0];
                                    end else if (consumer_req_offset == 3) begin
                                        consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][39:32];
                                    end else begin
                                        consumer_read_data[current_consumer[i]] <= cache_data[cache_line[current_consumer[i]]][47:40];
                                    end
                                end
                            
                                default: begin
                                    // Handle any default or invalid cases if needed
                                    consumer_read_data[current_consumer[i]] <= 0;
                                end
                            endcase
                        end
                    end
                end
    
                    
                CACHE_MISS_WAIT: begin
                    //start another read request
                    mem_read_address[i] <= (consumer_read_address[current_consumer[i]] & 16'hFFFE) | 16'b0001; // mask out the offset bit
                    mem_read_valid[i] <= 1;
    
                    controller_state[i] <= CACHE_MISS_2;                    
                end
    
                // CACHE_MISS_WAIT_2: begin
                //     //start another read request
                //     mem_read_address[i] <= (consumer_read_address[current_consumer[i]] & 16'hFFFC) | 16'b0010; // mask out the offset bit
                //     mem_read_valid[i] <= 1;
                
                //     controller_state[i] <= CACHE_MISS_2;                    
                // end
    
                // CACHE_MISS_WAIT_3: begin
                //     //start another read request
                //     mem_read_address[i] <= (consumer_read_address[current_consumer[i]] & 16'hFFFC) | 16'b0011; // mask out the offset bit
                //     mem_read_valid[i] <= 1;
                
                //     controller_state[i] <= CACHE_MISS_4;                    
                // end
    
                // Wait until consumer acknowledges it received response, then reset
                READ_RELAYING: begin
                    chunks_read <= 0;
                    if (!consumer_read_valid[current_consumer[i]]) begin 
    
                        channel_serving_consumer[current_consumer[i]] = 0; // release mutex bit
                        consumer_read_ready[current_consumer[i]] <= 0; // release the consumer communication line
                        controller_state[i] <= IDLE; 
                    end
                end
    
                WRITE_WAITING: begin 
                    // Wait for response from memory for pending write request
                    if (mem_write_ready[i]) begin 
                        mem_write_valid[i] <= 0;
                        consumer_write_ready[current_consumer[i]] <= 1;
                        controller_state[i] <= WRITE_RELAYING;
                    end
                end
                
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
