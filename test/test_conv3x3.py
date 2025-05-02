import cocotb
from .helpers.testbench_bin import load_json_binary, setup_wrap


@cocotb.test()
async def test_conv3x3(dut):

    test_conf = load_json_binary(
        "/home/thebu/newhome/tiny-gpu/tiny-gpu-assembler/asm_build/test_conv3x3.json")

    print(test_conf)
    # run device and dump memory
    data_memory = await setup_wrap(dut, test_conf, "screen")

    ###
    # Verify results
    ###

    return
    data = test_conf["initial_data"]

    for byte in data:
        assert 255 == byte, f"Result mismatch: expected {255}, got {byte}"
