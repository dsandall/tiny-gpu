import cocotb
from .helpers.testbench_bin import more_wrap

delay = 0
threads = 8


@cocotb.test()
async def test_matadd(dut):
    # Data Memory
    data = [
        0,
        1,
        2,
        3,
        4,
        5,
        6,
        7,  # Matrix A (1 x 8)
        0,
        1,
        2,
        3,
        4,
        5,
        6,
        7,  # Matrix B (1 x 8)
    ]

    # run test
    data_memory = await more_wrap(
        dut=dut,
        data_init=data,
        config_path="/home/thebu/newhome/tiny-gpu/tiny-gpu-assembler/asm_build/test_matadd.json",
    )
    # data_memory = await setup_wrap(dut=dut, program=program, data=data, threads=threads, mem_delay=delay)

    # test results
    expected_results = [a + b for a, b in zip(data[0:threads], data[8 : (8 + threads)])]
    for i, expected in enumerate(expected_results):
        result = data_memory.memory[i + 16]
        assert result == expected, (
            f"Result mismatch at index {i}: expected {expected}, got {result}"
        )
