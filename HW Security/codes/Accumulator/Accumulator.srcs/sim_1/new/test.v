`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 14.01.2021 16:15:25
// Design Name: 
// Module Name: test
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


module test;
reg clk,rst;
reg [3:0] in;
wire [4:0] acc; 
accumulator accmod(.in(in), .clk(clk), .rst(rst), .acc(acc));
initial
    begin
        clk<=1'd0;
        rst<=1'd1;
    end

always #10 clk=~clk;

initial
    begin
        in<=4'd0;
        #100 rst<=1'd0;
        #10 in<=4'd3;
        #20 in<=4'd4;
    end

endmodule
