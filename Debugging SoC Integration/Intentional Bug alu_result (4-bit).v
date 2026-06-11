// Intentional Bug: alu_result (4-bit) passed directly to UART (8-bit input)

module top_soc_bug (
    input clk,
    input rst_n,
    input [3:0] in1,
    input [3:0] in2,
    input sel,
    input tx_en,
    output tx_done,
    output [3:0] alu_out
);

wire [3:0] alu_result;

// ALU instance
alu u_alu (
    .a(in1),
    .b(in2),
    .sel(sel),
    .y(alu_result)
);

// BUG: tx_data expects 8 bits but alu_result is only 4 bits
uart u_uart (
    .clk(clk),
    .rst_n(rst_n),
    .tx_en(tx_en),
    .tx_data(alu_result),   // Bug here
    .tx_done(tx_done)
);

assign alu_out = alu_result;

endmodule