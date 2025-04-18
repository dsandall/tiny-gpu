// Unfortunately, you cant use interfaces as module input/outputs... 
// so this is very limited for actual cleanup and bundling of the code

interface MemChannelIF #(
    parameter ADDR_BITS = 32,
    parameter DATA_BITS = 32
);
    logic        read_valid;
    logic [ADDR_BITS-1:0] read_address;
    logic        read_ready;
    logic [DATA_BITS-1:0] read_data;

    logic        write_valid;
    logic [ADDR_BITS-1:0] write_address;
    logic [DATA_BITS-1:0] write_data;
    logic        write_ready;
endinterface
