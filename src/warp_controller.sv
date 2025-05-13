`default_nettype none
`timescale 1ns/1ns

// warp_controller UNIT
// > stores the warps at there current state
// > In this minimal implementation, the ALU supports the 4 basic arithmetic operations
// > Each thread in each core has it's own ALU
// > ADD, SUB, MUL, DIV instructions are all executed here
module warp_controller #(
    parameter THREADS_PER_BLOCK = 4,
) (
    input wire clk,

    input wire start_1,
    input wire start_2,
    input wire reset_1,
    input wire reset_2,
    input wire done,

    input wire [$clog2(THREADS_PER_BLOCK):0] thread_count_1,
    input wire [$clog2(THREADS_PER_BLOCK):0] thread_count_2,

    // inputs from schedulers
    input reg warp_select,
    input reg [2:0] core_state,
    input reg [7:0] current_pc,


    //inputs from fetcher 1
    input reg [2:0] fetcher_state_1,
    input reg [15:0] instruction_1,

    //inputs from fetcher 2
    input reg [2:0] fetcher_state_2,
    input reg [15:0] instruction_2,

    //inputs from lsu 1
    input reg [1:0] lsu_state_1[THREADS_PER_BLOCK-1:0],
    input reg [7:0] lsu_out_1[THREADS_PER_BLOCK-1:0],


    //inputs from lsu 2
    input reg [1:0] lsu_state_2[THREADS_PER_BLOCK-1:0],
    input reg [7:0] lsu_out_2[THREADS_PER_BLOCK-1:0],

    //inputs from reg 1
    input reg [7:0] rs_1,
    input reg [7:0] rt_1,

    //inputs from reg 2
    input reg [7:0] rs_2,
    input reg [7:0] rt_2,

    //inputs from decoder
    input reg decoded_mem_read_enable,            // Enable reading from memory
    input reg decoded_mem_write_enable,           // Enable writing to memory

    //Outputs
    output reg [7:0] current_pc_1,
    output reg [7:0] current_pc_2,
    output reg  [2:0] core_state_1,
    output reg  [2:0] core_state_2,
    output reg decoded_mem_read_enable_1,            // Enable reading from memory
    output reg decoded_mem_write_enable_1,           // Enable writing to memory
    output reg decoded_mem_read_enable_2,            // Enable reading from memory
    output reg decoded_mem_write_enable_2,           // Enable writing to memory
    output reg done_1,
    output reg done_2,

    output wire start,
    output wire reset,
    output wire [$clog2(THREADS_PER_BLOCK):0] thread_count,
    output reg [2:0] fetcher_state,
    output reg [15:0] instruction,
    output reg [1:0] lsu_state[THREADS_PER_BLOCK-1:0],
    output reg [7:0] lsu_out[THREADS_PER_BLOCK-1:0],
    output reg [7:0] rs,
    output reg [7:0] rt

    
    
);
    
// look at the current state of warp controller_select and output the neceisarry data
always @(posedge clk) begin 
    if (reset_1) begin 
        done_1 <= 0;
        current_pc_1 <= 0;
        core_state_1 <= 3'b000;
        decoded_mem_read_enable_1 <= 0;       
        decoded_mem_write_enable_1 <= 0;
        done_1 <= 0;
    end 

    if (reset_2) begin 
        done_2 <= 0;
        current_pc_2 <= 0;
        core_state_2 <= 3'b000;
        decoded_mem_read_enable_2 <= 0;       
        decoded_mem_write_enable_2 <= 0; 

    end else if (warp_select) begin
        current_pc_2 <= current_pc;
        core_state_2 <= core_state;
        decoded_mem_read_enable_2 <= decoded_mem_read_enable;       
        decoded_mem_write_enable_2 <= decoded_mem_write_enable; 
        done_2 <=done;

        start <= start_2;
        reset <= reset_2;
        thread_count  <= thread_count_2;
        fetcher_state <= fetcher_state_2;
        instruction <= instruction_2;
        lsu_state <=lsu_state_2;
        lsu_out <= lsu_out_2;
        rs <= rs_2;
        rt <= rt_2;
    end
    else begin
        current_pc_1 <= current_pc;
        core_state_1 <= core_state;
        decoded_mem_read_enable_1 <= decoded_mem_read_enable;       
        decoded_mem_write_enable_1 <= decoded_mem_write_enable; 
        done_1 <=done;

        start <= start_1;
        reset <= reset_1;
        thread_count  <= thread_count_1;
        fetcher_state <= fetcher_state_1;
        instruction <= instruction_1;
        lsu_state <=lsu_state_1;
        lsu_out <= lsu_out_1;
        rs <= rs_1;
        rt <= rt_1;
    end
        
end
endmodule