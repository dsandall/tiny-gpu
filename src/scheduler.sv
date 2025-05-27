`default_nettype none `timescale 1ns / 1ns
`include "enums.svh"


// SCHEDULER
// > Manages the entire control flow of a single compute core processing 1 block
// 1. FETCH - Retrieve instruction at current program counter (PC) from program memory
// 2. DECODE - Decode the instruction into the relevant control signals
// 3. REQUEST - If we have an instruction that accesses memory, trigger the async memory requests from LSUs
// 4. WAIT - Wait for all async memory requests to resolve (if applicable)
// 5. EXECUTE - Execute computations on retrieved data from registers / memory
// 6. UPDATE - Update register values (including NZP register) and program counter
// > Each core has it's own scheduler where multiple threads can be processed with
//   the same control flow at once.
// > Technically, different instructions can branch to different PCs, requiring "branch divergence." In
//   this minimal implementation, we assume no branch divergence (naive approach for simplicity)
module scheduler #(
    parameter THREADS_PER_BLOCK = 4
) (
    input wire clk,
    input wire reset,
    input wire start,

    // Control Signals
    input reg decoded_mem_read_enable,
    input reg decoded_mem_write_enable,
    input reg decoded_ret,

    // Memory Access State
    input reg [2:0] fetcher_state,
    input reg [1:0] lsu_state_1[THREADS_PER_BLOCK-1:0],
    input reg [1:0] lsu_state_2[THREADS_PER_BLOCK-1:0],

    // Current & Next PC
    output reg [7:0] current_pc,
    input reg [7:0] next_pc[THREADS_PER_BLOCK-1:0],

    // Execution State
    output corestate_t core_state,
    output reg done_1,
    output reg done_2,

    // Warp core select
    input corestate_t core_state_1,
    input corestate_t core_state_2,
    output reg warp_select,
    input [7:0] current_pc_2,
    input [7:0] current_pc_1
);

  task automatic switch_warp();
    // WARN: disabled
    //
    //warp_select <= ~warp_select;
    //if (warp_select) begin
    //  core_state <= core_state_1;
    //  current_pc <= current_pc_1;
    //end else begin
    //  core_state <= core_state_2;
    //  current_pc <= current_pc_2;
    //end
  endtask

  always @(posedge clk) begin
    if (reset) begin
      current_pc <= 0;
      core_state <= CORE_IDLE;
      done_1 <= 0;
      done_2 <= 0;
      warp_select <= 0;
    end else begin
      case (core_state)
        CORE_IDLE: begin
          // Here after reset (before kernel is launched, or after previous block has been processed)
          if (start) begin
            // Start by fetching the next instruction for this block based on PC
            core_state <= CORE_FETCH;
          end else begin
            switch_warp();
          end
        end
        CORE_FETCH: begin  //TODO:chage this so on stall switch to other warp
          // Move on once fetcher_state = FETCHED

          if (fetcher_state == 3'b010) begin
            core_state <= CORE_DECODE;
          end else begin

            switch_warp();

          end
        end
        CORE_DECODE: begin
          // Decode is synchronous so we move on after one cycle
          core_state <= CORE_REQUEST;

        end
        CORE_REQUEST: begin
          // Request is synchronous so we move on after one cycle
          if (decoded_ret) begin
            // If we reach a RET instruction, this block is done executing
            core_state <= CORE_DONE;
            if (warp_select) begin
              done_2 <= 1;
            end else begin
              done_1 <= 1;
            end
          end else begin
            // otherwise proceed
            core_state <= CORE_WAIT;
          end
        end
        CORE_WAIT: begin  //TODO:chage this so on stall switch to other warp
          // Wait for all LSUs to finish their request before continuing
          reg any_lsu_waiting = 1'b0;
          for (int i = 0; i < THREADS_PER_BLOCK; i++) begin
            // Make sure no lsu_state = REQUESTING or WAITING
            if (lsu_state_1[i] == LSU_REQUESTING || lsu_state_1[i] == LSU_WAITING) begin
              // WARN: only checking warp 0 lsus for testing
              any_lsu_waiting = 1'b1;
              break;  //i'm commenting this out and expect this to cause errors in future 
            end
          end

          // If no LSU is waiting for a response, move onto the next stage
          if (!any_lsu_waiting) begin
            core_state <= CORE_EXECUTE;
          end else begin
            switch_warp();
          end
        end
        CORE_EXECUTE: begin
          // Execute is synchronous so we move on after one cycle
          core_state <= CORE_UPDATE;
        end
        CORE_UPDATE: begin
          // Update is synchronous so we move on after one cycle
          core_state <= CORE_FETCH;

          // TODO: Branch divergence. For now assume all next_pc converge
          current_pc <= next_pc[THREADS_PER_BLOCK-1];
        end
        CORE_DONE: begin
          if (!start) begin
            // return to idle when the dispatcher recognizes DONE
            core_state <= CORE_IDLE;
            if (warp_select) begin
              done_2 <= 0;
            end else begin
              done_1 <= 0;
            end
          end
          // switch regardless
          switch_warp();
        end
      endcase
    end
  end
endmodule
