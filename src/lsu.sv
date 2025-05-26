`include "enums.svh"

// LOAD-STORE UNIT
// > Handles asynchronous memory load and store operations and waits for response
// > Each thread in each core has it's own LSU
// > LDR, STR instructions are executed here
module lsu (
    input wire clk,
    input wire reset,
    input wire enable, // If current block has less threads then block size, some LSUs will be inactive

    // State
    input corestate_t core_state,

    // Memory Control Sgiansl
    input reg decoded_mem_read_enable,
    input reg decoded_mem_write_enable,

    // Registers
    input reg [7:0] rs,
    input reg [7:0] rt,

    // Data Memory
    output reg mem_read_valid,
    output reg [7:0] mem_read_address,
    input reg mem_read_ready,
    input reg [7:0] mem_read_data,
    output reg mem_write_valid,
    output reg [7:0] mem_write_address,
    output reg [7:0] mem_write_data,
    input reg mem_write_ready,

    // LSU Outputs
    output LSU_state_t lsu_state,
    output reg [7:0] lsu_out
);

    always @(posedge clk) begin
        if (reset) begin
            lsu_state <= LSU_IDLE;
            lsu_out <= 0;
            mem_read_valid <= 0;
            mem_read_address <= 0;
            mem_write_valid <= 0;
            mem_write_address <= 0;
            mem_write_data <= 0;
        end else if (enable) begin
            // If memory read enable is triggered (LDR instruction)
            if (decoded_mem_read_enable) begin 
                case (lsu_state)
                    LSU_IDLE: begin
                        // Only read when core_state = REQUEST
                        if (core_state == CORE_REQUEST) begin 
                            lsu_state <= LSU_REQUESTING;
                        end
                    end
                    LSU_REQUESTING: begin 
                        mem_read_valid <= 1;
                        mem_read_address <= rs;
                        lsu_state <= LSU_WAITING;
                    end
                    LSU_WAITING: begin
                        if (mem_read_ready == 1) begin
                            mem_read_valid <= 0;
                            lsu_out <= mem_read_data;
                            lsu_state <= LSU_DONE;
                        end
                    end
                    LSU_DONE: begin 
                        // Reset when core_state = UPDATE
                        if (core_state == CORE_UPDATE) begin 
                            lsu_state <= LSU_IDLE;
                        end
                    end
                endcase
            end

            // If memory write enable is triggered (STR instruction)
            if (decoded_mem_write_enable) begin 
                case (lsu_state)
                    LSU_IDLE: begin
                        // Only read when core_state = REQUEST
                        if (core_state == CORE_REQUEST) begin 
                            lsu_state <= LSU_REQUESTING;
                        end
                    end
                    LSU_REQUESTING: begin 
                        mem_write_valid <= 1;
                        mem_write_address <= rs;
                        mem_write_data <= rt;
                        lsu_state <= LSU_WAITING;
                    end
                    LSU_WAITING: begin
                        if (mem_write_ready) begin
                            mem_write_valid <= 0;
                            lsu_state <= LSU_DONE;
                        end
                    end
                    LSU_DONE: begin 
                        // Reset when core_state = UPDATE
                        if (core_state == CORE_UPDATE) begin 
                            lsu_state <= LSU_IDLE;
                        end
                    end
                endcase
            end
        end
    end
endmodule
