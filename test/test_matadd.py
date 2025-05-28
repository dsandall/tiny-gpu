import cocotb
from .helpers.testbench_bin import load_json_binary, setup_wrap


@cocotb.test
async def test_matadd_8_threads(dut):
    test_conf = load_json_binary(
        "./tiny-gpu-assembler/asm_build/test_matadd_8_threads.json")

    data_memory = await setup_wrap(dut, test_conf, "steaae")

    verify_matadd(test_conf, data_memory)


@cocotb.test
async def test_matadd_32_threads(dut):
    test_conf = load_json_binary(
        "./tiny-gpu-assembler/asm_build/test_matadd_32_threads.json")

    data_memory = await setup_wrap(dut, test_conf, "steaae")

    verify_matadd(test_conf, data_memory)


def verify_matadd(test_conf, data_memory):

    ###
    # Verify results
    ###

    threads = test_conf["threads"]
    data = test_conf["initial_data"]

    # test results
    expected_results = [a + b for a,
                        b in zip(data[0:threads], data[threads: (threads*2)])]

    for i, expected in enumerate(expected_results):
        result = data_memory.memory[i + threads*2]
        assert result == expected, (
            f"Result mismatch at index {i}: expected {expected}, got {result}"
        )
