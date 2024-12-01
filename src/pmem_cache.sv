// // Program Memory Controller
// pmem_controller #(
//     .ADDR_BITS(PROGRAM_MEM_ADDR_BITS),
//     .DATA_BITS(PROGRAM_MEM_DATA_BITS),
//     .NUM_CONSUMERS(NUM_FETCHERS),
//     .NUM_CHANNELS(PROGRAM_MEM_NUM_CHANNELS),
//     // .WRITE_ENABLE(0)
// ) program_memory_controller (
//     .clk(clk),
//     .reset(reset),

//     .consumer_read_valid(fetcher_read_valid),
//     .consumer_read_address(fetcher_read_address),
//     .consumer_read_ready(fetcher_read_ready),
//     .consumer_read_data(fetcher_read_data),

//     .mem_read_valid(program_mem_read_valid),
//     .mem_read_address(program_mem_read_address),
//     .mem_read_ready(program_mem_read_ready),
//     .mem_read_data(program_mem_read_data),
// );



//   // Compute Core
//         core #(
//             .DATA_MEM_ADDR_BITS(DATA_MEM_ADDR_BITS),
//             .DATA_MEM_DATA_BITS(DATA_MEM_DATA_BITS),
//             .PROGRAM_MEM_ADDR_BITS(PROGRAM_MEM_ADDR_BITS),
//             .PROGRAM_MEM_DATA_BITS(PROGRAM_MEM_DATA_BITS),
//             .THREADS_PER_BLOCK(THREADS_PER_BLOCK),
//         ) core_instance (
//             .clk(clk),
//             .reset(core_reset[i]),
//             .start(core_start[i]),
//             .done(core_done[i]),
//             .block_id(core_block_id[i]),
//             .thread_count(core_thread_count[i]),
            
//             .program_mem_read_valid(fetcher_read_valid[i]),
//             .program_mem_read_address(fetcher_read_address[i]),
//             .program_mem_read_ready(fetcher_read_ready[i]),
//             .program_mem_read_data(fetcher_read_data[i]),





/////////////////////////////////////
/////////////////////////////////////
/////////////////////////////////////




// `default_nettype none
// `timescale 1ns/1ns

// module pmem_cache #() (
//     );
//     wire no;
// endmodulea