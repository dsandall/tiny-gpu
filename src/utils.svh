`ifndef UTILS_SVH
`define UTILS_SVH

//
// These all translate to some form of:
//
//  Memory transmission bus, with a handshake (DATA_BITS wide, NUM times)
// 
////
  //  reg "myname"_read_valid, // 4 bits
  //  reg "myname"_read_address [THREADS_PER_BLOCK-1:0], // 8 bits x 4 
  //  reg "myname"_read_ready, // 4 bits
  //  reg "myname"_read_data    [THREADS_PER_BLOCK-1:0] // 8 bits x 4
////
//
////
  // .mem_read_valid(program_mem_read_valid),
  // .mem_read_address(program_mem_read_address),
  // .mem_read_ready(program_mem_read_ready),
  // .mem_read_data(program_mem_read_data)
////
//
//   Note the lack of a comma at the final entry, provided by the macro user (or semicolon, etc)
//

`define CHANNEL_READ_BUFF(prefix, NUM, ADDR_BITS, DATA_BITS) \
    reg  [NUM-1:0]            prefix``_read_valid; \
    reg  [ADDR_BITS-1:0]      prefix``_read_address [NUM-1:0]; \
    reg  [NUM-1:0]            prefix``_read_ready; \
    reg  [DATA_BITS-1:0]      prefix``_read_data   [NUM-1:0]

`define CHANNEL_WRITE_BUFF(prefix, NUM, ADDR_BITS, DATA_BITS) \
    reg  [NUM-1:0]            prefix``_write_valid; \
    reg  [ADDR_BITS-1:0]      prefix``_write_address [NUM-1:0]; \
    reg  [NUM-1:0]            prefix``_write_ready; \
    reg  [DATA_BITS-1:0]      prefix``_write_data   [NUM-1:0]

`define CONSUMER_READ_MODULE(prefix, NUM, ADDR_BITS, DATA_BITS) \
    input logic   [NUM-1:0]            prefix``_read_valid, \
    input logic   [ADDR_BITS-1:0]      prefix``_read_address [NUM-1:0], \
    output logic   [NUM-1:0]            prefix``_read_ready, \
    output logic   [DATA_BITS-1:0]      prefix``_read_data   [NUM-1:0]

`define CONSUMER_WRITE_MODULE(prefix, NUM, ADDR_BITS, DATA_BITS) \
    input logic   [NUM-1:0]            prefix``_write_valid, \
    input logic   [ADDR_BITS-1:0]      prefix``_write_address [NUM-1:0], \
    output logic   [NUM-1:0]            prefix``_write_ready, \
    input logic   [DATA_BITS-1:0]      prefix``_write_data   [NUM-1:0]

`define CHANNEL_READ_MODULE(prefix, NUM, ADDR_BITS, DATA_BITS) \
    output logic  [NUM-1:0]            prefix``_read_valid, \
    output logic  [ADDR_BITS-1:0]      prefix``_read_address [NUM-1:0], \
    input logic    [NUM-1:0]            prefix``_read_ready, \
    input logic    [DATA_BITS-1:0]      prefix``_read_data   [NUM-1:0]

`define CHANNEL_WRITE_MODULE(prefix, NUM, ADDR_BITS, DATA_BITS) \
    output logic  [NUM-1:0]            prefix``_write_valid, \
    output logic  [ADDR_BITS-1:0]      prefix``_write_address [NUM-1:0], \
    input logic    [NUM-1:0]            prefix``_write_ready, \
    output logic  [DATA_BITS-1:0]      prefix``_write_data   [NUM-1:0]

`define CONSUMER_READ_MODULE_RESET(prefix) \
    prefix``_read_ready <= 0; \
    prefix``_read_data <= 0

`define CONSUMER_WRITE_MODULE_RESET(prefix) \
    prefix``_write_ready <= 0

`define CHANNEL_READ_MODULE_RESET(prefix) \
    prefix``_read_valid <= 0; \
    prefix``_read_address <= 0

`define CHANNEL_WRITE_MODULE_RESET(prefix) \
    prefix``_write_valid <= 0; \
    prefix``_write_address <= 0; \
    prefix``_write_data <= 0

// Assumes that a single memory bus is read and write
// assumes that both devices use same address bits to communicate
// assumes that both devices use same bus width to communicate 
// (serial/deserial must be done in a module, such as arbitrator_cache)
`define MEM_BUS_READ(prefix1, prefix2) \
    .prefix1``_read_valid       (prefix2``_read_valid), \
    .prefix1``_read_address     (prefix2``_read_address), \
    .prefix1``_read_ready       (prefix2``_read_ready), \
    .prefix1``_read_data        (prefix2``_read_data)

`define MEM_BUS_WRITE(prefix1, prefix2) \
    .prefix1``_write_valid      (prefix2``_write_valid), \
    .prefix1``_write_address    (prefix2``_write_address), \
    .prefix1``_write_ready      (prefix2``_write_ready), \
    .prefix1``_write_data       (prefix2``_write_data)


`define ZERO_ARRAY(arr, size) \
  for (int b = 0; b < size; b++) begin \
    arr[b] = '0; \
  end






`endif






// UTILS_SVH
// end of utils.svh
