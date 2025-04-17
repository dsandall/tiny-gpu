import cocotb
from .helpers.testbench_bin import setup_wrap

delay = 0
threads = 4

@cocotb.test()
async def test_subtract(dut):
    # Program Memory
    program = [
        # Assembled output for chat_code_subtraction.asm
        0b1001000000000101, # CONST R0, #5                   ;  First value (positive)
        0b1001000100000011, # CONST R1, #3                   ;  Positive value to create -3
        0b1001001000000000, # CONST R2, #0                   ;  Address to store results
        0b0100000100100001, # SUB R1, R2, R1                 ;  R1 = 0 - 3 = -3
        0b0100001100000001, # SUB R3, R0, R1                 ;  R3 = 5 - (-3) = 8
        0b1000000000100011, # STR R2, R3                     ;  Store result at memory[0]
        0b1001110000000001, # CONST R12, #1                  
        0b0011001000101100, # ADD R2, R2, R12                ;  Increment memory address
        0b0100001100010000, # SUB R3, R1, R0                 ;  R3 = -3 - 5 = -8
        0b1000000000100011, # STR R2, R3                     ;  Store result at memory[1]
        0b1001110000000001, # CONST R12, #1                  
        0b0011001000101100, # ADD R2, R2, R12                ;  Increment memory address
        0b0100001100010001, # SUB R3, R1, R1                 ;  R3 = -3 - (-3) = 0
        0b1000000000100011, # STR R2, R3                     ;  Store result at memory[2]
        0b1111000000000000, # RET                            ;  End of program
    ]

    # Data Memory
    data = [
        0,0,0,0,
    ]
    
    # run device and dump memory
    data_memory = await setup_wrap(dut=dut, program=program, data=data, threads=threads, mem_delay=delay)

    # Assuming the matrices are 2x2 and the result is stored starting at address 9
    expected_results = [8,254,0,0]
    for i, expected in enumerate(expected_results):
        result = data_memory.memory[i + 8]  # Results start at address 9
        assert result == expected, f"Result mismatch at index {i}: expected {expected}, got {result}"
