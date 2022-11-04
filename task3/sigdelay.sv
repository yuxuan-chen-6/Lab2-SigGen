module sigdelay #(
    parameter A_WIDTH = 9,
              D_WIDTH = 8  
)(
    // interface signals
    input   logic               clk, // clock
    input   logic               rst,        // reset
    input   logic [A_WIDTH-1:0] incr,
    input   logic               en,         // counter enable
    input   logic               wr,
    input   logic               rd,
    input   logic [D_WIDTH-1:0] mic_signal,
    input   logic [D_WIDTH-1:0] offset,
    output  logic [D_WIDTH-1:0] delayed_signal
);

    logic [A_WIDTH-1:0] address; // interconnct wire


counter addrCounter (
    .clk (clk),
    .rst (rst),
    .en  (en),
    .incr (incr),
    .count (address)

);

ram sineRam(
    .clk (clk),
    .wr_en (wr),
    .rd_en (rd),
    .wr_addr (address),
    .rd_addr (address-offset),
    .din (mic_signal),
    .doutDelayed (delayed_signal)
);

endmodule
