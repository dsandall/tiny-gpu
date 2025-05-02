import cocotb
from .helpers.testbench_bin import load_json_binary, setup_wrap


@cocotb.test()
async def test_load_20_cycles(dut):

    test_conf = load_json_binary(
        "/home/thebu/newhome/tiny-gpu/tiny-gpu-assembler/asm_build/test_load.json")

    test_conf["memory_delay"] = 20

    # run device and dump memory
    data_memory = await setup_wrap(dut, test_conf)

    ###
    # Verify results
    ###

    expected_results = [
        a for a in test_conf["initial_data"][0:test_conf["threads"]]]

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
