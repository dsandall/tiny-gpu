import cocotb
from .helpers.testbench_bin import setup_wrap

delay = 0
threads = 4


@cocotb.test()
async def test_negatives(dut):
    # Program Memory
    program = [

        0b1001000000000101,  # CONST R0, #5                   ;  5
        0b1001000100000011,  # CONST R1, #3                   ;  Positive value to create -3
        0b1001001000000000,  # CONST R2, #0                   ;  Address to store results
        0b1001110000000001,  # CONST R12, #1                  ;  increment variable
        0b0100000100100001,  # SUB R1, R2, R1                 ;  R1 = 0 - 3 = -3
        0b1000000000100001,  # STR R2, R1
        # ADD R2, R2, R12                ;  store -3 (253) and increment
        0b0011001000101100,
        # SUB R3, R0, R1                 ;  R3 = 5 - (-3) = 8
        0b0100001100000001,
        0b1000000000100011,  # STR R2, R3
        0b0011001000101100,  # ADD R2, R2, R12                ;  store 8 and increment
        0b0100001100010000,  # SUB R3, R1, R0                 ;  R3 = -3 - 5 = -8
        0b1000000000100011,  # STR R2, R3
        # ADD R2, R2, R12                ;  store -8 (248) and increment
        0b0011001000101100,
        # SUB R3, R1, R1                 ;  R3 = -3 - (-3) = 0
        0b0100001100010001,
        0b1000000000100011,  # STR R2, R3
        0b0011001000101100,  # ADD R2, R2, R12                ;  store 0 and increment
        0b1111000000000000,  # RET                            ;  End of program


    ]

    # Data Memory
    data = [
        0, 0, 0, 0,
    ]

    # run device and dump memory
    data_memory = await setup_wrap(dut=dut, program=program, data=data, threads=threads, mem_delay=delay)

    expected_results = [253, 8, 248, 0]
    for i, expected in enumerate(expected_results):
        result = data_memory.memory[i]
        assert result == expected, f"Result mismatch at index {
            i}: expected {expected}, got {result}"
