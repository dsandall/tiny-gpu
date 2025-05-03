`ifndef CACHE_UTILS_SVH
`define CACHE_UTILS_SVH

// ------------------------------------
// Cache Geometry Derived Parameters
// ------------------------------------

// OFFSET

localparam NUM_WORDS_IN_LINE = 2 ** $unsigned(CACHE_OFFSET_BITS); // WARN: assumes byte addressability
localparam CHUNK_SIZE = MEMORY_BUS_BITS;
localparam NUM_BYTES = ($unsigned(NUM_WORDS_IN_LINE) * 8) / CHUNK_SIZE;
localparam NUM_CHUNKS = ($unsigned(NUM_WORDS_IN_LINE) * BITS_ADDRESSABLE) / CHUNK_SIZE;
localparam CACHE_LINE_SIZE_BITS = NUM_CHUNKS * CHUNK_SIZE;

// INDEX

localparam CACHE_NUM_LINES = 2 ** $unsigned(CACHE_INDEX_BITS);

// TAG

localparam CACHE_TAG_BITS = ADDR_BITS - CACHE_INDEX_BITS - CACHE_OFFSET_BITS;

// ------------------------------------
// Bit Range Macros
// ------------------------------------

localparam TAG_HI = ADDR_BITS - 1;
localparam TAG_LO = CACHE_INDEX_BITS + CACHE_OFFSET_BITS;
localparam LINE_HI = TAG_LO - 1;
localparam LINE_LO = CACHE_OFFSET_BITS;
localparam OFFSET_HI = CACHE_OFFSET_BITS - 1;
localparam OFFSET_LO = 0;

`define TAG_BITS    TAG_HI:TAG_LO
`define LINE_BITS   LINE_HI:LINE_LO
`define OFFSET_BITS OFFSET_HI:OFFSET_LO

// ------------------------------------
// Cache Line Type
// ------------------------------------

typedef struct packed {
    logic [CACHE_LINE_SIZE_BITS-1:0] data;
    logic [CACHE_TAG_BITS-1:0]       tag;
    logic [NUM_CHUNKS-1:0]           valid;
    logic                            dirty;
} cache_line_t;

// ------------------------------------
// Cache Offset Mask (case-style logic)
// ------------------------------------

localparam CACHE_OFFSET_MASK = 
    (CACHE_OFFSET_BITS == 0) ? 16'hBEEF :
    (CACHE_OFFSET_BITS == 1) ? 16'hFFFE :
    (CACHE_OFFSET_BITS == 2) ? 16'hFFFC :
    (CACHE_OFFSET_BITS == 3) ? 16'hFFF8 :
    (CACHE_OFFSET_BITS == 4) ? 16'hFFF0 :
    (CACHE_OFFSET_BITS == 5) ? 16'hFFE0 :
    (CACHE_OFFSET_BITS == 6) ? 16'hFFCE :
    (CACHE_OFFSET_BITS == 7) ? 16'hFF8E : 16'h0000;

// ------------------------------------
// Controller FSM States
// ------------------------------------

typedef enum logic [7:0] {
    IDLE,
    CACHE_HIT,
    CACHE_MISS,
    CACHE_MISS_WAIT,
    READ_RELAYING,
    WRITE_WAITING,
    WRITE_RELAYING,
    MAIN_MEM_RELAYING
} controller_state_t;

// ------------------------------------
// Cache Accessor Functions
// ------------------------------------

// Read a chunk from a cache line
function automatic logic [CONSUMER_BUS_BITS-1:0] cache_read_by_offset(
    input logic [CACHE_LINE_SIZE_BITS-1:0] line,
    input logic [CACHE_OFFSET_BITS-1:0] offset
);
    cache_read_by_offset = line[$unsigned(offset) * CONSUMER_BUS_BITS +: CONSUMER_BUS_BITS];
endfunction

// Write a chunk into a cache line
function automatic logic [CACHE_LINE_SIZE_BITS-1:0] cache_write_by_offset(
    input logic [CACHE_LINE_SIZE_BITS-1:0] line,
    input logic [CACHE_OFFSET_BITS-1:0] offset,
    input logic [MEMORY_BUS_BITS-1:0] data_in
);
    logic [CACHE_LINE_SIZE_BITS-1:0] temp;
    temp = line;
    temp[$unsigned(offset) * MEMORY_BUS_BITS +: MEMORY_BUS_BITS] = data_in;
    cache_write_by_offset = temp;
endfunction

// Generate a valid-bit mask
function automatic logic [NUM_CHUNKS-1:0] cache_valid_mask_by_offset(
    input logic [CACHE_OFFSET_BITS-1:0] offset
);
    cache_valid_mask_by_offset = '0;
    cache_valid_mask_by_offset[$unsigned(offset)] = 1'b1;
endfunction

// Select consumer read data (for tail vs line)
function automatic logic [CONSUMER_BUS_BITS-1:0] select_consumer_read_data;
    input int offset_bits;
    input logic [CACHE_OFFSET_BITS-1:0] offset;
    input logic [CACHE_LINE_SIZE_BITS-1:0] line_data;
    input logic [CONSUMER_BUS_BITS-1:0] tail_data;

    int i;
    localparam NUM_CONSUMER_CHUNKS = CACHE_LINE_SIZE_BITS / CONSUMER_BUS_BITS;

    begin
        select_consumer_read_data = {CONSUMER_BUS_BITS{1'b0}};
        if (offset == (NUM_CONSUMER_CHUNKS - 1)) begin
            select_consumer_read_data = tail_data;
        end else begin
            for (i = 0; i < NUM_CONSUMER_CHUNKS; i = i + 1) begin
                if (offset == i) begin
                    select_consumer_read_data = line_data[(CONSUMER_BUS_BITS*i)+:CONSUMER_BUS_BITS];
                end
            end
        end
    end
endfunction

`endif // CACHE_UTILS_SVH

