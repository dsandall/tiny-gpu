`default_nettype none
`timescale 1ns/1ns

// pmem dataflow is simple in the current form. 1 memory bus, 2 CPUs. 
// the pmem_controller already turns 1 data source into 2 data sinks
// pmem_cache just needs to cache 1 source to 1 sink, and it doesn't even have to write to cache  

module pmem_cache #(
    parameter ADDR_BITS, // 16 bit addresses
    parameter DATA_BITS, // 8 for data, 16 for program mem
    parameter NUM_CONSUMERS, // The number of consumers accessing memory through this controller
    parameter NUM_CHANNELS,  // The number of concurrent channels available to send requests to global memory
) (
    input wire clk, 
    input wire reset,
    
    // pmem_controller (towards CPU cores)
    input  reg [NUM_CONSUMERS-1:0]   controller_read_valid,
    input  reg [ADDR_BITS-1:0]      controller_read_address    [NUM_CONSUMERS-1:0],
    output reg [NUM_CONSUMERS-1:0]   controller_read_ready,
    output reg [DATA_BITS-1:0]      controller_read_data       [NUM_CONSUMERS-1:0],

    // Program memory (SRAM)
    output reg [NUM_CHANNELS-1:0] mem_read_valid,
    output reg [ADDR_BITS-1:0]    mem_read_address  [NUM_CHANNELS-1:0],
    input  reg [NUM_CHANNELS-1:0] mem_read_ready,
    input  reg [DATA_BITS-1:0]    mem_read_data     [NUM_CHANNELS-1:0],
  x

    );
    
    
    // localparam CACHE_NUM_LINES = ((2**ADDR_BITS))*DATA_BITS)/CACHE_LINE_SIZE_BITS = 128; //if you were to store all of memory the mem in cache...
    // localparam CACHE_LINE_SIZE_BITS = 32; //2 instructions per line
    localparam CACHE_LINE_SIZE_BITS = 16; //1 instruct per cache line

    localparam CACHE_NUM_LINES = 16;
    // this means: mem_addr[0] Line/instr Offset "upper or lower instr in the line?"
    // mem_addr[4:1] Index (which cache line) (this also means a given data must be placed in a given line based on it's addr)
    // remaining bits serve as a UID for the data in the cache, and can tell if data is valid.
    struct packed {
        bit [CACHE_LINE_SIZE_BITS-1:0] data;
        bit [3:0] tag; //UID for cache data
        bit valid; //starts at 0, set to 1 when written to memory
        bit dirty; //starts at 0, set to 1 when written to by consumer (gpu thread)
    } cache [CACHE_NUM_LINES-1:0];



    reg [2:0] controller_state [NUM_CHANNELS-1:0];
    localparam IDLE = 3'b000, 
    CACHE_HIT = 3'b001,
    CACHE_MISS = 3'b110,
    READ_RELAYING = 3'b100,
    WRITE_WAITING = 3'b011,
    WRITE_RELAYING = 3'b101;

    always @(posedge clk) begin
        if (reset) begin
            // reset internal signals 
            cache <= 0;
            controller_state <= 0;

            // also reset output registers
            mem_read_valid <= 0;
            mem_read_address <= 0;
            // mem_write_valid <= 0;
            // mem_write_address <= 0;
            // mem_write_data <= 0;
            controller_read_ready <= 0;
            controller_read_data <= 0;
            // controller_write_ready <= 0;

            
        end else begin
            for (int i = 0; i < NUM_CHANNELS; i = i + 1) begin 
                int j = 0;
                //the 0 indeces below are j
                logic [3:0] cache_line = controller_read_address[0][3:0];
                logic tag_match = (cache[cache_line].tag == controller_read_address[0][7:4]);
                
                case (controller_state[i]) 
                    IDLE: begin
                        if (controller_read_valid[j]) begin //todo

                            if (cache[cache_line].valid && tag_match) begin
                                controller_state[i] <= CACHE_HIT;
                            end else begin
                                mem_read_address[i] <= controller_read_address[j];
                                mem_read_valid[i] <= 1;
                                controller_state[i] <= CACHE_MISS;
                            end
                        end
                    end

                    CACHE_HIT: begin
                        //just relay the stuff from the cache (can i add delay here in sv?)
                        controller_read_ready[j] <= 1;
                        
                        controller_read_data[j] <= cache[cache_line].data;
                        // //For cache lines that are not == word length 
                        // if (controller_read_address[0] == 1'b0) begin
                        //     controller_read_data <= cache[0].data[15:0];
                        // end else begin
                        //     controller_read_data <= cache[0].data[31:16];
                        // end

                        controller_state[i] <= READ_RELAYING;
                    end

                    CACHE_MISS: begin
                        //wait for response from memory 
                        if (mem_read_ready[i]) begin
                            mem_read_valid[i] <= 0;
                            controller_read_ready[j] <= 1;
                            controller_read_data[j] <= mem_read_data[i];

                            cache[cache_line].data <= mem_read_data[i];
                            cache[cache_line].valid <= 1;
                            cache[cache_line].tag <= mem_read_address[i][7:4];
                            // if (controller_read_address[0] == 1'b0) begin
                            //     cache[0].data[15:0] <= mem_read_data; 
                            // end else begin
                            //     cache[0].data[31:16] <= mem_read_data;
                            // end
                            
                            controller_state[i] <= READ_RELAYING;
                        end
                    end

                    READ_RELAYING: begin
                        if (!controller_read_valid[j]) begin
                            controller_read_ready[j] <= 0;
                            controller_read_data[j] <= 0;
                            controller_state[i] <= IDLE;
                        end
                    end
                endcase



            end
        end
    end


    // localparam IDLE = 3'b000, 
    // READ_WAITING = 3'b010, 
    // WRITE_WAITING = 3'b011,
    // READ_RELAYING = 3'b100,
    // WRITE_RELAYING = 3'b101;

    // always @(posedge clk) begin
    //     if (reset) begin
    //         // reset internal signals 
            
    //     end else begin
    //         // For each channel, we handle processing concurrently
    //         for (int i = 0; i < NUM_CHANNELS; i = i + 1) begin 
    //             // cache logic
    //             case (state)
                    
    //                 IDLE: begin
    //                     if (controller_read_valid) begin
                            
    //                     end
    //                 end

    //                 READ_WAITING: begin
                        
    //                 end
                    
    //             endcase
    //         end
    //     end
    // end
    
endmodule