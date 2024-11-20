.PHONY: test compile

export LIBPYTHON_LOC=$(shell cocotb-config --libpython)

# Make is typically ran with "make test_matadd"

test_%:
# create gpu.v from all sv files in src
	make compile
# compile GPU.v into simulatable sim.VVP format, set top level module to gpu
	iverilog -o build/sim.vvp -s gpu -g2012 build/gpu.v
# run cocotb testbench at test/test_$, using icarus (vvp)  
	MODULE=test.test_$* vvp -M $$(cocotb-config --prefix)/cocotb/libs -m libcocotbvpi_icarus build/sim.vvp

compile:
# Convert alu 
	make compile_alu
# build convert all source files to v and dump them into gpu.v
	sv2v -I src/* -w build/gpu.v
# add newline to end of gpu.v (?)
	echo "" >> build/gpu.v
# add alu.v contents to gpu.v (not sure why alu not included by first sv2v call)
	cat build/alu.v >> build/gpu.v
# add "timescale 1ns/1ns" line to gpu.v 
	echo '`timescale 1ns/1ns' > build/temp.v
	cat build/gpu.v >> build/temp.v
	mv build/temp.v build/gpu.v

compile_%:
# compile_alu or other module
	sv2v -w build/$*.v src/$*.sv 
# compile source/*.sv and write it to build/*.v 

# GTKWave Visualization Rule
show_%: build/gpu.vcd
	# Launch GTKWave with the specified VCD file
	gtkwave $<

# Catch-all rule to view a specific waveform
build/%.vcd: test_%
	# Run the test to generate the corresponding VCD file
	make test_$*