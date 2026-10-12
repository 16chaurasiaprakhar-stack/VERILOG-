#------------------------------------------------------------------------------
# Vivado Automation Script: run_vivado.tcl
# Usage:
#   In command line: vivado -mode batch -source run_vivado.tcl
#   In Vivado GUI  : source run_vivado.tcl
#------------------------------------------------------------------------------

# 1. Configuration
set proj_name    "async_fifo_vivado"
set proj_dir     "./vivado_proj"
set part_target  "xc7a35tcsg324-1"   ;# AMD Artix-7 (change if needed)
set top_rtl      "async_fifo_pro"
set top_tb       "async_fifo_pro_tb"

# 2. Create Vivado Project
create_project -force $proj_name $proj_dir -part $part_target

# 3. Add RTL Sources
add_files [list \
    ./rtl/cdc_sync.sv \
    ./rtl/async_fifo_mem.sv \
    ./rtl/wptr_full_ctrl.sv \
    ./rtl/rptr_empty_ctrl.sv \
    ./rtl/async_fifo_pro.sv \
]
set_property file_type SystemVerilog [get_files *.sv]

# 4. Add Simulation & Assertion Sources
add_files -fileset sim_1 [list \
    ./tb/async_fifo_sva.sv \
    ./tb/async_fifo_pro_tb.sv \
]
set_property file_type SystemVerilog [get_files ./tb/*.sv]
set_property top $top_tb [get_filesets sim_1]

# 5. Add Constraints
add_files -fileset constrs_1 ./constraints/async_fifo_pro.xdc

# 6. Update Compile Order
update_compile_order -fileset sources_1
update_compile_order -fileset sim_1

puts "======================================================"
puts "  Vivado Project Created Successfully!               "
puts "  To run simulation: launch_simulation               "
puts "  To run synthesis : synth_design -top $top_rtl      "
puts "======================================================"
