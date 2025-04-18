import cocotb.triggers
from cocotb.triggers import RisingEdge
from .setup import setup
from .memory import Memory
from .format import format_cycle
from .logger import logger

from ctypes import c_int8, c_uint16
import json

default_hw_config = {
    "program_addr_bits": 8,
    "program_data_bits": 16,
    "program_channels": 1,
    "data_addr_bits": 8,
    "data_data_bits": 8,
    "data_channels": 4,
}


def load_json_binary(config_path):
    # TODO: replace all accesses with graceful handling (.get() and None)
    with open(config_path, "r") as f:
        test_config = json.load(f).copy()

    # Program memory (16 bits)
    program = [int(x, 16) for x in test_config["program_memory"]]
    test_config["program_memory"] = program

    # data memory (8 bits)
    if test_config.get("initial_data"):
        print("using json initial data")
        data = [c_int8(x).value for x in test_config["initial_data"]]
    else:
        print("using 0 initial data")
        data = [0]
    test_config["initial_data"] = data

    print("PROGRAM IS")
    for i in program:
        print(i)

    print("DATA IS")
    for i in data:
        print(i)

    # Hardware config
    if "hardware" in test_config:
        hw = test_config["hardware"]
        required_keys = default_hw_config.keys()
        if not all(k in hw for k in required_keys):
            raise ValueError(
                "If 'hardware' is specified, all hardware config keys must be present.")
    else:
        test_config["hardware"] = default_hw_config
        hw = default_hw_config

    print(f"Running test: {test_config["testname"]}")
    return test_config


async def setup_wrap(dut, test_config):

    num_memory_printout = 24

    hw = test_config["hardware"]
    mem_delay = test_config["memory_delay"]
    threads = test_config["threads"]
    program = test_config["program_memory"]
    data = test_config["initial_data"]

    # memory modules
    program_memory = Memory(
        dut=dut,
        addr_bits=hw["program_addr_bits"],
        data_bits=hw["program_data_bits"],
        channels=hw["program_channels"],
        name="program",
        delay=mem_delay
    )

    # memory modules
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
