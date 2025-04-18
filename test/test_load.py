import cocotb
from .helpers.testbench_bin import load_json_binary, setup_wrap


@cocotb.test()
async def test_load(dut):

    test_conf = load_json_binary(
        "/home/thebu/newhome/tiny-gpu/tiny-gpu-assembler/asm_build/test_load.json")

    # run device and dump memory
    data_memory = await setup_wrap(dut, test_conf)

    data = test_conf["initial_data"]
    threads = test_conf["threads"]

    expected_results = [a for a in data[0:threads]]
    for i, expected in enumerate(expected_results):
        result = data_memory.memory[i]
        assert result == expected, f"Result mismatch at index {
            i}: expected {expected}, got {result}"
        result = data_memory.memory[i + 4]
        assert result == 2 * \
            expected, f"Result mismatch at index {
                i}: expected {expected}, got {result}"
        result = data_memory.memory[i + 4*2]
        assert result == 4 * \
            expected, f"Result mismatch at index {
                i}: expected {expected}, got {result}"
        result = data_memory.memory[i + 4*3]
        assert result == 8 * \
            expected, f"Result mismatch at index {
                i}: expected {expected}, got {result}"
