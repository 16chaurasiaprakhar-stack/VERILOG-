# Asynchronous FIFO in SystemVerilog

A clean, well-documented **asynchronous FIFO** design written in SystemVerilog.  
This folder is part of my main **Verilog** repository where I upload all my RTL projects.

---

##  What is an Asynchronous FIFO?

An **asynchronous FIFO** (First-In-First-Out) is a memory buffer that allows data to be written using one clock (`wclk`) and read using a completely different, unrelated clock (`rclk`).

This is needed whenever two parts of a chip/system run on **different clocks** and need to pass data safely between them — for example:

- A fast processor writing to a slow peripheral
- Two modules running on different PLL outputs
- Crossing between two power/clock domains in an SoC

The hard part is that the two clocks are **not related in any way**, so special techniques are required to avoid **metastability** (when a flip-flop captures a signal while it's changing).

---

##  How This Design Works 

The classic and safest way to build an async FIFO is:

1. **Use Gray-coded pointers**  
   Instead of binary counters, the read and write pointers use **Gray code**, where only **one bit changes** at a time. This makes it safe to cross them between clock domains.

2. **Synchronize the pointers**  
   The write pointer is passed into the read domain through a **2-stage synchronizer**, and vice versa. This filters out metastability.

3. **Compare the synchronized pointers**  
   - If `rptr == wptr` → FIFO is **empty**
   - If `wptr` catches up to `rptr` with inverted MSBs → FIFO is **full**

4. **Use a dual-port RAM**  
   The actual data is stored in a dual-port memory — written on one side, read on the other, no clock crossing needed for the data itself.

This is the **"Cummings Style #1"** FIFO — the industry-standard approach that is friendly to static timing analysis (STA) and design-for-test (DFT).

---

##  Reference Paper vs. This Implementation

This project is based on the famous **SNUG-2002 paper** by *Clifford E. Cummings & Peter Alfke*:

> *"Simulation and Synthesis Techniques for Asynchronous FIFO Design with Asynchronous Pointer Comparisons"*

That paper presents **FIFO Style #2**, which uses **asynchronous pointer comparison** and **RS latches** to assert full/empty flags. It was voted *Best Paper* at SNUG, and it's an elegant piece of engineering — but the same author later added a **Post-SNUG Editorial Comment** saying:

> *"This paper describes a FIFO design style that is generally incompatible with static timing analysis (STA) and design-for-test (DFT)."*

So in this project, I deliberately implemented **Style #1** (the *synchronize-then-compare* approach) instead of Style #2, because Style #1 is what's actually used in production silicon.

###  Side-by-Side Comparison

| Aspect |  Paper (Style #2) |  This Project (Style #1) |
|---|---|---|
| **Pointer comparison** | Asynchronous (combinational across domains) | Synchronous (in each own domain) |
| **Full / Empty generation** | Async set/reset via RS latches | Registered flip-flops, synchronous |
| **Combinational feedback** | Yes (direction latch creates a loop) | None |
| **Static Timing Analysis (STA)** | Difficult — needs multi-clock exceptions | Clean — standard per-domain analysis |
| **DFT / Scan Insertion** | Problematic — latches complicate scan | Fully scan-friendly |
| **Glitch / runt-pulse risk** | Must be analyzed case-by-case | Eliminated by design |
| **Metastability handling** | Relies on RS latch behavior + synchronizer | Two-flop `ASYNC_REG` synchronizers |
| **Timing critical path** | Contains comparator + latch + preset chain | Simple register-to-register paths |
| **Reset behavior** | Async preset pulses cross domains | Reset stays inside each domain |
| **Portability across tools** | Requires vendor-specific handling | Works the same on Vivado/Quartus/DC/Genus |
| **Production readiness** | Academic / legacy | ✅ Industry gold standard |

###  Why Style #1 is preferred 

1. **STA-friendly**  
   Every path has a clear launch clock and capture clock. No path crosses domains combinationally, so static timing analysis just works.

2. **DFT-friendly**  
   The whole design is made of flip-flops and RAM. Scan chains can be inserted without touching any CDC signal.

3. **Glitch-free flags**  
   `wfull` and `rempty` come straight out of flip-flops, so downstream logic never sees a glitch.

4. **Easy to constrain**  
   Just declare the two clocks as asynchronous and add `set_false_path` on the synchronizer chains. Done.

5. **Portable**  
   The same RTL synthesizes cleanly on Xilinx, Intel, Synopsys, and Cadence tools — no vendor-specific workarounds.

6. **Silicon-proven**  
   This style is what virtually every production async FIFO uses (CPU interconnects, PCIe, DDR controllers, NoC bridges, etc.).

###  What Style #2 Gets Right also 

To be fair to the paper, Style #2 does have two real advantages:

- **Lower latency to assert full/empty** (because comparison is asynchronous)
- **Fewer synchronizer flip-flops** (only one chain instead of two)

But these gains come at the cost of STA/DFT headaches and metastability corner cases. For a **hobby/learning project** — and honestly, for most real chips — the trade-off isn't worth it.

So this repo includes the paper for reference, but the actual RTL is a **Style #1 production implementation**.

---

##  What's Inside This Folder

```
asynchronous-fifo/
├── rtl/                          # All the design source files
│   ├── cdc_sync.sv               # 2-stage metastability synchronizer
│   ├── async_fifo_mem.sv         # Dual-port RAM buffer
│   ├── wptr_full_ctrl.sv         # Write pointer + full flag logic
│   ├── rptr_empty_ctrl.sv        # Read pointer + empty flag logic
│   └── async_fifo_pro.sv         # Top-level FIFO wrapper
│
├── tb/                           # Testbench + assertions
│   ├── async_fifo_pro_tb.sv      # Main testbench
│   └── async_fifo_sva.sv         # SystemVerilog assertions
│
├── constraints/                  # Timing constraints for synthesis/STA
│   └── async_fifo_pro.sdc
│
├── doc/                          # Reference material
│   └── SNUG-2002_Cummings_Alfke_FIFO.pdf
│
├── README.md                     # Detailed documentation (this file's sibling)
└── run_pro_sim.bat               # One-click simulation script
```

---

## 🔧 Key Features

| Feature | Description |
|---|---|
|  Parameterized | Configurable data width, depth, and sync stages |
|  Metastability-safe | 2-flop synchronizers with `ASYNC_REG` attributes |
|  Glitch-free flags | `wfull` / `rempty` are registered outputs |
|  Watermarks | `almost_full` / `almost_empty` for flow control |
|  Occupancy counters | Pessimistic but safe item-count outputs |
|  Independent resets | `wrst_n` and `rrst_n` per clock domain |
|  FPGA + ASIC friendly | Works on Vivado, Quartus, DC, Genus |

---

##  Main Parameters

| Parameter | Default | Meaning |
|---|---|---|
| `DATA_WIDTH` | 32 | Width of each data word |
| `ADDR_WIDTH` | 4 | FIFO depth = `2^ADDR_WIDTH` = 16 words |
| `SYNC_STAGES` | 2 | Number of synchronizer flip-flops |
| `ALMOST_FULL_THRESH` | 14 | When to raise `almost_full` |
| `ALMOST_EMPTY_THRESH` | 2 | When to raise `almost_empty` |

---

##  How to Use It

Instantiate the top module in your design:

```systemverilog
async_fifo_pro #(
    .DATA_WIDTH (8),
    .ADDR_WIDTH (4),
    .SYNC_STAGES(2)
) u_fifo (
    // Write side
    .wclk       (wclk),
    .wrst_n     (wrst_n),
    .winc       (winc),
    .wdata      (wdata),
    .wfull      (wfull),
    .almost_full(almost_full),
    .w_occupancy(w_occupancy),

    // Read side
    .rclk        (rclk),
    .rrst_n      (rrst_n),
    .rinc        (rinc),
    .rdata       (rdata),
    .rempty      (rempty),
    .almost_empty(almost_empty),
    .r_occupancy (r_occupancy)
);
```

**Basic usage rules:**
- Only assert `winc` when `wfull == 0`
- Only assert `rinc` when `rempty == 0`
- `wfull` and `rempty` are already registered — safe to feed combinational logic
- `rdata` is available one cycle after `raddr` changes

---

##  How to Simulate

### Using ModelSim / Questa

```bash
vlog -sv rtl/*.sv tb/*.sv
vsim -c -do "run -all; quit" async_fifo_pro_tb
```

### Using Icarus Verilog (free)

```bash
iverilog -g2012 -o fifo_sim rtl/*.sv tb/async_fifo_pro_tb.sv
vvp fifo_sim
```

### View the waveform

```bash
gtkwave async_fifo_pro.vcd
```

---

##  What the Testbench Checks

The included testbench exercises the FIFO in **7 phases**:

1. **Reset** — both flags should be at empty
2. **Single write → single read** — basic data integrity
3. **Random writes and reads** — with different clock frequencies
4. **Fill until full** — verify `wfull` and `almost_full` assert correctly
5. **Drain until empty** — verify `rempty` and `almost_empty` assert correctly
6. **Simultaneous read/write at clock edges** — corner case testing
7. **Occupancy tracking** — verify counters never go out of range

---

##  Where I Learned This

This design follows the classic papers by **Clifford E. Cummings**:

- *"Simulation and Synthesis Techniques for Asynchronous FIFO Design"* (SNUG 2002) — **Style #1**, the basis of this project
- *"Simulation and Synthesis Techniques for Asynchronous FIFO Design with Asynchronous Pointer Comparisons"* (SNUG 2002) — **Style #2**, included in `doc/` for reference

Both papers are widely regarded as the **definitive reference** for async FIFO design. If you're learning this topic, start there — then come back and see how the RTL here maps to Style #1.

---

##  License

MIT License — free to use, modify, and learn from.

---

###  Part of the [Verilog Projects](../) collection

*Each folder in this repo is a self-contained RTL project. Browse the parent directory to see more.*
