.PHONY: test compile clean

export LIBPYTHON_LOC=$(shell cocotb-config --libpython)

# Make is typically ran with :
# - make test_matadd
# - make compile_matadd
# - make show_matadd

VERILATOR_ARGS = "--cc --exe --build --trace -Isrc -Wno-WIDTHEXPAND -Wno-ASCRANGE -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-UNSIGNED  -Wno-MULTIDRIVEN --compiler gcc -O3 -CFLAGS "-O3""
VERILOG_SOURCES = "$(shell find src -name '*.sv' -o -name '*.svh')" 
clean: 
	rm -rf build/*
	rm -rf sim_build/*

#SIM ?= icarus
SIM ?= verilator
TOPLEVEL = gpu
BUILD_DIR = build
TOP_V = $(BUILD_DIR)/gpu.v

test_%: MODULE = test.test_$*
test_%: 
ifeq ($(SIM),icarus)
	iverilog -o $(BUILD_DIR)/sim.vvp -s $(TOPLEVEL) -g2012 $(TOP_V)
	MODULE=$(MODULE) vvp -M $(shell cocotb-config --prefix)/cocotb/libs -m libcocotbvpi_icarus $(BUILD_DIR)/sim.vvp
else ifeq ($(SIM),verilator)
	MODULE=$(MODULE) \
	TOPLEVEL=$(TOPLEVEL) \
	VERILOG_SOURCES=$(VERILOG_SOURCES) \
	SIM=verilator \
	EXTRA_ARGS=$(VERILATOR_ARGS) \
	$(MAKE) -f $(shell cocotb-config --makefiles)/Makefile.sim
else
	$(error Unknown SIM '$(SIM)')
endif

$(BUILD_DIR)/gpu.v:
	mkdir build --parents
# Convert alu 
	#make compile_alu
# build convert all source files to v and dump them into gpu.v
	sv2v -I --siloed src/* -w build/gpu.v
# add newline to end of gpu.v (?)
	echo "" >> build/gpu.v
# add alu.v contents to gpu.v (not sure why alu not included by first sv2v call)
	#cat build/alu.v >> build/gpu.v
# add "timescale 1ns/1ns" line to gpu.v 
	echo '`timescale 1ns/1ns' > build/temp.v
	cat build/gpu.v >> build/temp.v
	mv build/temp.v build/gpu.v

### compile GPU.v into simulatable sim.VVP format, set top level module to gpu
##	iverilog -o build/sim.vvp -s gpu -g2012 build/gpu.v
### run cocotb testbench at test/test_$, using icarus (vvp)  
##	MODULE=test.test_$* vvp -M $$(cocotb-config --prefix)/cocotb/libs -m libcocotbvpi_icarus build/sim.vvp

## This does not currently work, as SV support is iffy at best for the open source toolchain
# test_direct_%:
# # create gpu.v from all sv files in src
# #	make compile
# # compile GPU.v into simulatable sim.VVP format, set top level module to gpu
# 	iverilog -sv -o build/sim.vvp -s gpu -g2012 src/*.sv
# # run cocotb testbench at test/test_$, using icarus (vvp)  
# 	MODULE=test.test_$* vvp -M $$(cocotb-config --prefix)/cocotb/libs -m libcocotbvpi_icarus build/sim.vvp
# compile_alu or other module

compile_%:
# compile source/*.sv and write it to build/*.v 
	sv2v -w build/$*.v src/$*.sv 

# GTKWave Visualization Rule
show_%: build/gpu.vcd
# Launch GTKWave with the specified VCD file
	gtkwave $<

# Catch-all rule to view a specific waveform
build/%.vcd: test_%
# Run the test to generate the corresponding VCD file
	make test_$*

### recent end to end build tests:
# TODO:
# these probably don't need to recompile the hardware and software,
# and restart the cocotb stuff every time... 
# but they do because I havent fixed the reset bug in the verilog yet.

#runs tiny-gpu-assembler
assemble_%:
	cd ./tiny-gpu-assembler && \
	cargo build && \
	./target/debug/tiny-gpu-assembler asm_src/test_$*.asm -o asm_build/test_$*.json

#fulltest
ft_%:
	make assemble_$*
	make test_$*

record_benchmark: 
	cd yosys && yosys -s synth.ys > synth_stat.log
	make assemble_alldmem
	make assemble_alldmem_64
	make assemble_alldmem_hash
	make assemble_alldmem_unrolled
	make assemble_load
	make assemble_load_8_threads
	make assemble_matadd
	make assemble_matmul
	make assemble_negatives
	make assemble_reverse
	#make test_all > test_all.log

