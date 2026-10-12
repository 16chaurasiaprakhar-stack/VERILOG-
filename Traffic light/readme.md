# Traffic Light Controller (RTL Collection)

This folder contains the Verilog source code for my Traffic Light Controller project. 

It is part of my main **VERILOG-** collection, which gathers various digital design blocks and modules.

---

##  Looking for the Full Project?

This folder only contains a subset of the basic RTL and testbench files. The full, standalone project has its own dedicated repository, containing complete FPGA implementation files, open-source simulation setups, and synthesis mapping.

👉 **[Click here to view the full TRAFFIC_LIGHT repository](https://github.com/16chaurasiaprakhar-stack/TRAFFIC_LIGHT)**

### 🌟 What's in the main repo?

The main repository is organized into two distinct design flows:

**1.  VIVADO (FPGA Implementation)**
- Complete Xilinx Vivado project (`TRAFFIX_NEW_LIGHT.xpr`)
- Simulation sources and testbenches
- Behavioral waveform configuration (`.wcfg`)

**2.  VERILATOR (Open-Source & ASIC Flow)**
- Open-source simulation using Verilator
- Synthesis mapping to the OSU018 standard cell library (`osu018_stdcells.lib`)
- FSM state visualization (`my_design_dot`)
- Value Change Dump (`tb_traffic_fsm.vcd`) for waveform analysis in GTKWave

---

### 📂 Files in this specific folder
- `my_design_dot` — Graphviz dot file for FSM visualization
- `new.v` — Early prototype of the traffic light logic
- `new_tb.v` — Basic testbench
- `tb_traffic_fsm.vcd` — Waveform dump from a previous simulation

*For the most up-to-date and complete version of this project, please refer to the [dedicated repository](https://github.com/16chaurasiaprakhar-stack/TRAFFIC_LIGHT).*
