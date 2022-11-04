module counter #(
    parameter WIDTH = 9
)(
    // interface signals
    input   logic               clk,        // clock
    input   logic               rst,        // reset
    input   logic [WIDTH-1:0]   incr,
    input   logic               en,         // counter enable
    output  logic [WIDTH-1:0]   count       // count output
);

always_ff @ (posedge clk)
begin
    if (rst)    
        count <={WIDTH{1'b0}};
    else if(en) 
        count <=count + incr;
    end


endmodule
