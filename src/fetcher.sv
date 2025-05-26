`default_nettype none
`timescale 1ns/1ns
`include "enums.svh"

// Unfortunately, you cant use interfaces as module input/outputs... 
// so this is very limited for actual cleanup and bundling of the code
// TODO: remove this and replace with something that can be bundled through
// the struct
interface MemChannelIF #(
    parameter ADDR_BITS = 32,
    parameter DATA_BITS = 32
);
    logic        read_valid;
    logic [ADDR_BITS-1:0] read_address;
    logic        read_ready;
    logic [DATA_BITS-1:0] read_data;

    logic        write_valid;
    logic [ADDR_BITS-1:0] write_address;
    logic [DATA_BITS-1:0] write_data;
    logic        write_ready;
endinterface

// INSTRUCTION FETCHER
// > Retrieves the instruction at the current PC from global data memory
// > Each core has it's own fetcher
module fetcher #(
    parameter PROGRAM_MEM_ADDR_BITS = 8,
    parameter PROGRAM_MEM_DATA_BITS = 16
) (
    input wire clk,
    input wire reset,
    
    // Execution State
    input corestate_t core_state,
    input reg [7:0] current_pc,

    // Program Memory
    output reg mem_read_valid,
    output reg [PROGRAM_MEM_ADDR_BITS-1:0] mem_read_address,
    input reg mem_read_ready,
    input reg [PROGRAM_MEM_DATA_BITS-1:0] mem_read_data,

    // Fetcher Output
    output fetcher_state_t fetcher_state,
    output reg [PROGRAM_MEM_DATA_BITS-1:0] instruction
);
    
    MemChannelIF #(
        .ADDR_BITS(PROGRAM_MEM_ADDR_BITS),
        .DATA_BITS(PROGRAM_MEM_DATA_BITS)
    ) mem_if();

    assign mem_read_valid = mem_if.read_valid;
    assign mem_read_address = mem_if.read_address;
    assign mem_if.read_ready = mem_read_ready;
    assign mem_if.read_data = mem_read_data;

    always @(posedge clk) begin
        if (reset) begin
            fetcher_state <= FET_IDLE;
            mem_if.read_valid <= 0;
            mem_if.read_address <= 0;
            instruction <= {PROGRAM_MEM_DATA_BITS{1'b0}};
        end else begin
            case (fetcher_state)
                FET_IDLE: begin
                    // Start fetching when core_state = FETCH
                    if (core_state == CORE_FETCH) begin
                        fetcher_state <= FET_CHING;
                        mem_if.read_valid <= 1;
                        mem_if.read_address <= current_pc;
                    end
                end
                FET_CHING: begin
                    // Wait for response from program memory
                    if (mem_if.read_ready) begin
                        fetcher_state <= FET_DONE;
                        instruction <= mem_if.read_data; // Store the instruction when received
                        mem_if.read_valid <= 0;
                    end
                end
                FET_DONE: begin
                    // Reset when core_state = DECODE
                    if (core_state == CORE_DECODE) begin 
                        fetcher_state <= FET_DONE;
                    end
                end
            endcase
        end
    end
endmodule
