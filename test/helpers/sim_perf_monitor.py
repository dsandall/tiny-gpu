import cocotb
from cocotb.triggers import Timer
import psutil
import os

# @cocotb.start_soon


async def monitor_resources():
    process = psutil.Process(os.getpid())
    while True:
        mem = process.memory_info().rss / (1024 * 1024)  # RSS in MB
        cpu = process.cpu_percent(interval=None)
        print(f"[RESOURCE MONITOR] Memory: {mem:.2f} MB | CPU: {cpu:.2f}%")
        await Timer(1, units='ms')  # Adjust as needed (e.g., 1ms or 10ms)
