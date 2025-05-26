`default_nettype none `timescale 1ns / 1ns
`include "enums.svh"


// warp_controller UNIT
// > stores the warps at there current state
// > In this minimal implementation, the ALU supports the 4 basic arithmetic operations
// > Each thread in each core has it's own ALU
// > ADD, SUB, MUL, DIV instructions are all executed here
module warp_controller #(
    parameter THREADS_PER_BLOCK = 4
) (
    input  logic clk,

    input  logic start     [1:0],
    input  logic reset     [1:0],
    input  logic done,

    input  logic [$clog2(THREADS_PER_BLOCK):0] thread_count [1:0],

    // inputs from schedulers
    input  logic warp_select,
    input  corestate_t core_state,
    input  logic [7:0] current_pc,

    // inputs from fetchers
    input  logic [2:0]  fetcher_state  [1:0],
    input  logic [15:0] instruction    [1:0],

    // inputs from lsu
    input  logic [1:0]  lsu_state      [1:0][THREADS_PER_BLOCK-1:0],
    input  logic [7:0]  lsu_out        [1:0][THREADS_PER_BLOCK-1:0],

    // inputs from logic
    input  logic [7:0]  rs             [1:0][THREADS_PER_BLOCK-1:0],
    input  logic [7:0]  rt             [1:0][THREADS_PER_BLOCK-1:0],

    // inputs from decoder
    input  logic decoded_mem_read_enable,
    input  logic decoded_mem_write_enable,

    // Outputs per warp
    output logic [7:0]  current_pc_out  [1:0],
    output logic [2:0]  core_state_out  [1:0],
    output logic        decoded_mem_read_enable_out  [1:0],
    output logic        decoded_mem_write_enable_out [1:0],
    output logic        done_out        [1:0],

    // Selected warp outputs
    output logic        start_out,
    output logic        reset_out,
    output logic [$clog2(THREADS_PER_BLOCK):0] thread_count_out,
    output fetcher_state_t fetcher_state_out,
    output logic [15:0] instruction_out,
    output logic [1:0]  lsu_state_out    [THREADS_PER_BLOCK-1:0],
    output logic [7:0]  lsu_out_out      [THREADS_PER_BLOCK-1:0],
    output logic [7:0]  rs_out           [THREADS_PER_BLOCK-1:0],
    output logic [7:0]  rt_out           [THREADS_PER_BLOCK-1:0]
);

  // Internal registers for outputs
  logic [7:0] current_pc_reg  [1:0];
  logic [2:0] core_state_reg  [1:0];
  logic       decoded_mem_read_enable_reg  [1:0];
  logic       decoded_mem_write_enable_reg [1:0];
  logic       done_reg        [1:0];

  always @(negedge clk) begin
    // Handle resets per warp
    for (int i = 0; i < 2; i++) begin
      if (reset[i]) begin
        done_reg[i] <= 0;
        current_pc_reg[i] <= 0;
        core_state_reg[i] <= CORE_IDLE;
        decoded_mem_read_enable_reg[i] <= 0;
        decoded_mem_write_enable_reg[i] <= 0;
      end
    end


    // Update logic for warp_select index, if not reset
    if (!reset[warp_select]) begin
      current_pc_reg[warp_select] <= current_pc;
      core_state_reg[warp_select] <= core_state;

      if (core_state == CORE_DECODE) begin
        decoded_mem_read_enable_reg[warp_select]  <= decoded_mem_read_enable;
        decoded_mem_write_enable_reg[warp_select] <= decoded_mem_write_enable;
      end

      done_reg[warp_select] <= done;
    end
  end

  // Assign outputs from registers
  assign current_pc_out = current_pc_reg;
  assign core_state_out = core_state_reg;
  assign decoded_mem_read_enable_out = decoded_mem_read_enable_reg;
  assign decoded_mem_write_enable_out = decoded_mem_write_enable_reg;
  assign done_out = done_reg;

  // Selected warp output signals
  always_comb begin
    start_out = start[warp_select];
    reset_out = reset[warp_select];
    thread_count_out = thread_count[warp_select];
    fetcher_state_out = fetcher_state_t'(fetcher_state[warp_select]);
    instruction_out = instruction[warp_select];

    // Copy arrays elementwise from selected warp
    for (int i = 0; i < THREADS_PER_BLOCK; i++) begin
      lsu_state_out[i] = lsu_state[warp_select][i];
      lsu_out_out[i]   = lsu_out[warp_select][i];
      rs_out[i]        = rs[warp_select][i];
      rt_out[i]        = rt[warp_select][i];
    end
  end

endmodule
