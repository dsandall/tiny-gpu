# read standard cell library
read_liberty ../../OpenROAD-flow-scripts/flow/platforms/nangate45/lib/NangateOpenCellLibrary_typical.lib

# read synthesized design
read_verilog synthesized.v

# set top level
link_design ducttape2cores

# Define clock
create_clock -period 5 [get_ports clk]

# Report timing using STA
report_checks -path_delay min_max -format full_clock_expanded

# read switching to estimate dynamic power
read_vcd ../build/gpu.vcd
report_power
