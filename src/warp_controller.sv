`default_nettype none `timescale 1ns / 1ns
`include "enums.svh"


// warp_controller UNIT
// > stores the warps at there current state
// > In this minimal implementation, the ALU supports the 4 basic arithmetic operations
// > Each thread in each core has it's own ALU
// > ADD, SUB, MUL, DIV instructions are all executed here
module warp_controller #(
    parameter THREADS_PER_BLOCK = 4,
    parameter NUM_WARPS_PER_CORE = 2 // dont change this, not parameterized
) (
    input  logic clk,
    input  logic reset     [NUM_WARPS_PER_CORE-1:0],

    // inputs from schedulers
    input  logic warp_select,
    input  corestate_t core_state,
    input  logic [7:0] current_pc,

    // inputs from decoder
    input  logic decoded_mem_read_enable,
    input  logic decoded_mem_write_enable,

    // Outputs per warp
    output logic [7:0]  current_pc_out  [NUM_WARPS_PER_CORE-1:0],
    output logic [2:0]  core_state_out  [NUM_WARPS_PER_CORE-1:0],
    output logic        decoded_mem_read_enable_out  [NUM_WARPS_PER_CORE-1:0],
    output logic        decoded_mem_write_enable_out [NUM_WARPS_PER_CORE-1:0]

);

  always @(negedge clk) begin
    // Handle resets per warp
    for (int i = 0; i < NUM_WARPS_PER_CORE; i++) begin
      if (reset[i]) begin
        current_pc_out[i] <= 0;
        core_state_out[i] <= CORE_IDLE;
        decoded_mem_read_enable_out[i] <= 0;
        decoded_mem_write_enable_out[i] <= 0;
      end
    end

    // Update logic for warp_select index, if not reset
    if (!reset[warp_select]) begin
      current_pc_out[warp_select] <= current_pc;
      core_state_out[warp_select] <= core_state;

      if (core_state == CORE_DECODE) begin
        decoded_mem_read_enable_out[warp_select]  <= decoded_mem_read_enable;
        decoded_mem_write_enable_out[warp_select] <= decoded_mem_write_enable;
      end

    end
  end
endmodule
