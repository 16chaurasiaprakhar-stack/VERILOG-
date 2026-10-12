@echo off
echo ===================================================================
echo Compiling Production Async FIFO Verification Suite (Icarus Verilog)
echo ===================================================================

iverilog -g2012 -o pro_sim.vvp pro\rtl\cdc_sync.sv pro\rtl\async_fifo_mem.sv pro\rtl\wptr_full_ctrl.sv pro\rtl\rptr_empty_ctrl.sv pro\rtl\async_fifo_pro.sv pro\tb\async_fifo_sva.sv pro\tb\async_fifo_pro_tb.sv

if %ERRORLEVEL% NEQ 0 (
    echo [ERROR] Compilation failed!
    exit /b %ERRORLEVEL%
)

echo.
echo ===================================================================
echo Running Simulation with VVP...
echo ===================================================================
vvp pro_sim.vvp

echo.
echo Simulation finished. Waveforms saved to async_fifo_pro.vcd.
echo To inspect in GTKWave: gtkwave async_fifo_pro.vcd
