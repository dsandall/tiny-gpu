import cocotb
from .helpers.testbench_bin import load_json_binary, setup_wrap


@cocotb.test
async def test_matmul_2x2(dut):

    test_conf = load_json_binary(
        "./tiny-gpu-assembler/asm_build/test_matmul_2x2.json")

    data_memory = await setup_wrap(dut, test_conf, "screen")

    verify_matmul(2, test_conf, data_memory)


@cocotb.test
async def test_matmul_4x4(dut):

    test_conf = load_json_binary(
        "./tiny-gpu-assembler/asm_build/test_matmul_4x4.json")

    data_memory = await setup_wrap(dut, test_conf, "screen")

    verify_matmul(4, test_conf, data_memory)


def verify_matmul(N, test_conf, data_memory):

    data = test_conf["initial_data"]
    print(data)

    baseB = (N**2)
    baseC = (N**2)*2
    A_flat = data[0:baseB]
    B_flat = data[baseB:baseC]
    print("printing")
    print(A_flat)
    print(B_flat)

    # Convert flat data into 2D matrices
    matrix_a = [A_flat[i * N:((i + 1) * N)] for i in range(N)]
    matrix_b = [B_flat[i * N:((i + 1) * N)] for i in range(N)]

    # Compute expected result: matrix C = A × B
    expected_results = []
    for i in range(N):
        for j in range(N):
            print(i, j)
            value = sum(matrix_a[i][k] * matrix_b[k][j] for k in range(N))
            expected_results.append(value)

    print("printing2")
    print(expected_results)
    # Compare with values in data_memory
    for i, expected in enumerate(expected_results):
        result = data_memory.memory[baseC + i]
        assert result == expected, (
            f"Result mismatch at index {i}: expected {expected}, got {result}"
        )
