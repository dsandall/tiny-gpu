import cocotb
from .helpers.testbench_bin import load_json_binary, setup_wrap


@cocotb.test()
async def test_alldmem(dut):

    test_conf = load_json_binary(
        "/home/thebu/newhome/tiny-gpu/tiny-gpu-assembler/asm_build/test_alldmem.json")

    # run device and dump memory
    data_memory = await setup_wrap(dut, test_conf, "screen")

    ###
    # Verify results
    ###

    # data = test_conf["initial_data"]

    for i, byte in enumerate(data_memory.memory):
        assert i == byte, f"Result mismatch: expected {i}, got {byte}"
