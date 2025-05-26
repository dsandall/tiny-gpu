`ifndef ENUMS_SVH
`define ENUMS_SVH


typedef enum logic [2:0] {
  CORE_IDLE = 3'b000,  // Waiting to start
  CORE_FETCH = 3'b001,  // Fetch instructions from program memory
  CORE_DECODE = 3'b010,  // Decode instructions into control signals
  CORE_REQUEST = 3'b011,  // Request data from registers or memory
  CORE_WAIT = 3'b100,  // Wait for response from memory if necessary
  CORE_EXECUTE = 3'b101,  // Execute ALU and PC calculations
  CORE_UPDATE = 3'b110,  // Update registers, NZP, and PC
  CORE_DONE = 3'b111  // Done executing this block
} corestate_t;

typedef enum logic [2:0] {
  FET_IDLE = 3'b000,
  FET_CHING = 3'b001,
  FET_DONE = 3'b010
} fetcher_state_t;


`endif

