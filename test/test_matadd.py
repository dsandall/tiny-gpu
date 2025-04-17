import cocotb
from .helpers.testbench_bin import setup_wrap

delay = 0
threads = 8

@cocotb.test()
async def test_matadd(dut):
    # Program Memory
    program = [
        0b0101000011011110,  # MUL R0, %blockIdx, %blockDim
        0b0011000000001111,  # ADD R0, R0, %threadIdx         ; i = blockIdx * blockDim + threadIdx
        0b1001000100000000,  # CONST R1, #0                   ; baseA (matrix A base address)
        0b1001001000001000,  # CONST R2, #8                   ; baseB (matrix B base address)
        0b1001001100010000,  # CONST R3, #16                  ; baseC (matrix C base address)
        0b0011010000010000,  # ADD R4, R1, R0                 ; addr(A[i]) = baseA + i
        0b0111010001000000,  # LDR R4, R4                     ; load A[i] from global memory
        0b0011010100100000,  # ADD R5, R2, R0                 ; addr(B[i]) = baseB + i
        0b0111010101010000,  # LDR R5, R5                     ; load B[i] from global memory
        0b0011011001000101,  # ADD R6, R4, R5                 ; C[i] = A[i] + B[i]
        0b0011011100110000,  # ADD R7, R3, R0                 ; addr(C[i]) = baseC + i
        0b1000000001110110,  # STR R7, R6                     ; store C[i] in global memory
        0b1111000000000000,  # RET                            ; end of kernel
    ]

    # Data Memory
    data = [
        0,
        1,
        2,
        3,
        4,
        5,
        6,
        7,  # Matrix A (1 x 8)
        0,
        1,
        2,
        3,
        4,
        5,
        6,
        7,  # Matrix B (1 x 8)
    ]

    # run test
    data_memory = await setup_wrap(dut=dut, program=program, data=data, threads=threads, mem_delay=delay)

    # test results
    expected_results = [a + b for a, b in zip(data[0:threads], data[8:(8+threads)])]
    for i, expected in enumerate(expected_results):
        result = data_memory.memory[i + 16]
        assert result == expected, (
            f"Result mismatch at index {i}: expected {expected}, got {result}"
        )

