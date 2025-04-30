`default_nettype none
`timescale 1ns/1ns
`include "utils.svh"

// GPU
// > Built to use an external async memory with multi-channel read/write
// > Assumes that the program is loaded into program memory, data into data memory, and threads into
//   the device control register before the start signal is triggered
// > Has memory controllers to interface between external memory and its multiple cores
// > Configurable number of cores and thread capacity per core
module gpu #(
    parameter DATA_MEM_ADDR_BITS = 8,        // Number of bits in data memory address (256 rows)
    parameter DATA_MEM_DATA_BITS = 8,        // Number of bits in data memory value (8 bit data)
    parameter DATA_MEM_NUM_CHANNELS = 4,     // Number of concurrent channels for sending requests to data memory
    parameter PROGRAM_MEM_ADDR_BITS = 8,     // Number of bits in program memory address (256 rows)
    parameter PROGRAM_MEM_DATA_BITS = 16,    // Number of bits in program memory value (16 bit instruction)
    parameter PROGRAM_MEM_NUM_CHANNELS = 1,  // Number of concurrent channels for sending requests to program memory
    parameter NUM_HARDWARE_CORES = 1,        // Number of cores to include in this GPU
    parameter THREADS_PER_BLOCK = 4          // Number of threads to handle per block (determines the compute resources of each core)
  ) (
    input wire clk,
    input wire reset,

    // Kernel Execution
    input wire start,
    output wire done,

    // Device Control Register
    input wire device_control_write_enable,
    input wire [7:0] device_control_data,

    // Program Memory
    `CHANNEL_READ_MODULE(program_mem, PROGRAM_MEM_NUM_CHANNELS, PROGRAM_MEM_ADDR_BITS, PROGRAM_MEM_DATA_BITS),

    // Data Memory
    `CHANNEL_READ_MODULE(data_mem, DATA_MEM_NUM_CHANNELS, DATA_MEM_ADDR_BITS, DATA_MEM_DATA_BITS),
    `CHANNEL_WRITE_MODULE(data_mem, DATA_MEM_NUM_CHANNELS, DATA_MEM_ADDR_BITS, DATA_MEM_DATA_BITS)
);

    localparam NUM_LOGICAL_CORES = NUM_HARDWARE_CORES * 2; //WARN:

    localparam NUM_FETCHERS = NUM_LOGICAL_CORES;
    localparam NUM_LSUS = NUM_LOGICAL_CORES * THREADS_PER_BLOCK;

    /////////////////////////////////////////
    //////////     Control Logic  ///////////
    /////////////////////////////////////////
    
    // Control
    wire [7:0] thread_count;
    
    // Compute Core State
    reg [NUM_LOGICAL_CORES-1:0] core_start;
    reg [NUM_LOGICAL_CORES-1:0] core_reset;
    wire [NUM_LOGICAL_CORES-1:0] core_done;
    reg [7:0] core_block_id [NUM_LOGICAL_CORES-1:0];
    reg [$clog2(THREADS_PER_BLOCK):0] core_thread_count [NUM_LOGICAL_CORES-1:0];

    // Device Control Register
    dcr dcr_instance (
        .clk(clk),
        .reset(reset),

        .device_control_write_enable(device_control_write_enable),
        .device_control_data(device_control_data),
        .thread_count(thread_count)
    );

    // Dispatcher
    dispatch #(
        .NUM_LOGICAL_CORES(NUM_LOGICAL_CORES),
        .THREADS_PER_BLOCK(THREADS_PER_BLOCK)
    ) dispatch_instance (
        .clk(clk),
        .reset(reset),
        .start(start),

        .thread_count(thread_count),
        .core_done(core_done),
        .core_start(core_start),
        .core_reset(core_reset),
        .core_block_id(core_block_id),
        .core_thread_count(core_thread_count),
        .done(done)
    );

    // LSU <-> Data Memory Controller Channels (x8)
    // there's a channel/bus for each LSU
    `CHANNEL_READ_BUFF(lsu, NUM_LSUS, DATA_MEM_ADDR_BITS, DATA_MEM_DATA_BITS);
    `CHANNEL_WRITE_BUFF(lsu, NUM_LSUS, DATA_MEM_ADDR_BITS, DATA_MEM_DATA_BITS);

    // Fetcher <-> Program Memory Controller Channels (x1)
    `CHANNEL_READ_BUFF(fetcher, NUM_FETCHERS, PROGRAM_MEM_ADDR_BITS, PROGRAM_MEM_DATA_BITS);

    /////////////////////////////////////////////
    //////////   Some Core/Thread mapping logic
    /////////////////////////////////////////////
    genvar i;
    generate
        for (i = 0; i < NUM_LOGICAL_CORES; i = i + 1) begin : per_core_accoutrements
        // For every core,

            // EDA: We create separate signals here to pass to cores because of a requirement
            // by the OpenLane EDA flow (uses Verilog 2005) that prevents slicing the top-level signals
            //
            // IE, theres a buffer here that was necessary for... some opensource ASIC reason

            `CHANNEL_READ_BUFF(core_lsu, THREADS_PER_BLOCK, DATA_MEM_ADDR_BITS, DATA_MEM_DATA_BITS);
            `CHANNEL_WRITE_BUFF(core_lsu, THREADS_PER_BLOCK, DATA_MEM_ADDR_BITS, DATA_MEM_DATA_BITS);

            // Pass through signals between LSUs and data memory controller:
            genvar j;
            for (j = 0; j < THREADS_PER_BLOCK; j = j + 1) begin
                localparam lsu_index = i * THREADS_PER_BLOCK + j; //NOTE: this ensures that each core has threads that are numbered sequentially, and uniquely
                always @(posedge clk) begin
                // For every core,

                    //////////////////
                    // Thread -> Cache
                    //////////////////
                    //LSU Read Requests
                    lsu_read_valid[lsu_index] <= core_lsu_read_valid[j]; // NOTE: for example, on core 2: j(core internal thread numbers) = {0:3}, lsu_index(global thread numbers) = {8:11} 
                    lsu_read_address[lsu_index] <= core_lsu_read_address[j];

                    //LSU Write Requests
                    lsu_write_valid[lsu_index] <= core_lsu_write_valid[j];
                    lsu_write_address[lsu_index] <= core_lsu_write_address[j];
                    lsu_write_data[lsu_index] <= core_lsu_write_data[j];

                    //////////////////
                    // Cache -> Thread
                    //////////////////
                    //LSU Read/Write Responses
                    core_lsu_read_ready[j] <= lsu_read_ready[lsu_index];
                    core_lsu_read_data[j] <= lsu_read_data[lsu_index];
                    core_lsu_write_ready[j] <= lsu_write_ready[lsu_index];
                end
            end
        end
    endgenerate

    ////////////////////////////////////////
    //////////   Compute Cores   ///////////
    ////////////////////////////////////////

    genvar i;
    generate
        for (i = 0; i < NUM_HARDWARE_CORES; i = i + 2) begin : cores
            
            // Compute Core
            ducttape2cores #(
                .DATA_MEM_ADDR_BITS(DATA_MEM_ADDR_BITS),
                .DATA_MEM_DATA_BITS(DATA_MEM_DATA_BITS),
                .PROGRAM_MEM_ADDR_BITS(PROGRAM_MEM_ADDR_BITS),
                .PROGRAM_MEM_DATA_BITS(PROGRAM_MEM_DATA_BITS),
                .THREADS_PER_BLOCK(THREADS_PER_BLOCK)
            ) core_instance (
                .clk(clk),

                .reset(core_reset[i]),
                .start(core_start[i]),
                .done(core_done[i]),
                .block_id(core_block_id[i]),
                .thread_count(core_thread_count[i]),
                .program_mem_read_valid(fetcher_read_valid[i]),
                .program_mem_read_address(fetcher_read_address[i]),
                .program_mem_read_ready(fetcher_read_ready[i]),
                .program_mem_read_data(fetcher_read_data[i]),
                `MEM_BUS_READ(data_mem, per_core_accoutrements[i].core_lsu), //NOTE: this macro expands to connect: data_mem{_read_ready,_read_valid,...} and per_core_accoutrements[i].core_lsu{_read_ready, _read_valid...}
                `MEM_BUS_WRITE(data_mem, per_core_accoutrements[i].core_lsu),

                // the conjoined twin core
                .reset_2(core_reset[i+1]),
                .start_2(core_start[i+1]),
                .done_2(core_done[i+1]),
                .block_id_2(core_block_id[i+1]),
                .thread_count_2(core_thread_count[i+1]),
                .program_mem_2_read_valid(fetcher_read_valid[i+1]),
                .program_mem_2_read_address(fetcher_read_address[i+1]),
                .program_mem_2_read_ready(fetcher_read_ready[i+1]),
                .program_mem_2_read_data(fetcher_read_data[i+1]),
                `MEM_BUS_READ(data_mem_2, per_core_accoutrements[i+1].core_lsu),
                `MEM_BUS_WRITE(data_mem_2, per_core_accoutrements[i+1].core_lsu)
            );
        end
    endgenerate

    /////////////////////////////////////////
    //////////   Caches           ///////////
    /////////////////////////////////////////

    // Data Memory Controller
    // dmem_controller #(
    arbiter_cache #(
        .ADDR_BITS(DATA_MEM_ADDR_BITS),
        .CONSUMER_BUS_BITS(DATA_MEM_DATA_BITS),
        .NUM_CONSUMERS(NUM_LSUS),
        .NUM_CHANNELS(DATA_MEM_NUM_CHANNELS),
        .MEMORY_BUS_BITS(DATA_MEM_DATA_BITS)
    ) data_memory_controller (

        .clk(clk),
        .reset(reset),
        `MEM_BUS_WRITE(consumer, lsu),
        `MEM_BUS_READ(consumer, lsu),
        `MEM_BUS_WRITE(mem, data_mem),
        `MEM_BUS_READ(mem, data_mem)
    );
    
    arbiter_cache #(
        .ADDR_BITS(PROGRAM_MEM_ADDR_BITS),
        .CONSUMER_BUS_BITS(PROGRAM_MEM_DATA_BITS),
        .NUM_CONSUMERS(NUM_FETCHERS),
        .NUM_CHANNELS(PROGRAM_MEM_NUM_CHANNELS),
        .MEMORY_BUS_BITS(PROGRAM_MEM_DATA_BITS)
    ) program_memory_controller (

        .clk(clk),
        .reset(reset),
        // Assumed to be disconnected by module, but hardware is present
        //`MEM_BUS_WRITE(),
        //`MEM_BUS_WRITE(),
        `MEM_BUS_READ(consumer, fetcher),
        `MEM_BUS_READ(mem, program_mem)
    );

    /////////////////////////////////////////
    // Dump waveform to GTK Wave readable format
    /////////////////////////////////////////
    initial begin
        $dumpfile("build/gpu.vcd"); 
        $dumpvars(0, gpu);
    end
    


endmodule
