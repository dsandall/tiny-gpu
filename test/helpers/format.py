from typing import List, Optional
from .logger import logger


import hashlib


def snapshot_cache(memory_controller):
    try:
        raw_lines = format_cache(memory_controller)
        if raw_lines == "X":
            return None
        return hashlib.md5(raw_lines.encode()).hexdigest()
    except Exception:
        return None


def safe_int(signal: str, base=8):
    if 'x' in signal or 'z' in signal:
        # print(f"[WARN] Signal not ready: {signal}")
        return None
    return int(signal, base)


def format_register(register: int) -> str:
    if register < 13:
        return f"R{register}"
    if register == 13:
        return f"%blockIdx"
    if register == 14:
        return f"%blockDim"
    if register == 15:
        return f"%threadIdx"
    return "impossible"


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
        "001": "FETCHING",
        "010": "FETCHED"
    }

    return fetcher_state_map.get(fetcher_state, f"INVALID({fetcher_state})")


def format_lsu_state(lsu_state: str) -> str:
    lsu_state_map = {"00": "IDLE", "01": "REQUESTING",
                     "10": "WAITING", "11": "DONE"}
    return lsu_state_map.get(lsu_state, f"INVALID({lsu_state})")


def format_memory_controller_state(state) -> str:

    a = safe_int(str(state), 2)
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
        str(memory_controller.CACHE_LINE_SIZE_BITS.value), 10)
    CACHE_TAG_BITS = safe_int(str(memory_controller.CACHE_TAG_BITS.value), 10)
    NUM_CHUNKS = safe_int(str(memory_controller.NUM_CHUNKS.value), 10)

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


def safe_getattr(obj, attr_chain, default="N/A"):
    try:
        for attr in attr_chain.split('.'):
            if '[' in attr and ']' in attr:
                base, idx = attr[:-1].split('[')
                obj = getattr(obj, base)[int(idx)]
            else:
                obj = getattr(obj, attr)
        return obj.value if hasattr(obj, 'value') else obj
    except Exception:
        return default


# no previous state at initialization, log all state
previous_values = {}


def log_if_changed(tag, val, header_fn=None):
    if previous_values.get(tag) != val:
        if header_fn:
            header_fn()
        logger.debug(f"{tag[1] if isinstance(tag, tuple) else tag}: {val}")
        previous_values[tag] = val


def walk_dut_limited(handle, prefix="", depth=0, max_depth=4, header_state={"printed": False}):
    if depth > max_depth:
        return

    for name in dir(handle):
        if name.startswith("_"):
            continue
        try:
            sub = getattr(handle, name)
            full_name = f"{prefix}.{name}" if prefix else name

            if hasattr(sub, "value"):
                # Capture value (str ensures consistent comparison)
                val = str(sub.value)
                log_if_changed(
                    tag=(handle, full_name),
                    val=val,
                    header_fn=(lambda: logger.debug(
                        f"\n{'  ' * depth}Changed in {prefix or 'dut'}:"))
                    if not header_state["printed"] else None
                )
                header_state["printed"] = True
            else:
                # Recurse into submodule
                walk_dut_limited(sub, full_name, depth + 1,
                                 max_depth, header_state)
        except Exception as e:
            continue  # optionally log errors here

# Usage in a cycle:


def format_cycle(dut, cycle_id: int):
    logger.debug(f"\n========== Cycle {cycle_id} ==========")
    walk_dut_limited(dut)

    gpu_vals = {
        "dut done": str(safe_getattr(dut, "done")),
        "dut start": str(safe_getattr(dut, "start")),
        "logical core start sigs": str(safe_getattr(dut, "core_start")),

        "dispatcher done": str(safe_getattr(dut, "dispatch_instance.done")),
        "total_blocks": safe_int(str(safe_getattr(dut, "dispatch_instance.total_blocks"))),
        "blocks_dispatched": safe_int(str(safe_getattr(dut, "dispatch_instance.blocks_dispatched"))),
        "blocks_done": safe_int(str(safe_getattr(dut, "dispatch_instance.blocks_done"))),
        "start_execution": str(safe_getattr(dut, "dispatch_instance.start_execution")),

        # Dmem controller and consumers
        **{
            f"Dmem controller_state({i})": format_memory_controller_state(
                safe_getattr(
                    dut, f"data_memory_controller.controller_state[{i}]")
            ) for i in range(4)
        },
        **{
            f"Dmem consumer_state({i})": format_memory_controller_state(
                safe_getattr(
                    dut, f"data_memory_controller.consumer_state[{i}]")
            ) for i in range(8)
        },
        "Dmem mutex": str(safe_getattr(dut, "data_memory_controller.consumer_mutex")),
        "Dmem active main_mem requests": str(safe_getattr(dut, "data_memory_controller.main_mem_request")),
        "Dmem cache": format_cache(safe_getattr(dut, "data_memory_controller")),
        "Dmem list": str(safe_getattr(dut, "data_memory_controller")),

        # Pmem controller
        "pmem controller_state": format_memory_controller_state(
            safe_getattr(dut, "program_memory_controller.controller_state[0]")
        ),
        **{
            f"pmem consumer_state({i})": format_memory_controller_state(
                safe_getattr(
                    dut, f"program_memory_controller.consumer_state[{i}]")
            ) for i in range(2)
        },
        "pmem cache": format_cache(safe_getattr(dut, "program_memory_controller")),
        "pmem mutex": str(safe_getattr(dut, "program_memory_controller.consumer_mutex")),
        "pmem cons0 line valid": str(safe_getattr(dut, "program_memory_controller.consumer_if[0].req_line_valid")),
        "pmem cons0 tag valid": str(safe_getattr(dut, "program_memory_controller.consumer_if[0].tag_valid")),
        "pmem cons1 line valid": str(safe_getattr(dut, "program_memory_controller.consumer_if[1].req_line_valid")),
        "pmem cons1 tag valid": str(safe_getattr(dut, "program_memory_controller.consumer_if[1].tag_valid")),
        "pmem list": str(safe_getattr(dut, "program_memory_controller")),
    }

    printed_gpu_header = False

    def print_gpu_header():
        nonlocal printed_gpu_header
        if not printed_gpu_header:
            logger.debug("\n**** GPU TOP ****")
            printed_gpu_header = True

    for key, val in gpu_vals.items():
        log_if_changed((dut, key), val, print_gpu_header)

    return

    # Handle each hardware core
    if not hasattr(dut, "cores"):
        logger.debug("DUT has no cores attribute.")
        return

    total_threads = safe_int(dut.thread_count.value, 2)
    threads_per_block = safe_int(dut.THREADS_PER_BLOCK.value, 10)

    for hw_core in dut.cores:
        if total_threads is not None and threads_per_block is not None:
            if total_threads <= hw_core.i.value * threads_per_block:
                continue

        for lc_idx, logical_core in enumerate([hw_core.core_instance.inner_core_instance_1,
                                               hw_core.core_instance.inner_core_instance_2]):
            printed_lc_header = False

            def print_lc_header():
                nonlocal printed_lc_header
                if not printed_lc_header:
                    logger.debug(
                        f"\n+-------- Logical Core {lc_idx} --------+")
                    printed_lc_header = True

            logical_core_values = {
                "start": str(logical_core.start.value),
                "logical core done?": str(logical_core.done.value),
                "reset": str(logical_core.reset.value),
                "Instruction (hex)": safe_hex(logical_core.instruction.value),
                "Instruction": format_instruction(str(logical_core.instruction.value)),
                "PC": safe_hex(logical_core.current_pc.value),
                "Core State": format_core_state(str(logical_core.core_state.value)),
                "Fetcher State": format_fetcher_state(logical_core),
                "Decoded Immediate": safe_int(logical_core.decoded_immediate.value, 2),
            }

            for key, val in logical_core_values.items():
                log_if_changed((logical_core, key), val, print_lc_header)

            # Handle each thread
            for thread in logical_core.threads:
                tv = safe_int(thread.i.value, 10)
                tc = safe_int(logical_core.thread_count.value, 2)
                if None in (tv, tc):
                    continue
                elif tv >= tc:
                    continue

                block_idx = logical_core.block_id.value
                thread_idx = thread.register_instance.THREAD_ID.value
                idx = block_idx * threads_per_block + thread_idx

                printed_thread_header = False

                def print_thread_header():
                    nonlocal printed_thread_header
                    if not printed_thread_header:
                        logger.debug(
                            f"\n+-------- LC {lc_idx}, Thread {idx} --------+")
                        printed_thread_header = True

                values_to_check = {
                    "RS": int(str(thread.register_instance.rs.value), 2),
                    "RT": int(str(thread.register_instance.rt.value), 2),
                    "ALU Out": int(str(thread.alu_instance.alu_out.value), 2),
                    "LSU Out": int(str(thread.lsu_instance.lsu_out.value), 2),
                    "LSU State": format_lsu_state(str(thread.lsu_instance.lsu_state.value)),
                }

                for key, val in values_to_check.items():
                    log_if_changed((idx, key), val, print_thread_header)

                for i, reg in enumerate(thread.register_instance.registers):
                    tag = (idx, f"reg_{i}")
                    val = str(reg.value)
                    log_if_changed(tag, val, print_thread_header)
