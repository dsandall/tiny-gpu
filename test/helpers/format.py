from typing import List, Optional
from .logger import logger


def safe_int(signal, base=8):
    s = str(signal)
    if 'x' in s or 'z' in s:
        # print(f"[WARN] Signal not ready: {signal}")
        return None
    return int(s, base)


def safe_hex(signal):
    s = str(signal)
    if 'x' in s or 'z' in s:
        # print(f"[WARN] Signal not ready: {signal}")
        return "X"
    return hex(int(s, 2))


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
    if 'x' in instruction or 'z' in instruction:
        # print(f"[WARN] Signal not ready: {signal}")
        return "X"

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

    # if any(c not in "01" for c in core_state):
    #    return f"UNKNOWN({core_state})"

    return core_state_map.get(core_state, f"INVALID({core_state})")


def format_fetcher_state(logical_core) -> str:
    fetcher_state = str(logical_core.fetcher_state.value)

    fetcher_state_map = {
        "000": "IDLE",
        "001": f"FETCHING",
        "010": f"FETCHED"
    }

    return fetcher_state_map.get(fetcher_state, f"INVALID({fetcher_state})")


def format_lsu_state(lsu_state: str) -> str:
    lsu_state_map = {"00": "IDLE", "01": "REQUESTING",
                     "10": "WAITING", "11": "DONE"}
    return lsu_state_map.get(lsu_state, f"INVALID({lsu_state})")


def format_memory_controller_state(state) -> str:

    a = safe_int(state, 2)
    if a is None:
        return "X"

    controller_state_map = {
        0: "IDLE",
        1: "CACHE_HIT",
        2: "CACHE_MISS",
        3: "CACHE_MISS_WAIT",
        4: "READ_RELAYING",
        5: "WRITE_WAITING",
        6: "WRITE_RELAYING",
        7: "MAIN_MEM_RELAYING",
    }
    return controller_state_map.get(a, f"INVALID({a})")


def format_registers(registers: List[str]) -> str:
    formatted_registers = []
    for i, reg_value in enumerate(registers):
        decimal_value = int(reg_value, 2)  # Convert binary string to decimal
        reg_idx = 15 - i  # Register data is provided in reverse order
        formatted_registers.append(
            f"{format_register(reg_idx)} = {decimal_value}")
    formatted_registers.reverse()
    return ", ".join(formatted_registers)


def format_cache(memory_controller):
    # Helper to detect invalid value
    def is_invalid(val):
        return (
            val is None or
            isinstance(val, str) and ('x' in val.lower() or 'z' in val.lower())
        )

    # Extract config values
    CACHE_LINE_SIZE_BITS = safe_int(
        memory_controller.CACHE_LINE_SIZE_BITS.value, 10)
    CACHE_TAG_BITS = safe_int(memory_controller.CACHE_TAG_BITS.value, 10)
    NUM_CHUNKS = safe_int(memory_controller.NUM_CHUNKS.value, 10)

    # Check for any bad configuration values
    if any(is_invalid(v) for v in (CACHE_LINE_SIZE_BITS, CACHE_TAG_BITS, NUM_CHUNKS)):
        return "X"

    def parse_cache_line(entry):
        dirty_bit = entry & 0b1
        valid_bits = (entry >> 1) & ((1 << NUM_CHUNKS) - 1)
        tag_bits = (entry >> (1 + NUM_CHUNKS)) & ((1 << CACHE_TAG_BITS) - 1)
        data_bits = (entry >> (1 + NUM_CHUNKS + CACHE_TAG_BITS)
                     ) & ((1 << CACHE_LINE_SIZE_BITS) - 1)
        return data_bits, tag_bits, valid_bits, dirty_bit

    lines = []
    for i, raw_entry in enumerate(memory_controller.cache):
        try:
            entry_str = str(raw_entry)
            if is_invalid(entry_str):
                line = f"[{i:02}] X"
            else:
                entry = int(raw_entry)
                data, tag, valid, dirty = parse_cache_line(entry)
                line = (
                    f"[{i:02}] data=0x{data:0{CACHE_LINE_SIZE_BITS // 4}x} "
                    f"tag=0x{tag:0{CACHE_TAG_BITS // 4}x} "
                    f"valid=0b{valid:0{NUM_CHUNKS}b} dirty={dirty}"
                )
        except Exception:
            line = f"[{i:02}] ERROR"
        lines.append(line)

    return "\n".join(lines)


# no previous state at initialization, log all state
previous_values = {}


def format_cycle(dut, cycle_id: int, thread_id: Optional[int] = None):
    logger.debug(f"\n========== Cycle {cycle_id} ==========")

    gpu_vals = {
        "dut done": str(dut.done.value),
        "dut start": str(dut.start.value),
        "logical core start sigs": str(dut.core_start.value),
        "dispatcher done": str(dut.dispatch_instance.done.value),
        "dispatcher done": str(dut.dispatch_instance.done.value),
        "total_blocks": safe_int(dut.dispatch_instance.total_blocks.value),
        "blocks_dispatched": safe_int(dut.dispatch_instance.blocks_dispatched.value),
        "blocks_done": safe_int(dut.dispatch_instance.blocks_done.value),
        "start_execution": str(dut.dispatch_instance.start_execution.value),
        "Dmem controllerer_state(0)": format_memory_controller_state(dut.data_memory_controller.controller_state[0].value),
        "Dmem controllerer_state(1)": format_memory_controller_state(dut.data_memory_controller.controller_state[1].value),
        "Dmem controllerer_state(2)": format_memory_controller_state(dut.data_memory_controller.controller_state[2].value),
        "Dmem controllerer_state(3)": format_memory_controller_state(dut.data_memory_controller.controller_state[3].value),
        "Dmem consumer_state(0)": format_memory_controller_state(dut.data_memory_controller.consumer_state[0].value),
        "Dmem consumer_state(1)": format_memory_controller_state(dut.data_memory_controller.consumer_state[1].value),
        "Dmem consumer_state(2)": format_memory_controller_state(dut.data_memory_controller.consumer_state[2].value),
        "Dmem consumer_state(3)": format_memory_controller_state(dut.data_memory_controller.consumer_state[3].value),
        "Dmem consumer_state(4)": format_memory_controller_state(dut.data_memory_controller.consumer_state[4].value),
        "Dmem consumer_state(5)": format_memory_controller_state(dut.data_memory_controller.consumer_state[5].value),
        "Dmem consumer_state(6)": format_memory_controller_state(dut.data_memory_controller.consumer_state[6].value),
        "Dmem consumer_state(7)": format_memory_controller_state(dut.data_memory_controller.consumer_state[7].value),
        # "Dmem mutex": str(dut.data_memory_controller.consumer_mutex.value),
        # "Dmem active main_mem requests": str(dut.data_memory_controller.main_mem_request.value),
        "Dmem cache": format_cache(dut.data_memory_controller),
        "Dmem list": str(dut.data_memory_controller),
        # "pmem consumer_state array": str(dut.program_memory_controller.consumer_state.value),
        "pmem controllerer_state": format_memory_controller_state(dut.program_memory_controller.controller_state[0].value),
        # "pmem consumer_state(0)": format_memory_controller_state(dut.program_memory_controller.consumer_state[0].value),
        # "pmem consumer_state(1)": format_memory_controller_state(dut.program_memory_controller.consumer_state[1].value),
        "pmem cache": format_cache(dut.program_memory_controller),
        # "pmem mutex": str(dut.program_memory_controller.consumer_mutex.value),
        # "pmem cons0 line valid": str(dut.program_memory_controller.consumer_if[0].req_line_valid.value),
        # "pmem cons0 tag valid": str(dut.program_memory_controller.consumer_if[0].tag_valid.value),
        # "pmem cons1 line valid": str(dut.program_memory_controller.consumer_if[1].req_line_valid.value),
        # "pmem cons1 tag valid": str(dut.program_memory_controller.consumer_if[1].tag_valid.value),
        "pmem list": str(dut.program_memory_controller)
    }

    printed_gpu_header = False
    for key, val in gpu_vals.items():
        tag = (dut, key)
        if previous_values.get(tag) != val:
            if not printed_gpu_header:
                logger.debug(
                    f"\n**** GPU TOP****")
                printed_gpu_header = True
            logger.debug(f"{key}: {val}")
            previous_values[tag] = val

    #
    # for each HW core, log:
    #
    for hw_core in dut.cores:
        zeebbbp = safe_int(dut.thread_count.value, 2)
        if zeebbbp is not None and zeebbbp <= hw_core.i.value * dut.THREADS_PER_BLOCK.value:
            continue

        #
        # for each logical core, log:
        #
        for lc_idx, logical_core in enumerate([hw_core.core_instance.inner_core_instance_1, hw_core.core_instance.inner_core_instance_2]):
            # Check and log logical core-wide values before thread-specific ones
            logical_core_values = {
                "start": str(logical_core.start.value),
                "logical core done? ": str(logical_core.done.value),
                "reset": str(logical_core.reset.value),
                "Instruction (hex)": safe_hex(logical_core.instruction.value),
                "Instruction": format_instruction(str(logical_core.instruction.value)),
                "PC": safe_hex(logical_core.current_pc.value),
                "Core State": format_core_state(str(logical_core.core_state.value)),
                "Fetcher State": format_fetcher_state(logical_core),
                "Decoded Immediate": safe_int(logical_core.decoded_immediate.value, 2),
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

            #
            # for each thread in a LC, log:
            #
            for thread in logical_core.threads:
                tv = safe_int(thread.i.value, 10)
                tc = safe_int(logical_core.thread_count.value, 2)

                if tv is None:
                    continue
                elif tc is None:
                    continue
                elif tv >= tc:
                    continue

                block_idx = logical_core.block_id.value
                block_dim = int(logical_core.THREADS_PER_BLOCK)
                thread_idx = thread.register_instance.THREAD_ID.value
                idx = block_idx * block_dim + thread_idx

                values_to_check = {
                    # "PC": int(str(logical_core.current_pc.value), 2),
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
                            logger.debug(
                                f"\n+-------- LC {lc_idx}, Thread {idx} --------+")
                            printed_header = True
                        logger.debug(f"{key}: {val}")
                        previous_values[tag] = val

                #
                # for all registers in a thread, log:
                #
                for i, reg in enumerate(thread.register_instance.registers):
                    tag = (idx, f"reg_{i}")
                    val = str(reg.value)
                    if previous_values.get(tag) != val:
                        if not printed_header:
                            logger.debug(
                                f"\n+-------- LC {lc_idx}, Thread {idx} --------+")
                            printed_header = True
                        logger.debug(f"R{i}: {val}")
                        previous_values[tag] = val
