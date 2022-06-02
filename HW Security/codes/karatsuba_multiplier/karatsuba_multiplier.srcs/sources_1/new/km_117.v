`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/01/2022 10:08:55 AM
// Design Name: 
// Module Name: km_117
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


module km_117(
    input [116:0] a,
    input [116:0] b,
    output [232:0] c
    );
    wire [116:0] ll;
    wire [114:0] hh;
    wire [116:0] hl;
    wire [58:0] ahl, bhl;
    km_58 km3a(a[116:59],b[116:59],hh);
    km_59 km3b(a[58:0],b[58:0],ll);
    assign ahl[57:0] = a[116:59]^a[57:0];
    assign ahl[58] = a[58];
    assign bhl[57:0] = b[116:59]^b[57:0];
    assign bhl[58] = b[58];
    km_59 km3c(ahl,bhl,hl);
    assign c[58:0] = ll[58:0];
    assign c[116:59] = ll[116:59]^hl[57:0]^hh[57:0]^ll[57:0];
    assign c[117] = hl[58]^hh[58]^ll[58];
    assign c[173:118] = hl[114:59]^hh[114:59]^ll[114:59]^hh[55:0];
    assign c[175:174] = hl[116:115]^ll[116:115]^hh[57:56];
    assign c[232:176] = hh[114:58];
endmodule
