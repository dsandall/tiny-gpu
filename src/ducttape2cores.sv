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
    input wire clk,
    input wire reset,

    // Kernel Execution and Block Metadata
    input wire start,
    output wire done,
    input wire [7:0] block_id,
    input wire [$clog2(THREADS_PER_BLOCK):0] thread_count,
    // PCACHE and DCACHE access
    `CHANNEL_READ_MODULE(program_mem, 1, PROGRAM_MEM_ADDR_BITS, PROGRAM_MEM_DATA_BITS),
    `CHANNEL_READ_MODULE(data_mem, THREADS_PER_BLOCK, DATA_MEM_ADDR_BITS, DATA_MEM_DATA_BITS),
    `CHANNEL_WRITE_MODULE(data_mem, THREADS_PER_BLOCK, DATA_MEM_ADDR_BITS, DATA_MEM_DATA_BITS),

    // Second logical core / warp / thread group / set of registers / etc
    input wire start_2,
    output wire done_2,
    input wire [7:0] block_id_2,
    input wire [$clog2(THREADS_PER_BLOCK):0] thread_count_2,
    `CHANNEL_READ_MODULE(program_mem_2, 1, PROGRAM_MEM_ADDR_BITS, PROGRAM_MEM_DATA_BITS),
    `CHANNEL_READ_MODULE(data_mem_2, THREADS_PER_BLOCK, DATA_MEM_ADDR_BITS, DATA_MEM_DATA_BITS),
    `CHANNEL_WRITE_MODULE(data_mem_2, THREADS_PER_BLOCK, DATA_MEM_ADDR_BITS, DATA_MEM_DATA_BITS)
);

  // Compute Core
  core #(
      .DATA_MEM_ADDR_BITS(DATA_MEM_ADDR_BITS),
      .DATA_MEM_DATA_BITS(DATA_MEM_DATA_BITS),
      .PROGRAM_MEM_ADDR_BITS(PROGRAM_MEM_ADDR_BITS),
      .PROGRAM_MEM_DATA_BITS(PROGRAM_MEM_DATA_BITS),
      .THREADS_PER_BLOCK(THREADS_PER_BLOCK)
  ) core_instance_1 (
      .clk(clk),
      .reset(reset),
      .start(start),
      .done(done),
      .block_id(block_id),
      .thread_count(thread_count),
      
      .program_mem_read_valid(program_mem_read_valid),
      .program_mem_read_address(program_mem_read_address),
      .program_mem_read_ready(program_mem_read_ready),
      .program_mem_read_data(program_mem_read_data),
      `MEM_BUS_READ(data_mem,data_mem),
      `MEM_BUS_WRITE(data_mem,data_mem)
  );

  // Compute Core (but #2)
  core #(
      .DATA_MEM_ADDR_BITS(DATA_MEM_ADDR_BITS),
      .DATA_MEM_DATA_BITS(DATA_MEM_DATA_BITS),
      .PROGRAM_MEM_ADDR_BITS(PROGRAM_MEM_ADDR_BITS),
      .PROGRAM_MEM_DATA_BITS(PROGRAM_MEM_DATA_BITS),
      .THREADS_PER_BLOCK(THREADS_PER_BLOCK)
  ) core_instance_1 (
      .clk(clk),
      .reset(reset),
      .start(start_2),
      .done(done_2),
      .block_id(block_id_2),
      .thread_count(thread_count_2),
      
      .program_mem_read_valid(program_mem_2_read_valid),
      .program_mem_read_address(program_mem_2_read_address),
      .program_mem_read_ready(program_mem_2_read_ready),
      .program_mem_read_data(program_mem_2_read_data),
      `MEM_BUS_READ(data_mem,data_mem_2),
      `MEM_BUS_WRITE(data_mem,data_mem_2)
  );
endmodule;

