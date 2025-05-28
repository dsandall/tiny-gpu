from typing import List
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from .memory import Memory
from .format import format_cycle
from .logger import logger


# async def logAndWaitRisingEdge(dut):
#    format_cycle(dut, 69)  # WARN: constant set cycle
#    await RisingEdge(dut.clk)


async def setup(
    dut,
    program_memory: Memory,
    program: List[int],
    data_memory: Memory,
    data: List[int],
    threads: int,
):
    # Setup Clock
    clock = Clock(dut.clk, 25, units="us")
    cocotb.start_soon(clock.start())

    # printout prior to sim
    logger.info("------------------------------------------\n")
    logger.info(f" reinitializing GPU clock and performing DUT reset...\n")
    logger.info(f" All values printed come from the python testlib. Check the sensitivity list (watched signals list) in format.py for all internal GPU signals that are logged\n")
    logger.info("------------------------------------------\n")

    # Reset
    dut.reset.value = 1
    dut.start.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.reset.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    # Load Program Memory
    program_memory.load(program)

    # Load Data Memory
    data_memory.load(data)

    # Device Control Register
    dut.device_control_data.value = threads
    dut.device_control_write_enable.value = 1
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.device_control_write_enable.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    # Start
    dut.start.value = 1
