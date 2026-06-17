`timescale 1ns / 1ps

module alu16bit_tb;

    // Testbench signals
    reg [15:0] A;
    reg [15:0] B;
    reg [3:0]  ALU_Sel;
    wire [15:0] ALU_Out;
    wire CarryOut;

    // Instantiate the Unit Under Test (UUT)
    alu16bit uut (
        .A(A),
        .B(B),
        .ALU_Sel(ALU_Sel),
        .ALU_Out(ALU_Out),
        .CarryOut(CarryOut)
    );

    initial begin
        // GTKWave VCD Dump Generation
        $dumpfile("alu_dump.vcd"); 
        $dumpvars(0, alu16bit_tb); 

        // Initialize Inputs
        A = 16'h0000;
        B = 16'h0000;
        ALU_Sel = 4'b0000;
        #10;

        // --- Test Cases ---
        // 1. Addition
        A = 16'h0015; B = 16'h000A; ALU_Sel = 4'b0000; #10;
        
        // 2. Subtraction
        A = 16'h0015; B = 16'h000A; ALU_Sel = 4'b0001; #10;

        // 3. AND
        A = 16'h00FF; B = 16'h0F0F; ALU_Sel = 4'b0010; #10;

        // 4. OR
        A = 16'h00FF; B = 16'h0F0F; ALU_Sel = 4'b0011; #10;

        // 5. Logical Shift Left
        A = 16'h0001; B = 16'h0000; ALU_Sel = 4'b1000; #10;

        // 6. Rotate Left
        A = 16'h8001; B = 16'h0000; ALU_Sel = 4'b1010; #10;

        // Force time to advance so Verilator registers the final states
        #20;
        
        // Flush the dump buffer to ensure the .vcd file is written
        $display("Simulation complete. Check alu_dump.vcd in your directory.");
        $fflush;
        $finish;
    end

endmodule
