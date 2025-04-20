import cocotb
from .helpers.testbench_bin import load_json_binary, setup_wrap


@cocotb.test()
async def test_negatives(dut):

    # Data Memory
    data = [
        0, 0, 0, 0,
    ]

    test_conf = load_json_binary(
        "/home/thebu/newhome/tiny-gpu/tiny-gpu-assembler/asm_build/test_negatives.json")

    # run device and dump memory
    data_memory = await setup_wrap(dut, test_conf)

    # expected_results = [253, 8, 248, 0]
    expected_results = [253, 0, 0, 0]
    for i, expected in enumerate(expected_results):
        result = data_memory.memory[i]
        assert result == expected, f"Result mismatch at index {
            i}: expected {expected}, got {result}"
