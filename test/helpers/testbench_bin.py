import cocotb.triggers
from cocotb.triggers import RisingEdge

from test.screen.screen import init_window, update_display
from .setup import setup
from .memory import Memory
from .format import format_cycle
from .logger import logger
import copy

from ctypes import c_int8
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


async def setup_wrap(dut, test_config, screen=None):

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

    if screen is not None:
        # initialize screen is user passes anything in for screen
        screen = init_window()

    print(f"threads is {threads}")

    # init the gpu module
    await setup(
        dut=dut,
        program_memory=program_memory,
        program=program,
        data_memory=data_memory,
        data=data,
        threads=threads,
    )

    # printout prior to sim
    logger.info("------------------------------------------\n")
    logger.info(f" launching test: {test_config["testname"]}\n")
    logger.info(f" All values printed come from the python testlib. Check the sensitivity list (watched signals list) in format.py for all internal GPU signals that are logged\n")
    logger.info("------------------------------------------\n")
    data_memory.display(num_memory_printout)

    # execute sim
    old_mem = copy.deepcopy(data_memory.memory)
    cycles = 0
    extra_cycles = 10

    while dut.done.value != 1 or extra_cycles > 0:
        if dut.done.value == 1:
            extra_cycles -= 1

        # while running the DUT, piggyback the clock and use for dmem and pmem
        dmem = cocotb.start(data_memory.run())
        pmem = cocotb.start(program_memory.run())

        # track changes to data memory
        if (data_memory.memory != old_mem):
            data_memory.display(num_memory_printout)
            old_mem = copy.deepcopy(data_memory.memory)

            # lets also update the screen... at the same freq as the gpu clock, lol
            if screen is not None:
                await update_display(screen, data_memory.memory)

        # same for the printer logging function
        await cocotb.triggers.ReadOnly()
        format_cycle(dut, cycles)  # print the stuff

        if (dut.done.value == 1):
            logger.info(f"GPU PROGRAM COMPLETE - Done signal asserted\n")
        # await the GPUs clock
        await RisingEdge(dut.clk)
        await dmem
        await pmem

        cycles += 1

    dut.reset.value = 1
    while dut.done.value == 1:
        await RisingEdge(dut.clk)
    dut.reset.value = 0

    print(f"finished at cycle {cycles-extra_cycles}")

#    dut.reset.value = 1
#    await RisingEdge(dut.clk)
#    await RisingEdge(dut.clk)
#    await RisingEdge(dut.clk)
#    await RisingEdge(dut.clk)
#    await RisingEdge(dut.clk)
#    await RisingEdge(dut.clk)
#    await RisingEdge(dut.clk)
#    await RisingEdge(dut.clk)
#    await RisingEdge(dut.clk)
#    dut.reset.value = 0
#    await RisingEdge(dut.clk)

    # printout after sim
    logger.info(f"Completed in {cycles} cycles")
    if (data_memory.memory != old_mem):
        data_memory.display(num_memory_printout)
        old_mem = copy.deepcopy(data_memory.memory)

    # return results for testbench comparison
    return data_memory
