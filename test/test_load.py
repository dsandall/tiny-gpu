import cocotb
from .helpers.testbench_bin import load_json_binary, setup_wrap


@cocotb.test
async def test_load(dut):
    test_conf = load_json_binary(
        "./tiny-gpu-assembler/asm_build/test_load.json")

    await lode(dut, test_conf)


@cocotb.test
async def test_load_20_cycles(dut):
    test_conf = load_json_binary(
        "./tiny-gpu-assembler/asm_build/test_load.json")

    test_conf["memory_delay"] = 20

    await lode(dut, test_conf)


@cocotb.test
async def test_load_8_threads(dut):
    # not passing on master either
    test_conf = load_json_binary(
        "./tiny-gpu-assembler/asm_build/test_load_8_threads.json")

    await lode(dut, test_conf)


async def lode(dut, test_conf):

    # run device and dump memory
    data_memory = await setup_wrap(dut, test_conf)

    ###
    # Verify results
    ###

    data = test_conf["initial_data"]
    threads = test_conf["threads"]

    expected_results = [a for a in data[0:threads]]
    for i, expected in enumerate(expected_results):
        result = data_memory.memory[i]
        assert result == expected, f"Result mismatch at index {
            i}: expected {expected}, got {result}"
        result = data_memory.memory[i + threads]
        assert result == 2 * \
            expected, f"Result mismatch at index {
                i}: expected {expected}, got {result}"
        result = data_memory.memory[i + threads*2]
        assert result == 4 * \
            expected, f"Result mismatch at index {
                i}: expected {expected}, got {result}"
        result = data_memory.memory[i + threads*3]
        assert result == 8 * \
            expected, f"Result mismatch at index {
                i}: expected {expected}, got {result}"
