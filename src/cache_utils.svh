`ifndef CACHE_UTILS_SVH
`define CACHE_UTILS_SVH
    
// Cache line struct definition
    typedef struct packed {
        logic [CACHE_LINE_SIZE_BITS-1:0] data;
        logic [CACHE_TAG_BITS-1:0]       tag;
        logic [NUM_CHUNKS-1:0]           valid;
        logic                            dirty;
    } cache_line_t;

//////////////////////////////////
// Cache Data Accessor Functions
//////////////////////////////////

// Read a data chunk from a cache line at a given offset
function automatic logic [CHUNK_SIZE-1:0] cache_read_by_offset(
    input logic [CACHE_LINE_SIZE_BITS-1:0] line,
    input logic [CACHE_OFFSET_BITS-1:0] offset
);
    cache_read_by_offset = line[offset * CHUNK_SIZE +: CHUNK_SIZE];
endfunction

// Write a data chunk into a cache line at a given offset
function automatic logic [CACHE_LINE_SIZE_BITS-1:0] cache_write_by_offset(
    input logic [CACHE_LINE_SIZE_BITS-1:0] line,
    input logic [CACHE_OFFSET_BITS-1:0] offset,
    input logic [CHUNK_SIZE-1:0] data_in
);
    logic [CACHE_LINE_SIZE_BITS-1:0] temp;
    temp = line;
    temp[offset * CHUNK_SIZE +: CHUNK_SIZE] = data_in;
    cache_write_by_offset = temp;
endfunction

// Generate a valid-bit mask for a given chunk offset
function automatic logic [NUM_CHUNKS-1:0] cache_valid_mask_by_offset(
    input logic [CACHE_OFFSET_BITS-1:0] offset
);
    cache_valid_mask_by_offset = '0;
    cache_valid_mask_by_offset[offset] = 1'b1;
endfunction

`endif // CACHE_UTILS_SVH
// end of cache_utils.svh
