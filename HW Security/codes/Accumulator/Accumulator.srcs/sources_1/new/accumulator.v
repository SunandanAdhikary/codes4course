`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 14.01.2021 15:29:57
// Design Name: 
// Module Name: accumulator
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module accumulator(input [3:0] in, input clk,input rst, output[4:0] acc);
wire[4:0] dff_in;
wire[4:0] dff_out;
adder_struct add(.in1({1'd0,in}),.in2(dff_out),.out(dff_in));
dff mod(.clk(clk),.rst(rst),.in(dff_in),.out(dff_out));
assign acc=dff_out;
endmodule
