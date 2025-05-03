`ifndef CACHE_UTILS_SVH
`define CACHE_UTILS_SVH
    


 // kinda gross, just pretend it's a case statement
 localparam CACHE_OFFSET_MASK = (CACHE_OFFSET_BITS == 0) ? 16'hBEEF :
 (CACHE_OFFSET_BITS == 1) ? 16'hFFFE :
 (CACHE_OFFSET_BITS == 2) ? 16'hFFFC :
 (CACHE_OFFSET_BITS == 3) ? 16'hFFF8 :
 (CACHE_OFFSET_BITS == 4) ? 16'hFFF0 :
 (CACHE_OFFSET_BITS == 5) ? 16'hFFE0 :
 (CACHE_OFFSET_BITS == 6) ? 16'hFFCE :
 (CACHE_OFFSET_BITS == 7) ? 16'hFF8E : 16'h0000;

  // offset and chunks - if gpu address space is per bytes, cache is by line.
  // 1 line is X (1 byte) chunks 
  // chunking is used for serial burst reads from main memory
  localparam NUM_WORDS_IN_LINE = 2**(CACHE_OFFSET_BITS); //WARN: assumes that threads are byte addressable
  localparam CHUNK_SIZE = MEMORY_BUS_BITS;
  localparam NUM_BYTES = (NUM_WORDS_IN_LINE*8)/CHUNK_SIZE;
  localparam NUM_CHUNKS = (NUM_WORDS_IN_LINE*BITS_ADDRESSABLE)/CHUNK_SIZE;
  localparam CACHE_LINE_SIZE_BITS = NUM_CHUNKS * CHUNK_SIZE; //todo testing: this also should equal 

  // index 
  // which line in the cache is it?
  localparam CACHE_NUM_LINES = 2**CACHE_INDEX_BITS; //todo testing: cache_num_lines * cache_line_size * tag possibilities should be equal to size of memory address space?
  
  // tag
  // UUID to prevent collisions
  localparam CACHE_TAG_BITS = ADDR_BITS - CACHE_INDEX_BITS - CACHE_OFFSET_BITS;

// Cache line struct definition
    typedef struct packed {
        logic [CACHE_LINE_SIZE_BITS-1:0] data;
        logic [CACHE_TAG_BITS-1:0]       tag;
        logic [NUM_CHUNKS-1:0]           valid;
        logic                            dirty;
    } cache_line_t;

    `define TAG_BITS ADDR_BITS-1:CACHE_INDEX_BITS+CACHE_OFFSET_BITS
    `define LINE_BITS CACHE_INDEX_BITS+CACHE_OFFSET_BITS-1:CACHE_OFFSET_BITS
    `define OFFSET_BITS CACHE_OFFSET_BITS-1:0

//// FSM States. Could be split into more states,
////    depending on penalties for num clock cycles vs the clock freq of the cache FSM as a whole 
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

//////////////////////////////////
// Cache Data Accessor Functions
//////////////////////////////////

// Read a data chunk from a cache line at a given offset
function automatic logic [CONSUMER_BUS_BITS-1:0] cache_read_by_offset(
    input logic [CACHE_LINE_SIZE_BITS-1:0] line,
    input logic [CACHE_OFFSET_BITS-1:0] offset
);
    cache_read_by_offset = line[offset * CONSUMER_BUS_BITS +: CONSUMER_BUS_BITS];
endfunction

// Write a data chunk into a cache line at a given offset
function automatic logic [CACHE_LINE_SIZE_BITS-1:0] cache_write_by_offset(
    input logic [CACHE_LINE_SIZE_BITS-1:0] line,
    input logic [CACHE_OFFSET_BITS-1:0] offset,
    input logic [MEMORY_BUS_BITS-1:0] data_in
);
    logic [CACHE_LINE_SIZE_BITS-1:0] temp;
    temp = line;
    temp[offset * MEMORY_BUS_BITS +: MEMORY_BUS_BITS] = data_in;
    cache_write_by_offset = temp;
endfunction

// Generate a valid-bit mask for a given chunk offset
function automatic logic [NUM_CHUNKS-1:0] cache_valid_mask_by_offset(
    input logic [CACHE_OFFSET_BITS-1:0] offset
);
    cache_valid_mask_by_offset = '0;
    cache_valid_mask_by_offset[offset] = 1'b1;
endfunction

function automatic logic [CONSUMER_BUS_BITS-1:0] select_consumer_read_data;
    input int offset_bits;
    input logic [CACHE_OFFSET_BITS-1:0] offset;
    input logic [CACHE_LINE_SIZE_BITS-1:0] line_data;
    input logic [CONSUMER_BUS_BITS-1:0] tail_data;

    int i;

    begin

      // WARN: assumes that address space and consumer addressing are similar (ie,
      // +1 address is next consumer chunk size) (ie, not byte addr memory for
      // a 64 bit read bus)

      localparam NUM_CONSUMER_CHUNKS = CACHE_LINE_SIZE_BITS / CONSUMER_BUS_BITS;
        // Default to zero
        select_consumer_read_data = {CONSUMER_BUS_BITS{1'b0}};

        // If offset == last chunk index, take tail_data
        if (offset == (NUM_CONSUMER_CHUNKS - 1)) begin
            select_consumer_read_data = tail_data;
        end else begin
            // Manually select the byte at the specified offset
            for (i = 0; i < NUM_CONSUMER_CHUNKS; i = i + 1) begin
                if (offset == i) begin
                    select_consumer_read_data = line_data[(CONSUMER_BUS_BITS*i)+:CONSUMER_BUS_BITS];
                end
            end
        end
    end
endfunction

`endif // CACHE_UTILS_SVH
// end of cache_utils.svh
