import cocotb.triggers
from cocotb.triggers import RisingEdge
from .setup import setup
from .memory import Memory
from .format import format_cycle
from .logger import logger

#import json
#def load_config(path):
#    with open(path, "r") as f:
#        return json.load(f)

async def setup_wrap(dut, program, data, threads, mem_delay):
    # Device Control

    program_memory = Memory(
        dut=dut, addr_bits=8, data_bits=16, channels=1, name="program", delay=mem_delay
    )
    data_memory = Memory(
        dut=dut, addr_bits=8, data_bits=8, channels=4, name="data", delay=mem_delay
    )

    await setup(
        dut=dut,
        program_memory=program_memory,
        program=program,
        data_memory=data_memory,
        data=data,
        threads=threads,
    )

    data_memory.display(24)  # how much data mem to dump at begin

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

    logger.info(f"Completed in {cycles} cycles")
    data_memory.display(24)  # how much data mem to dump at end

    return data_memory
