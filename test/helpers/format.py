from typing import List, Optional
from .logger import logger


def format_register(register: int) -> str:
    if register < 13:
        return f"R{register}"
    if register == 13:
        return f"%blockIdx"
    if register == 14:
        return f"%blockDim"
    if register == 15:
        return f"%threadIdx"


def format_instruction(instruction: str) -> str:
    opcode = instruction[0:4]
    rd = format_register(int(instruction[4:8], 2))
    rs = format_register(int(instruction[8:12], 2))
    rt = format_register(int(instruction[12:16], 2))
    n = "N" if instruction[4] == 1 else ""
    z = "Z" if instruction[5] == 1 else ""
    p = "P" if instruction[6] == 1 else ""
    imm = f"#{int(instruction[8:16], 2)}"

    if opcode == "0000":
        return "NOP"
    elif opcode == "0001":
        return f"BRnzp {n}{z}{p}, {imm}"
    elif opcode == "0010":
        return f"CMP {rs}, {rt}"
    elif opcode == "0011":
        return f"ADD {rd}, {rs}, {rt}"
    elif opcode == "0100":
        return f"SUB {rd}, {rs}, {rt}"
    elif opcode == "0101":
        return f"MUL {rd}, {rs}, {rt}"
    elif opcode == "0110":
        return f"DIV {rd}, {rs}, {rt}"
    elif opcode == "0111":
        return f"LDR {rd}, {rs}"
    elif opcode == "1000":
        return f"STR {rs}, {rt}"
    elif opcode == "1001":
        return f"CONST {rd}, {imm}"
    elif opcode == "1111":
        return "RET"
    return "UNKNOWN"


def format_core_state(core_state: str) -> str:
    core_state_map = {
        "000": "IDLE",
        "001": "FETCH",
        "010": "DECODE",
        "011": "REQUEST",
        "100": "WAIT",
        "101": "EXECUTE",
        "110": "UPDATE",
        "111": "DONE",
    }
    return core_state_map[core_state]


def format_fetcher_state(fetcher_state: str) -> str:
    fetcher_state_map = {"000": "IDLE", "001": "FETCHING", "010": "FETCHED"}
    return fetcher_state_map[fetcher_state]


def format_lsu_state(lsu_state: str) -> str:
    lsu_state_map = {"00": "IDLE", "01": "REQUESTING",
                     "10": "WAITING", "11": "DONE"}
    return lsu_state_map[lsu_state]


def format_memory_controller_state(controller_state: str) -> str:
    controller_state_map = {
        "000": "IDLE",
        "010": "READ_WAITING",
        "011": "WRITE_WAITING",
        "100": "READ_RELAYING",
        "101": "WRITE_RELAYING",
    }
    return controller_state_map[controller_state]


def format_registers(registers: List[str]) -> str:
    formatted_registers = []
    for i, reg_value in enumerate(registers):
        decimal_value = int(reg_value, 2)  # Convert binary string to decimal
        reg_idx = 15 - i  # Register data is provided in reverse order
        formatted_registers.append(
            f"{format_register(reg_idx)} = {decimal_value}")
    formatted_registers.reverse()
    return ", ".join(formatted_registers)


previous_values = {}


def format_cycle(dut, cycle_id: int, thread_id: Optional[int] = None):
    logger.debug(f"\n========== Cycle {cycle_id} ==========")

    for hw_core in dut.cores:
        if int(str(dut.thread_count.value), 2) <= hw_core.i.value * dut.THREADS_PER_BLOCK.value:
            continue

        for lc_idx, logical_core in enumerate([hw_core.core_instance.inner_core_instance_1, hw_core.core_instance.inner_core_instance_2]):
            # Check and log logical core-wide values before thread-specific ones
            logical_core_values = {
                "start": str(logical_core.start.value),
                "done": str(logical_core.done.value),
                "reset": str(logical_core.reset.value),
                "Instruction": str(logical_core.instruction.value),
                "Core State": format_core_state(str(logical_core.core_state.value)),
                "Fetcher State": format_fetcher_state(str(logical_core.fetcher_state.value)),
                "Decoded Immediate": int(str(logical_core.decoded_immediate.value), 2),
            }

            printed_header = False
            for key, val in logical_core_values.items():
                tag = (logical_core, key)
                if previous_values.get(tag) != val:
                    if not printed_header:
                        logger.debug(
                            f"\n+-------- Logical Core {lc_idx}--------+")
                        printed_header = True
                    logger.debug(f"{key}: {val}")
                    previous_values[tag] = val

            for thread in logical_core.threads:
                if int(thread.i.value) >= int(str(logical_core.thread_count.value), 2):
                    continue

                block_idx = logical_core.block_id.value
                block_dim = int(logical_core.THREADS_PER_BLOCK)
                thread_idx = thread.register_instance.THREAD_ID.value
                idx = block_idx * block_dim + thread_idx

                values_to_check = {
                    "PC": int(str(logical_core.current_pc.value), 2),
                    "RS": int(str(thread.register_instance.rs.value), 2),
                    "RT": int(str(thread.register_instance.rt.value), 2),
                    "ALU Out": int(str(thread.alu_instance.alu_out.value), 2),
                    "LSU Out": int(str(thread.lsu_instance.lsu_out.value), 2),
                    "LSU State": format_lsu_state(str(thread.lsu_instance.lsu_state.value)),
                }

                for key, val in values_to_check.items():
                    tag = (idx, key)
                    if previous_values.get(tag) != val:
                        if not printed_header:
                            logger.debug(f"\n+-------- Thread {idx} --------+")
                            printed_header = True
                        logger.debug(f"{key}: {val}")
                        previous_values[tag] = val

                # Now check individual registers
                for i, reg in enumerate(thread.register_instance.registers):
                    tag = (idx, f"reg_{i}")
                    val = str(reg.value)
                    if previous_values.get(tag) != val:
                        if not printed_header:
                            logger.debug(f"\n+-------- Thread {idx} --------+")
                            printed_header = True
                        logger.debug(f"R{i}: {val}")
                        previous_values[tag] = val
