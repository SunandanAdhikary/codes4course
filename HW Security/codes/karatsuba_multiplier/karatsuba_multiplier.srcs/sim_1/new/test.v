`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/03/2022 12:05:04 AM
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
    
reg [232:0] a;
reg [232:0] b;
wire [232:0] d; 
hkm_233 hkm(.a(a), .b(b), .d(d));
//initial
//    begin
//        clk<=1'd0;
//        rst<=1'd1;
//    end

//always #10 clk=~clk;

initial
    begin
        $monitor($time, "a=%b","b=%b","d=%b",a,b,d);
        #10 a<=233'b10;
        #10 b<=233'b11;
        #30 a<=233'b10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
        #30 b<=233'b1001;
        #100 $finish;
    end
           
endmodule
