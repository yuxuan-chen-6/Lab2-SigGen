module ram #(
    parameter   ADDRESS_WIDTH = 9,//9 bit address 
                DATA_WIDTH = 8
)(
    input logic clk,
    input logic wr_en,
    input logic rd_en,
    input logic [ADDRESS_WIDTH-1:0] wr_addr,
    input logic [ADDRESS_WIDTH-1:0] rd_addr,
    input logic [DATA_WIDTH-1:0] din,
    output logic [DATA_WIDTH-1:0] doutDelayed
);

logic [DATA_WIDTH-1:0] ram_array [2**ADDRESS_WIDTH-1:0];
// a ram_array is a list of [8] bit, with a total of [512] items

always_ff @(posedge clk) 
begin
    // output is synchronous
    if (wr_en) 
        ram_array[wr_addr] <= din; // the offset is added
    if (rd_en)
        doutDelayed <= ram_array[rd_addr];
end
endmodule
