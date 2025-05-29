`default_nettype none
`timescale 1ns/1ns
`include "utils.svh"

// COMPUTE CORE
// > Handles processing 1 block at a time
// > The core also has it's own scheduler to manage control flow
// > Each core contains 1 fetcher & decoder, and register files, ALUs, LSUs, PC for each thread
module ducttape2cores #(
    parameter DATA_MEM_ADDR_BITS = 8,
    parameter DATA_MEM_DATA_BITS = 8,
    parameter PROGRAM_MEM_ADDR_BITS = 8,
    parameter PROGRAM_MEM_DATA_BITS = 16,
    parameter THREADS_PER_BLOCK = 4
) (
    input logic  clk,

    // Kernel Execution and Block Metadata
    input logic  reset_1,
    input logic  start_1,
    output logic  done_1,
    input logic  [7:0] block_id_1,
    input logic  [$clog2(THREADS_PER_BLOCK):0] thread_count_1,
    // PCACHE and DCACHE access
    `CHANNEL_READ_MODULE(program_mem_1, 1, PROGRAM_MEM_ADDR_BITS, PROGRAM_MEM_DATA_BITS),
    `CHANNEL_READ_MODULE(data_mem_1, THREADS_PER_BLOCK, DATA_MEM_ADDR_BITS, DATA_MEM_DATA_BITS),
    `CHANNEL_WRITE_MODULE(data_mem_1, THREADS_PER_BLOCK, DATA_MEM_ADDR_BITS, DATA_MEM_DATA_BITS),

    // Second logic al core / warp / thread group / set of registers / etc
    input logic  reset_2,
    input logic  start_2,
    output logic  done_2,
    input logic  [7:0] block_id_2,
    input logic  [$clog2(THREADS_PER_BLOCK):0] thread_count_2,
    // unique PCACHE and DCACHE access for cores
    `CHANNEL_READ_MODULE(program_mem_2, 1, PROGRAM_MEM_ADDR_BITS, PROGRAM_MEM_DATA_BITS),
    `CHANNEL_READ_MODULE(data_mem_2, THREADS_PER_BLOCK, DATA_MEM_ADDR_BITS, DATA_MEM_DATA_BITS),
    `CHANNEL_WRITE_MODULE(data_mem_2, THREADS_PER_BLOCK, DATA_MEM_ADDR_BITS, DATA_MEM_DATA_BITS)
);

    logic  reset;
    logic  start;
 
    logic  [$clog2(THREADS_PER_BLOCK):0] thread_count;

    // State
   logic [2:0] core_state;
   logic [2:0] core_state_1;
   logic [2:0] core_state_2;
   logic [2:0] fetcher_state;
   logic [2:0] fetcher_state_1;
   logic [2:0] fetcher_state_2;
   logic [15:0] instruction;
   logic [15:0] instruction_1;
   logic [15:0] instruction_2;


    // Intermediate Signals
   logic [7:0] current_pc;
   logic [7:0] current_pc_1;
   logic [7:0] current_pc_2;
   logic [7:0] next_pc[THREADS_PER_BLOCK-1:0];
   logic [7:0] rs[THREADS_PER_BLOCK-1:0];
   logic [7:0] rt[THREADS_PER_BLOCK-1:0];
   logic [7:0] rs_1[THREADS_PER_BLOCK-1:0];
   logic [7:0] rt_1[THREADS_PER_BLOCK-1:0];
   logic [7:0] rs_2[THREADS_PER_BLOCK-1:0];
   logic [7:0] rt_2[THREADS_PER_BLOCK-1:0];
   logic [1:0] lsu_state_1[THREADS_PER_BLOCK-1:0];
   logic [7:0] lsu_out_1[THREADS_PER_BLOCK-1:0];
   logic [1:0] lsu_state_2[THREADS_PER_BLOCK-1:0];
   logic [7:0] lsu_out_2[THREADS_PER_BLOCK-1:0];
   logic [7:0] alu_out[THREADS_PER_BLOCK-1:0];
    
    // Decoded Instruction Signals
   logic [3:0] decoded_rd_address;
   logic [3:0] decoded_rs_address;
   logic [3:0] decoded_rt_address;
   logic [2:0] decoded_nzp;
   logic [7:0] decoded_immediate;

    // Decoded Control Signals
   logic  decoded_reg_write_enable;           // Enable writing to a register
   logic  decoded_mem_read_enable;            // Enable reading from memory
   logic decoded_mem_write_enable;           // Enable writing to memory
   logic decoded_mem_read_enable_1;            // Enable reading from memory
   logic decoded_mem_write_enable_1;           // Enable writing to memory
   logic decoded_mem_read_enable_2;            // Enable reading from memory
   logic decoded_mem_write_enable_2;           // Enable writing to memory
   logic decoded_nzp_write_enable;           // Enable writing to NZP register
   logic [1:0] decoded_reg_input_mux;        // Select input to register
   logic [1:0] decoded_alu_arithmetic_mux;   // Select arithmetic operation
   logic decoded_alu_output_mux;             // Select operation in ALU
   logic decoded_pc_mux;                     // Select source of next PC
   logic decoded_ret;

    //Warp Controller Signals
   logic warp_select;

    // Warp Controller
    warp_controller #(
        .THREADS_PER_BLOCK(THREADS_PER_BLOCK)
    ) warp_controller_instance (
        .clk(clk),
        .reset({reset_2, reset_1}),

        // inputs from schedulers
        .warp_select(warp_select),
        .core_state(core_state),
        .current_pc(current_pc),

        //inputs from decoder
        .decoded_mem_read_enable(decoded_mem_read_enable),            // Enable reading from memory
        .decoded_mem_write_enable(decoded_mem_write_enable),           // Enable writing to memory

        //Outputs
        .current_pc_out({current_pc_2, current_pc_1}),
        .core_state_out({core_state_2, core_state_1}),
        .decoded_mem_read_enable_out({decoded_mem_read_enable_2, decoded_mem_read_enable_1}),            // Enable reading from memory
        .decoded_mem_write_enable_out({decoded_mem_write_enable_2, decoded_mem_write_enable_1})           // Enable writing to memory

    );

    // Selected warp output signals
    always_comb begin
      reset = warp_select ? reset_2 : reset_1;
      thread_count = warp_select ? thread_count_2 : thread_count_1;
      fetcher_state = warp_select ? fetcher_state_2 : fetcher_state_1;
      instruction = warp_select ? instruction_2 : instruction_1;
  
      // Copy arrays elementwise from selected warp
      for (int tid = 0; tid < THREADS_PER_BLOCK; tid++) begin
        rs[tid] = warp_select ? rs_2[tid] : rs_1[tid];
        rt[tid] = warp_select ? rt_2[tid] : rt_1[tid];
      end
    end

    // Fetcher
    fetcher #(
        .PROGRAM_MEM_ADDR_BITS(PROGRAM_MEM_ADDR_BITS),
        .PROGRAM_MEM_DATA_BITS(PROGRAM_MEM_DATA_BITS)
    ) fetcher_instance_1 (
        .clk(clk),
        .reset(reset_1),
        .core_state(core_state_1),
        .current_pc(current_pc_1),
        .mem_read_valid(program_mem_1_read_valid[0]),  // Use [0] for single address
        .mem_read_ready(program_mem_1_read_ready[0]),  // Use [0] for single address
        .mem_read_address(program_mem_1_read_address[0]),  // Use [0] for single address
        .mem_read_data(program_mem_1_read_data[0]),        // Use [0] for single data

        .fetcher_state(fetcher_state_1),
        .instruction(instruction_1)
    );

    // Fetcher second instance
    fetcher #(
        .PROGRAM_MEM_ADDR_BITS(PROGRAM_MEM_ADDR_BITS),
        .PROGRAM_MEM_DATA_BITS(PROGRAM_MEM_DATA_BITS)
    ) fetcher_instance_2 (
        .clk(clk),
        .reset(reset_2),
        .core_state(core_state_2),
        .current_pc(current_pc_2),
        .mem_read_valid(program_mem_2_read_valid[0]),  // Use [0] for single address
        .mem_read_ready(program_mem_2_read_ready[0]),  // Use [0] for single address
        .mem_read_address(program_mem_2_read_address[0]),  // Use [0] for single address
        .mem_read_data(program_mem_2_read_data[0]),        // Use [0] for single data

        .fetcher_state(fetcher_state_2),
        .instruction(instruction_2)
    );

    // Decoder
    decoder decoder_instance (
        .clk(clk),
        .reset(reset),
        .core_state(core_state),
        .instruction(instruction),
        .decoded_rd_address(decoded_rd_address),
        .decoded_rs_address(decoded_rs_address),
        .decoded_rt_address(decoded_rt_address),
        .decoded_nzp(decoded_nzp),
        .decoded_immediate(decoded_immediate),
        .decoded_reg_write_enable(decoded_reg_write_enable),
        .decoded_mem_read_enable(decoded_mem_read_enable),
        .decoded_mem_write_enable(decoded_mem_write_enable),
        .decoded_nzp_write_enable(decoded_nzp_write_enable),
        .decoded_reg_input_mux(decoded_reg_input_mux),
        .decoded_alu_arithmetic_mux(decoded_alu_arithmetic_mux),
        .decoded_alu_output_mux(decoded_alu_output_mux),
        .decoded_pc_mux(decoded_pc_mux),
        .decoded_ret(decoded_ret)
    );

    // Scheduler
    scheduler #(
        .THREADS_PER_BLOCK(THREADS_PER_BLOCK)
    ) scheduler_instance (
        .clk(clk),
        .reset(reset),
        .start({start_2, start_1}),
        .fetcher_state(fetcher_state),
        .core_state(core_state),
        .decoded_mem_read_enable(decoded_mem_read_enable),
        .decoded_mem_write_enable(decoded_mem_write_enable),
        .decoded_ret(decoded_ret),
        .lsu_state_1(lsu_state_1),
        .lsu_state_2(lsu_state_2),
        .current_pc(current_pc),
        .next_pc(next_pc),
        .core_state_1(core_state_1),
        .core_state_2(core_state_2),
        .warp_select(warp_select),
        .done({done_2, done_1}),
        .current_pc_1(current_pc_1),
        .current_pc_2(current_pc_2)
    );

    // Dedicated ALU, LSU, registers, & PC unit for each thread this core has capacity for
    genvar tid;
    generate
        for (tid = 0; tid < THREADS_PER_BLOCK; tid = tid + 1) begin : threads
            // ALU
            alu alu_instance (
                .clk(clk),
                .reset(reset),
                .enable(tid< thread_count),
                .core_state(core_state),
                .decoded_alu_arithmetic_mux(decoded_alu_arithmetic_mux),
                .decoded_alu_output_mux(decoded_alu_output_mux),
                .rs(rs[tid]),
                .rt(rt[tid]),
                .alu_out(alu_out[tid])
            );

            // WARN:
            // Program Counter:
            // Handles Jump/Branch requests
            // Assumed that all synched threads remain executing the same instruction!
            pc #(
                .DATA_MEM_DATA_BITS(DATA_MEM_DATA_BITS),
                .PROGRAM_MEM_ADDR_BITS(PROGRAM_MEM_ADDR_BITS)
            ) pc_instance (
                .clk(clk),
                .reset(reset),
                .enable(tid < thread_count),
                .core_state(core_state),
                .decoded_nzp(decoded_nzp),
                .decoded_immediate(decoded_immediate),
                .decoded_nzp_write_enable(decoded_nzp_write_enable),
                .decoded_pc_mux(decoded_pc_mux),
                .alu_out(alu_out[tid]),
                .current_pc(current_pc),
                .next_pc(next_pc[tid])
            );

            // LSU
            lsu lsu_instance_1 (
                .clk(clk),
                .reset(reset_1),
                .enable(tid < thread_count_1),
                .core_state(core_state_1),
                .decoded_mem_read_enable(decoded_mem_read_enable && ~warp_select),
                .decoded_mem_write_enable(decoded_mem_write_enable && ~warp_select),
                .mem_read_valid(data_mem_1_read_valid[tid]),
                .mem_read_address(data_mem_1_read_address[tid]),
                .mem_read_ready(data_mem_1_read_ready[tid]),
                .mem_read_data(data_mem_1_read_data[tid]),
                .mem_write_valid(data_mem_1_write_valid[tid]),
                .mem_write_address(data_mem_1_write_address[tid]),
                .mem_write_data(data_mem_1_write_data[tid]),
                .mem_write_ready(data_mem_1_write_ready[tid]),
                .rs(rs_1[tid]),
                .rt(rt_1[tid]),
                .lsu_state(lsu_state_1[tid]),
                .lsu_out(lsu_out_1[tid])
            );

            lsu lsu_instance_2 (
                .clk(clk), 
                .reset(reset_2),
                .enable(tid < thread_count_2), // constant
                .core_state(core_state_2),
                .decoded_mem_read_enable(decoded_mem_read_enable && warp_select),
                .decoded_mem_write_enable(decoded_mem_write_enable && warp_select),
                .mem_read_valid(data_mem_2_read_valid[tid]),
                .mem_read_address(data_mem_2_read_address[tid]),
                .mem_read_ready(data_mem_2_read_ready[tid]),
                .mem_read_data(data_mem_2_read_data[tid]),
                .mem_write_valid(data_mem_2_write_valid[tid]),
                .mem_write_address(data_mem_2_write_address[tid]),
                .mem_write_data(data_mem_2_write_data[tid]),
                .mem_write_ready(data_mem_2_write_ready[tid]),
                .rs(rs_2[tid]),
                .rt(rt_2[tid]),
                .lsu_state(lsu_state_2[tid]),
                .lsu_out(lsu_out_2[tid])
            );

            // Register File 1
            registers #(
                .THREADS_PER_BLOCK(THREADS_PER_BLOCK),
                .THREAD_ID(tid),
                .DATA_BITS(DATA_MEM_DATA_BITS)
            ) register_instance_1 (
                .clk(clk),
                .reset(reset_1),
                .enable((tid < thread_count_1) && ~warp_select && (core_state == CORE_UPDATE || core_state == CORE_IDLE || core_state == CORE_REQUEST)),
                .block_id(block_id_1),
                .core_state(core_state),
                .decoded_reg_write_enable(decoded_reg_write_enable),
                .decoded_reg_input_mux(decoded_reg_input_mux),
                .decoded_rd_address(decoded_rd_address),
                .decoded_rs_address(decoded_rs_address),
                .decoded_rt_address(decoded_rt_address),
                .decoded_immediate(decoded_immediate),
                .alu_out(alu_out[tid]),
                .lsu_out(lsu_out_1[tid]),
                .rs(rs_1[tid]),
                .rt(rt_1[tid])
            );

            // Register File 2
            registers #(
                .THREADS_PER_BLOCK(THREADS_PER_BLOCK),
                .THREAD_ID(tid),
                .DATA_BITS(DATA_MEM_DATA_BITS)
            ) register_instance_2 (
                .clk(clk),
                .reset(reset_2),
                .enable((tid < thread_count_1) && warp_select && (core_state == CORE_UPDATE || core_state == CORE_IDLE || core_state == CORE_REQUEST)),
                .block_id(block_id_2),
                .core_state(core_state),
                .decoded_reg_write_enable(decoded_reg_write_enable),
                .decoded_reg_input_mux(decoded_reg_input_mux),
                .decoded_rd_address(decoded_rd_address),
                .decoded_rs_address(decoded_rs_address),
                .decoded_rt_address(decoded_rt_address),
                .decoded_immediate(decoded_immediate),
                .alu_out(alu_out[tid]),
                .lsu_out(lsu_out_2[tid]),
                .rs(rs_2[tid]),
                .rt(rt_2[tid])
            );

        end
    endgenerate
endmodule
