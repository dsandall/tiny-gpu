import cocotb
from .helpers.testbench_bin import load_json_binary, setup_wrap


@cocotb.test()
async def test_matmul(dut):

    test_conf = load_json_binary(
        "/home/thebu/newhome/tiny-gpu/tiny-gpu-assembler/asm_build/test_matmul.json")

    data_memory = await setup_wrap(dut, test_conf)

    ###
    # Verify results
    ###

    data = test_conf["initial_data"]

    # Assuming the matrices are 2x2 and the result is stored starting at address 9
    matrix_a = [data[0:2], data[2:4]]  # First matrix (2x2)
    matrix_b = [data[4:6], data[6:8]]  # Second matrix (2x2)
    expected_results = [
        matrix_a[0][0] * matrix_b[0][0] +
        matrix_a[0][1] * matrix_b[1][0],  # C[0,0]
        matrix_a[0][0] * matrix_b[0][1] +
        matrix_a[0][1] * matrix_b[1][1],  # C[0,1]
        matrix_a[1][0] * matrix_b[0][0] +
        matrix_a[1][1] * matrix_b[1][0],  # C[1,0]
        matrix_a[1][0] * matrix_b[0][1] +
        matrix_a[1][1] * matrix_b[1][1],  # C[1,1]
    ]
    for i, expected in enumerate(expected_results):
        result = data_memory.memory[i + 8]  # Results start at address 9
        assert result == expected, (
            f"Result mismatch at index {i}: expected {expected}, got {result}"
        )
