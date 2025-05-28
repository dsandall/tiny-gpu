import cocotb
from .helpers.testbench_bin import load_json_binary, setup_wrap
from .helpers.sim_perf_monitor import monitor_resources


@cocotb.test
async def test_alldmem_basic(dut):
    await test_dmem(
        dut, "/home/thebu/newhome/tiny-gpu/tiny-gpu-assembler/asm_build/test_alldmem.json")


@cocotb.test
async def test_alldmem_unrolled(dut):
    await test_dmem(
        dut, "/home/thebu/newhome/tiny-gpu/tiny-gpu-assembler/asm_build/test_alldmem_unrolled.json")


@cocotb.test
async def test_alldmem_64(dut):
    await test_dmem(
        dut, "/home/thebu/newhome/tiny-gpu/tiny-gpu-assembler/asm_build/test_alldmem_64.json")


@cocotb.test
async def test_alldmem_hash(dut):
    cocotb.start_soon(monitor_resources())  # Start monitoring
    test_conf = load_json_binary(
        "./tiny-gpu-assembler/asm_build/test_alldmem_hash.json"
    )

    # run device and dump memory
    data_memory = await setup_wrap(dut, test_conf, "screen")

    ###
    # Verify results
    ###
    def simple_mul_add_hash(addr: int, stride: int = 8) -> int:
        assert 0 <= addr <= 255
        h = addr
        h = (h * h) & 0xFF      # Square
        h = (h + stride) & 0xFF  # Add stride
        h = (h * h) & 0xFF      # Square again
        h = (h + addr) & 0xFF   # Mix in original
        return h

    errors = []
    for i, byte in enumerate(data_memory.memory):
        expected = simple_mul_add_hash(i, 8)
        if byte != expected:
            errors.append((i, expected, byte))

    for index, expected, actual in errors:
        print(f"Mismatch at index {index}: expected {expected}, got {actual}")

    assert not errors, f"Found {len(errors)} mismatches in data memory."


async def test_dmem(dut, json):
    cocotb.start_soon(monitor_resources())  # Start monitoring

    test_conf = load_json_binary(json)

    # run device and dump memory
    data_memory = await setup_wrap(dut, test_conf, "screen")

    ###
    # Verify results
    ###

    data = test_conf["initial_data"]

    for i, byte in enumerate(data_memory.memory):
        assert i == byte, f"Result mismatch: expected {i}, got {byte}"
