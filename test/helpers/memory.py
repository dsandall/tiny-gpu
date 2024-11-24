from typing import List
from .logger import logger
import cocotb
from cocotb.triggers import Timer, RisingEdge


class Memory:
    def __init__(self, dut, addr_bits, data_bits, channels, name, delay):
        self.dut = dut
        self.addr_bits = addr_bits
        self.data_bits = data_bits
        self.memory = [0] * (2**addr_bits)
        self.channels = channels
        self.name = name
        self.delay = delay

        self.mem_read_valid = getattr(dut, f"{name}_mem_read_valid")
        self.mem_read_address = getattr(dut, f"{name}_mem_read_address")
        self.mem_read_ready = getattr(dut, f"{name}_mem_read_ready")
        self.mem_read_data = getattr(dut, f"{name}_mem_read_data")

        if name != "program":
            self.mem_write_valid = getattr(dut, f"{name}_mem_write_valid")
            self.mem_write_address = getattr(dut, f"{name}_mem_write_address")
            self.mem_write_data = getattr(dut, f"{name}_mem_write_data")
            self.mem_write_ready = getattr(dut, f"{name}_mem_write_ready")

        # Add internal state for read and write delays
        self.read_delay_counters = [0] * self.channels
        self.write_delay_counters = [0] * self.channels

    async def run(self):
        while True:
            await RisingEdge(self.dut.clk)

            # Read handling with 2-cycle delay
            mem_read_valid = [
                int(str(self.mem_read_valid.value)[i:i+1], 2)
                for i in range(self.channels)
            ]
            mem_read_address = [
                int(str(self.mem_read_address.value)[i * self.addr_bits:(i + 1) * self.addr_bits], 2)
                for i in range(self.channels)
            ]
            mem_read_ready = [0] * self.channels
            mem_read_data = [0] * self.channels

            for i in range(self.channels):
                if self.delay == 0 and mem_read_valid[i]:
                # if no delay 
                    mem_read_data[i] = self.memory[mem_read_address[i]]
                    mem_read_ready[i] = 1
                elif self.delay !=0 and mem_read_valid[i]:
                # if delay
                    if self.read_delay_counters[i] == 0:
                        # Start the delay counter
                        self.read_delay_counters[i] = self.delay
                    elif self.read_delay_counters[i] > 1:
                        # Decrement the delay counter
                        self.read_delay_counters[i] -= 1
                    else:
                        # Perform the read after 2 cycles
                        mem_read_data[i] = self.memory[mem_read_address[i]]
                        mem_read_ready[i] = 1
                        self.read_delay_counters[i] = 0
                else:
                    self.read_delay_counters[i] = 0

            self.mem_read_data.value = int(''.join(format(d, f'0{self.data_bits}b') for d in mem_read_data), 2)
            self.mem_read_ready.value = int(''.join(format(r, '01b') for r in mem_read_ready), 2)

            # Write handling with 2-cycle delay
            if self.name != "program":
                mem_write_valid = [
                    int(str(self.mem_write_valid.value)[i:i+1], 2)
                    for i in range(self.channels)
                ]
                mem_write_address = [
                    int(str(self.mem_write_address.value)[i * self.addr_bits:(i + 1) * self.addr_bits], 2)
                    for i in range(self.channels)
                ]
                mem_write_data = [
                    int(str(self.mem_write_data.value)[i * self.data_bits:(i + 1) * self.data_bits], 2)
                    for i in range(self.channels)
                ]
                mem_write_ready = [0] * self.channels

                for i in range(self.channels):
                    if self.delay == 0 and mem_write_valid[i]:
                        self.memory[mem_write_address[i]] = mem_write_data[i]
                        mem_write_ready[i] = 1
                    if self.delay !=0 and mem_write_valid[i]:
                        if self.write_delay_counters[i] == 0:
                            # Start the delay counter
                            self.write_delay_counters[i] = self.delay
                        elif self.write_delay_counters[i] > 1:
                            # Decrement the delay counter
                            self.write_delay_counters[i] -= 1
                        else:
                            # Perform the write after n cycles
                            self.memory[mem_write_address[i]] = mem_write_data[i]
                            mem_write_ready[i] = 1
                            self.write_delay_counters[i] = 0
                    else:
                        self.write_delay_counters[i] = 0

                self.mem_write_ready.value = int(''.join(format(w, '01b') for w in mem_write_ready), 2)


###### Functions for testbench init and display, instantaneous
#########################################################
    def write(self, address, data):
        if address < len(self.memory):
            self.memory[address] = data

    def load(self, rows: List[int]):
        for address, data in enumerate(rows):
            self.write(address, data)

    def display(self, rows, decimal=True):
        logger.info("\n")
        logger.info(f"{self.name.upper()} MEMORY")
        
        table_size = (8 * 2) + 3
        logger.info("+" + "-" * (table_size - 3) + "+")

        header = "| Addr | Data "
        logger.info(header + " " * (table_size - len(header) - 1) + "|")

        logger.info("+" + "-" * (table_size - 3) + "+")
        for i, data in enumerate(self.memory):
            if i < rows:
                if decimal:
                    row = f"| {i:<4} | {data:<4}"
                    logger.info(row + " " * (table_size - len(row) - 1) + "|")
                else:
                    data_bin = format(data, f'0{16}b')
                    row = f"| {i:<4} | {data_bin} |"
                    logger.info(row + " " * (table_size - len(row) - 1) + "|")
        logger.info("+" + "-" * (table_size - 3) + "+")