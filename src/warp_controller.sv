`default_nettype none `timescale 1ns / 1ns

// warp_controller UNIT
// > stores the warps at there current state
// > In this minimal implementation, the ALU supports the 4 basic arithmetic operations
// > Each thread in each core has it's own ALU
// > ADD, SUB, MUL, DIV instructions are all executed here
module warp_controller #(
    parameter THREADS_PER_BLOCK = 4
) (
    input logic clk,

    input logic start_1,
    input logic start_2,
    input logic reset_1,
    input logic reset_2,
    input logic done,

    input logic [$clog2(THREADS_PER_BLOCK):0] thread_count_1,
    input logic [$clog2(THREADS_PER_BLOCK):0] thread_count_2,

    // inputs from schedulers
    input logic warp_select,
    input logic [2:0] core_state,
    input logic [7:0] current_pc,


    //inputs from fetcher 1
    input logic [ 2:0] fetcher_state_1,
    input logic [15:0] instruction_1,

    //inputs from fetcher 2
    input logic [ 2:0] fetcher_state_2,
    input logic [15:0] instruction_2,

    //inputs from lsu 1
    input logic [1:0] lsu_state_1[THREADS_PER_BLOCK-1:0],
    input logic [7:0] lsu_out_1  [THREADS_PER_BLOCK-1:0],


    //inputs from lsu 2
    input logic [1:0] lsu_state_2[THREADS_PER_BLOCK-1:0],
    input logic [7:0] lsu_out_2  [THREADS_PER_BLOCK-1:0],

    //inputs from logic 1
    input logic [7:0] rs_1[THREADS_PER_BLOCK-1:0],
    input logic [7:0] rt_1[THREADS_PER_BLOCK-1:0],

    //inputs from logic 2
    input logic [7:0] rs_2[THREADS_PER_BLOCK-1:0],
    input logic [7:0] rt_2[THREADS_PER_BLOCK-1:0],

    //inputs from decoder
    input logic decoded_mem_read_enable,  // Enable reading from memory
    input logic decoded_mem_write_enable, // Enable writing to memory

    //Outputs
    output logic [7:0] current_pc_1,
    output logic [7:0] current_pc_2,
    output logic [2:0] core_state_1,
    output logic [2:0] core_state_2,
    output logic       decoded_mem_read_enable_1,   // Enable reading from memory
    output logic       decoded_mem_write_enable_1,  // Enable writing to memory
    output logic       decoded_mem_read_enable_2,   // Enable reading from memory
    output logic       decoded_mem_write_enable_2,  // Enable writing to memory
    output logic       done_1,
    output logic       done_2,

    output logic start,
    output logic reset,
    output logic [$clog2(THREADS_PER_BLOCK):0] thread_count,
    output logic [2:0] fetcher_state,
    output logic [15:0] instruction,
    output logic [1:0] lsu_state[THREADS_PER_BLOCK-1:0],
    output logic [7:0] lsu_out[THREADS_PER_BLOCK-1:0],
    output logic [7:0] rs[THREADS_PER_BLOCK-1:0],
    output logic [7:0] rt[THREADS_PER_BLOCK-1:0]



);

  // look at the current state of warp controller_select and output the neceisarry data
  always @(negedge clk) begin
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
      done_2 <= done;

      start <= start_2;
      reset <= reset_2;
      thread_count <= thread_count_2;
      fetcher_state <= fetcher_state_2;
      instruction <= instruction_2;
      lsu_state <= lsu_state_2;
      lsu_out <= lsu_out_2;
      rs <= rs_2;
      rt <= rt_2;
    end else begin
      current_pc_1 <= current_pc;
      core_state_1 <= core_state;
      decoded_mem_read_enable_1 <= decoded_mem_read_enable;
      decoded_mem_write_enable_1 <= decoded_mem_write_enable;
      done_1 <= done;

      start <= start_1;
      reset <= reset_1;
      thread_count <= thread_count_1;
      fetcher_state <= fetcher_state_1;
      instruction <= instruction_1;
      lsu_state <= lsu_state_1;
      lsu_out <= lsu_out_1;
      rs <= rs_1;
      rt <= rt_1;
    end

  end
endmodule
