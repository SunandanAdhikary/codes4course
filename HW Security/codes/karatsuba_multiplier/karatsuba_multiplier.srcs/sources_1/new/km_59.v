`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/01/2022 10:08:55 AM
// Design Name: 
// Module Name: km_59
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


module km_59(
    input [58:0] a,
    input [58:0] b,
    output [116:0] c
    );
    wire [58:0] ll;
    wire [56:0] hh;
    wire [58:0] hl;
    wire [29:0] ahl, bhl;
    km_29 km4a(a[58:30],b[58:30],hh);
    km_30 km4b(a[29:0],b[29:0],ll);
    assign ahl[28:0] = a[58:30]^a[28:0];
    assign ahl[29] = a[29];
    assign bhl[28:0] = b[58:30]^b[28:0];
    assign bhl[29] = b[29];
    km_30 km4c(ahl,bhl,hl);
    assign c[29:0] = ll[29:0];
    assign c[58:30] = ll[58:30]^hl[28:0]^hh[28:0]^ll[28:0];
    assign c[59] = hl[29]^hh[29]^ll[29];
    assign c[86:60] = hl[56:30]^hh[56:30]^ll[56:30]^hh[26:0];
    assign c[88:87] = hl[58:57]^ll[58:57]^hh[28:27];
    assign c[116:89] = hh[56:29];
endmodule
