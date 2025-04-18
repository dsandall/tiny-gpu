import cocotb
from .helpers.testbench_bin import setup_wrap, load_json_binary

delay = 0  # Memory Read/Write Delay, in Clock Cycles
threads = 8


@cocotb.test()
async def test_load_8_threads(dut):

    test_conf = load_json_binary(
        "/home/thebu/newhome/tiny-gpu/tiny-gpu-assembler/asm_build/test_load_8_threads.json")

    test_conf["initial_data"] = [
        1, 2, 3, 4, 5, 6, 7
    ]

    # run device and dump memory
    data_memory = await setup_wrap(dut, test_conf)

    threads = test_conf["threads"]
    data = test_conf["initial_data"]
    # run device and dump memory

    expected_results = [a for a in data[0:threads]]
    for i, expected in enumerate(expected_results):
        result = data_memory.memory[i]
        assert result == expected, f"Result mismatch at index {
            i}: expected {expected}, got {result}"
        result = data_memory.memory[i + 8]
        assert result == 2 * \
            expected, f"Result mismatch at index {
                i}: expected {expected}, got {result}"
        result = data_memory.memory[i + 8*2]
        assert result == 4 * \
            expected, f"Result mismatch at index {
                i}: expected {expected}, got {result}"
        result = data_memory.memory[i + 8*3]
        assert result == 8 * \
            expected, f"Result mismatch at index {
                i}: expected {expected}, got {result}"
