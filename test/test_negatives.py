import cocotb
from .helpers.testbench_bin import more_wrap

delay = 0
threads = 4


@cocotb.test()
async def test_negatives(dut):

    # Data Memory
    data = [
        0, 0, 0, 0,
    ]

    # run device and dump memory
    # data_memory = await setup_wrap(dut=dut, program=program, data=data, threads=threads, mem_delay=delay)
    data_memory = await more_wrap(dut=dut, data_init=data, config_path="/home/thebu/newhome/tiny-gpu/tiny-gpu-assembler/asm_build/test_negatives.json")

    # expected_results = [253, 8, 248, 0]
    expected_results = [3, 0, 0, 0]
    for i, expected in enumerate(expected_results):
        result = data_memory.memory[i]
        assert result == expected, f"Result mismatch at index {
            i}: expected {expected}, got {result}"
