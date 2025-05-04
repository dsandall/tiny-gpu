import cocotb
from .helpers.testbench_bin import load_json_binary, setup_wrap


@cocotb.test()
async def test_matadd(dut):

    test_conf = load_json_binary(
        "/home/thebu/newhome/tiny-gpu/tiny-gpu-assembler/asm_build/test_matadd.json")

    data_memory = await setup_wrap(dut, test_conf, "steaae")

    ###
    # Verify results
    ###

    threads = test_conf["threads"]
    data = test_conf["initial_data"]

    # test results
    expected_results = [a + b for a,
                        b in zip(data[0:threads], data[8: (8 + threads)])]

    for i, expected in enumerate(expected_results):
        result = data_memory.memory[i + 16]
        assert result == expected, (
            f"Result mismatch at index {i}: expected {expected}, got {result}"
        )
