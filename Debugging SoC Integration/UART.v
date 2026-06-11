// UART IP to mimic transmit behavior

module uart (
    input clk,             // Clock input
    input rst_n,           // Active-low reset
    input tx_en,           // Transmit enable
    input [7:0] tx_data,   // 8-bit transmit data
    output reg tx_done     // Transmit done flag
);

always @(posedge clk or negedge rst_n) begin
    if (!rst_n)
        tx_done <= 0;
    else if (tx_en)
        tx_done <= 1;
    else
        tx_done <= 0;
end

endmodule