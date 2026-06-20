`timescale 1ns / 1ps

module tb_counter_4bit;

    reg clk;
    reg reset;
    wire [3:0] count;

    counter_4bit uut (
        .clk(clk),
        .reset(reset),
        .count(count)
    );

    initial begin
        clk = 0;
        forever #5 clk = ~clk; 
    end

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, tb_counter_4bit);
    end

    initial begin
        reset = 1;

        $display("Time(ns) | Reset | Count");
        $display("-------------------------");
        $monitor("%8t |   %b   | %4b (%0d)", $time, reset, count, count);

        #15; 
        reset = 0;

        #200;

        reset = 1;
        #12;
        reset = 0;
        
        #50;

        $display("--> Simulation complete.");
        $finish;
    end

endmodule
