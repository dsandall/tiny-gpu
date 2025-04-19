`ifndef UTILS_SVH
`define UTILS_SVH

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

// Assumes that a single memory bus is read and write
// assumes that both devices use same address bits to communicate
// assumes that both devices use same bus width to communicate 
// (serial/deserial must be done in a module, such as arbitrator_cache)
`define CHANNEL_READ(prefix1, prefix2) \
    .prefix1``_read_valid       (prefix2``_read_valid), \
    .prefix1``_read_address     (prefix2``_read_address), \
    .prefix1``_read_ready       (prefix2``_read_ready), \
    .prefix1``_read_data        (prefix2``_read_data)

`define CHANNEL_WRITE(prefix1, prefix2) \
    .prefix1``_write_valid      (prefix2``_write_valid), \
    .prefix1``_write_address    (prefix2``_write_address), \
    .prefix1``_write_ready      (prefix2``_write_ready), \
    .prefix1``_write_data       (prefix2``_write_data)

`endif // UTILS_SVH
// end of utils.svh
