`default_nettype none
`timescale 1ns/1ns
`include "utils.svh"

// COMPUTE CORE
// > Handles processing 1 block at a time
// > The core also has it's own scheduler to manage control flow
// > Each core contains 1 fetcher & decoder, and register files, ALUs, LSUs, PC for each thread
module core #(
    parameter DATA_MEM_ADDR_BITS = 8,
    parameter DATA_MEM_DATA_BITS = 8,
    parameter PROGRAM_MEM_ADDR_BITS = 8,
    parameter PROGRAM_MEM_DATA_BITS = 16,
    parameter THREADS_PER_BLOCK = 4
) (
    input wire clk,
    input wire reset,

    // Kernel Execution
    input wire start,
    output wire done,

    // Block Metadata
    input wire [7:0] block_id,
    input wire [$clog2(THREADS_PER_BLOCK):0] thread_count,

    // Program Memory
    `CHANNEL_READ_MODULE(program_mem, 1, PROGRAM_MEM_ADDR_BITS, PROGRAM_MEM_DATA_BITS),

    // Data Memory
    `CHANNEL_READ_MODULE(data_mem, THREADS_PER_BLOCK, DATA_MEM_ADDR_BITS, DATA_MEM_DATA_BITS),
    `CHANNEL_WRITE_MODULE(data_mem, THREADS_PER_BLOCK, DATA_MEM_ADDR_BITS, DATA_MEM_DATA_BITS)
);

    wire start;
    wire [$clog2(THREADS_PER_BLOCK):0] thread_count;

    // State
    reg [2:0] core_state;
    reg [2:0] core_state_1;
    reg [2:0] core_state_2;
    reg [2:0] fetcher_state;
    reg [2:0] fetcher_state_1;
    reg [2:0] fetcher_state_2;
    reg [15:0] instruction;
    reg [15:0] instruction_1;
    reg [15:0] instruction_2;


    // Intermediate Signals
    reg [7:0] current_pc;
    reg [7:0] current_pc_1;
    reg [7:0] current_pc_2;
    wire [7:0] next_pc[THREADS_PER_BLOCK-1:0];
    reg [7:0] rs[THREADS_PER_BLOCK-1:0];
    reg [7:0] rt[THREADS_PER_BLOCK-1:0];
    reg [7:0] rs_1[THREADS_PER_BLOCK-1:0];
    reg [7:0] rt_1[THREADS_PER_BLOCK-1:0];
    reg [7:0] rs_2[THREADS_PER_BLOCK-1:0];
    reg [7:0] rt_2[THREADS_PER_BLOCK-1:0];
    reg [1:0] lsu_state[THREADS_PER_BLOCK-1:0];
    reg [7:0] lsu_out[THREADS_PER_BLOCK-1:0];
    reg [1:0] lsu_state_1[THREADS_PER_BLOCK-1:0];
    reg [7:0] lsu_out_1[THREADS_PER_BLOCK-1:0];
    reg [1:0] lsu_state_2[THREADS_PER_BLOCK-1:0];
    reg [7:0] lsu_out_2[THREADS_PER_BLOCK-1:0];
    wire [7:0] alu_out[THREADS_PER_BLOCK-1:0];
    
    // Decoded Instruction Signals
    reg [3:0] decoded_rd_address;
    reg [3:0] decoded_rs_address;
    reg [3:0] decoded_rt_address;
    reg [2:0] decoded_nzp;
    reg [7:0] decoded_immediate;

    // Decoded Control Signals
    reg decoded_reg_write_enable;           // Enable writing to a register
    reg decoded_mem_read_enable;            // Enable reading from memory
    reg decoded_mem_write_enable;           // Enable writing to memory
    reg decoded_mem_read_enable_1;            // Enable reading from memory
    reg decoded_mem_write_enable_1;           // Enable writing to memory
    reg decoded_mem_read_enable_2;            // Enable reading from memory
    reg decoded_mem_write_enable_2;           // Enable writing to memory
    reg decoded_nzp_write_enable;           // Enable writing to NZP register
    reg [1:0] decoded_reg_input_mux;        // Select input to register
    reg [1:0] decoded_alu_arithmetic_mux;   // Select arithmetic operation
    reg decoded_alu_output_mux;             // Select operation in ALU
    reg decoded_pc_mux;                     // Select source of next PC
    reg decoded_ret;

    //Warp Controller Signals
    reg warp_select;

    // Warp Controller
    warp_controller #(
        .THREADS_PER_BLOCK(THREADS_PER_BLOCK)
    ) warp_controller_instance(
        .clk(clk),
        .start_1(start_1),
        .start_2(start_2),
        .thread_count_1(thread_count_1),
        .thread_count_2(thread_count_2),

        // inputs from schedulers
        .warp_select(warp_select),
        .core_state(core_state),
        .current_pc(current_pc),


        //inputs from fetcher 1
        .fetcher_state_1(fetcher_state_1),
        .instruction_1(instruction_1),

        //inputs from fetcher 2
        .fetcher_state_2(fetcher_state_2),
        .instruction_2(instruction_2),

        //inputs from lsu 1
        .lsu_state_1(lsu_state_1),
        .lsu_out_1(lsu_out_1),


        //inputs from lsu 2
        .lsu_state_2(lsu_state_2),
        .lsu_out_2(lsu_out_2),

        //inputs from reg 1
        .rs_1(rs_1),
        .rt_1(rt_1),

        //inputs from reg 2
        .rs_2(rs_2),
        .rt_2(rt_2),

        //inputs from decoder
        .decoded_mem_read_enable(decoded_mem_read_enable),            // Enable reading from memory
        .decoded_mem_write_enable(decoded_mem_write_enable),           // Enable writing to memory

        //Outputs
        .current_pc_1(current_pc_1),
        .current_pc_2(current_pc_2),
        .core_state_1(core_state_1),
        .core_state_2(core_state_2),
        .decoded_mem_read_enable_1(decoded_mem_read_enable_1),            // Enable reading from memory
        .decoded_mem_write_enable_1(decoded_mem_write_enable_1),           // Enable writing to memory
        .decoded_mem_read_enable_2(decoded_mem_read_enable_2),            // Enable reading from memory
        .decoded_mem_write_enable_2(decoded_mem_write_enable_2),           // Enable writing to memory

        .start(start),
        .thread_count(thread_count),
        .fetcher_state(fetcher_state),
        .instruction(instruction),
        .lsu_state(lsu_state),
        .lsu_out(lsu_out),
        .rs(rs),
        .rt(rt)
    )

    // Fetcher
    fetcher #(
        .PROGRAM_MEM_ADDR_BITS(PROGRAM_MEM_ADDR_BITS),
        .PROGRAM_MEM_DATA_BITS(PROGRAM_MEM_DATA_BITS)
    ) fetcher_instance_1 (
        .clk(clk),
        .reset(reset_1),
        .core_state(core_state_1),
        .current_pc(current_pc_1),
        `MEM_BUS_READ(mem, program_mem_1),

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
        `MEM_BUS_READ(mem, program_mem_2),

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
        .start(start),
        .fetcher_state(fetcher_state),
        .core_state(core_state),
        .decoded_mem_read_enable(decoded_mem_read_enable),
        .decoded_mem_write_enable(decoded_mem_write_enable),
        .decoded_ret(decoded_ret),
        .lsu_state(lsu_state),
        .current_pc(current_pc),
        .next_pc(next_pc),
        .warp_select(warp_select),
        .done(done)
    );

    // Dedicated ALU, LSU, registers, & PC unit for each thread this core has capacity for
    genvar i;
    generate
        for (i = 0; i < THREADS_PER_BLOCK; i = i + 1) begin : threads
            // ALU
            alu alu_instance (
                .clk(clk),
                .reset(reset),
                .enable(i < thread_count),
                .core_state(core_state),
                .decoded_alu_arithmetic_mux(decoded_alu_arithmetic_mux),
                .decoded_alu_output_mux(decoded_alu_output_mux),
                .rs(rs[i]),
                .rt(rt[i]),
                .alu_out(alu_out[i])
            );

            // LSU
            lsu lsu_instance_1 (
                .clk(clk),
                .reset(reset_1),
                .enable(i < thread_count_1),
                .core_state(core_state_1),
                .decoded_mem_read_enable(decoded_mem_read_enable_1),
                .decoded_mem_write_enable(decoded_mem_write_enable_1),
                .mem_read_valid(data_mem_1_read_valid[i]),
                .mem_read_address(data_mem_1_read_address[i]),
                .mem_read_ready(data_mem_1_read_ready[i]),
                .mem_read_data(data_mem_1_read_data[i]),
                .mem_write_valid(data_mem_1_write_valid[i]),
                .mem_write_address(data_mem_1_write_address[i]),
                .mem_write_data(data_mem_1_write_data[i]),
                .mem_write_ready(data_mem_1_write_ready[i]),
                .rs(rs_1[i]),
                .rt(rt_1[i]),
                .lsu_state(lsu_state_1[i]),
                .lsu_out(lsu_out_1[i])
            );

            lsu lsu_instance_2 (
                .clk(clk),
                .reset(reset_2),
                .enable(i < thread_count_2),
                .core_state(core_state_2),
                .decoded_mem_read_enable(decoded_mem_read_enable_2),
                .decoded_mem_write_enable(decoded_mem_write_enable_2),
                .mem_read_valid(data_mem_2_read_valid[i]),
                .mem_read_address(data_mem_2_read_address[i]),
                .mem_read_ready(data_mem_2_read_ready[i]),
                .mem_read_data(data_mem_2_read_data[i]),
                .mem_write_valid(data_mem_2_write_valid[i]),
                .mem_write_address(data_mem_2_write_address[i]),
                .mem_write_data(data_mem_2_write_data[i]),
                .mem_write_ready(data_mem_2_write_ready[i]),
                .rs(rs_2[i]),
                .rt(rt_2[i]),
                .lsu_state(lsu_state_2[i]),
                .lsu_out(lsu_out_2[i])
            );

            // Register File 1
            registers #(
                .THREADS_PER_BLOCK(THREADS_PER_BLOCK),
                .THREAD_ID(i),
                .DATA_BITS(DATA_MEM_DATA_BITS)
            ) register_instance_1 (
                .clk(clk),
                .reset(reset_1),
                .enable((i < thread_count_1) && ~warp_select),
                .block_id(block_id_1),
                .core_state(core_state_1),
                .decoded_reg_write_enable(decoded_reg_write_enable),
                .decoded_reg_input_mux(decoded_reg_input_mux),
                .decoded_rd_address(decoded_rd_address),
                .decoded_rs_address(decoded_rs_address),
                .decoded_rt_address(decoded_rt_address),
                .decoded_immediate(decoded_immediate),
                .alu_out(alu_out[i]),
                .lsu_out(lsu_out_1[i]),
                .rs(rs_1[i]),
                .rt(rt_1[i])
            );

            // Register File 1
            registers #(
                .THREADS_PER_BLOCK(THREADS_PER_BLOCK),
                .THREAD_ID(i),
                .DATA_BITS(DATA_MEM_DATA_BITS)
            ) register_instance_2 (
                .clk(clk),
                .reset(reset_2),
                .enable((i < thread_count_1) && warp_select),
                .block_id(block_id_2),
                .core_state(core_state_2),
                .decoded_reg_write_enable(decoded_reg_write_enable),
                .decoded_reg_input_mux(decoded_reg_input_mux),
                .decoded_rd_address(decoded_rd_address),
                .decoded_rs_address(decoded_rs_address),
                .decoded_rt_address(decoded_rt_address),
                .decoded_immediate(decoded_immediate),
                .alu_out(alu_out[i]),
                .lsu_out(lsu_out_2[i]),
                .rs(rs_2[i]),
                .rt(rt_2[i])
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
                .enable(i < thread_count),
                .core_state(core_state),
                .decoded_nzp(decoded_nzp),
                .decoded_immediate(decoded_immediate),
                .decoded_nzp_write_enable(decoded_nzp_write_enable),
                .decoded_pc_mux(decoded_pc_mux),
                .alu_out(alu_out[i]),
                .current_pc(current_pc),
                .next_pc(next_pc[i])
            );
        end
    endgenerate
endmodule
