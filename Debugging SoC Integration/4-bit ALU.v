// Simple 4-bit ALU that performs bitwise AND and addition

module alu (
    input [3:0] a,      // 4-bit operand A
    input [3:0] b,      // 4-bit operand B
    input sel,          // Operation select: 0 = AND, 1 = ADD
    output reg [3:0] y  // 4-bit ALU output
);

always @(*) begin
    case (sel)
        1'b0: y = a & b;   // Bitwise AND operation
        1'b1: y = a + b;   // 4-bit addition
        default: y = 4'b0000;
    endcase
end

endmodule