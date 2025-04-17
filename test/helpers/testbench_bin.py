from cocotb import default_config
import cocotb.triggers
from cocotb.triggers import RisingEdge
from .setup import setup
from .memory import Memory
from .format import format_cycle
from .logger import logger

import json

default_hw_config = {
    "program_addr_bits": 8,
    "program_data_bits": 16,
    "program_channels": 1,
    "data_addr_bits": 8,
    "data_data_bits": 8,
    "data_channels": 4,
}


def load_test_config(path):
    with open(path, "r") as f:
        test_config = json.load(f)

    testname = test_config["testname"]
    mem_delay = test_config["memory_delay"]
    threads = test_config["threads"]

    # Program memory (16 bits)
    program = [int(x, 16) for x in test_config["program_memory"]]

    print("PROGRAM IS")
    for i in program:
        print(i)

    # Hardware config
    if "hardware" in test_config:
        hw = test_config["hardware"]
        required_keys = default_hw_config.keys()
        if not all(k in hw for k in required_keys):
            raise ValueError(
                "If 'hardware' is specified, all hardware config keys must be present.")
    else:
        hw = None

    return testname, mem_delay, threads, program,  hw


async def more_wrap(dut, data_init, config_path):
    testname, mem_delay, threads, program, hardware = load_test_config(
        config_path)

    print(f"Running test: {testname}")

    return await setup_wrap(dut=dut, program=program, data=data_init,
                            threads=threads, mem_delay=mem_delay, hw=hardware)


async def setup_wrap(dut, program, data, threads, mem_delay, hw=default_hw_config):

    num_memory_printout = 24

    # memory modules
    program_memory = Memory(
        dut=dut,
        addr_bits=hw["program_addr_bits"],
        data_bits=hw["program_data_bits"],
        channels=hw["program_channels"],
        name="program",
        delay=mem_delay
    )

    data_memory = Memory(
        dut=dut,
        addr_bits=hw["data_addr_bits"],
        data_bits=hw["data_data_bits"],
        channels=hw["data_channels"],
        name="data",
        delay=mem_delay
    )

    # gpu module
    await setup(
        dut=dut,
        program_memory=program_memory,
        program=program,
        data_memory=data_memory,
        data=data,
        threads=threads,
    )

    # printout prior to sim
    data_memory.display(num_memory_printout)

    # execute sim
    cycles = 0
    while dut.done.value != 1:
        a = cocotb.start(data_memory.run())
        b = cocotb.start(program_memory.run())

        await cocotb.triggers.ReadOnly()
        format_cycle(dut, cycles)

        await RisingEdge(dut.clk)
        await a
        await b
        cycles += 1

    # printout after sim
    logger.info(f"Completed in {cycles} cycles")
    data_memory.display(num_memory_printout)

    # return results for testbench comparison
    return data_memory
