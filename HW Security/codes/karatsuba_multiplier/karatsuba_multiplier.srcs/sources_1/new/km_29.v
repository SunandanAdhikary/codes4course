`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/01/2022 11:34:22 AM
// Design Name: 
// Module Name: km_29
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


module km_29(
    input [28:0] a,
    input [28:0] b,
    output [56:0] c
    );
    wire [28:0] ll;//n-1
    wire [26:0] hh;//n-3
    wire [28:0] hl;//n-1
    wire [14:0] ahl, bhl;//(n-1)/2
    km_14 km5a(.a(a[28:15]),.b(b[28:15]),.c(hh));
    km_15 km5b(.a(a[14:0]),.b(b[14:0]),.c(ll));
    assign ahl[13:0] = a[28:15]^a[13:0];
    assign ahl[14] = a[14];
    assign bhl[13:0] = b[28:15]^b[13:0];
    assign bhl[14] = b[14];
    km_15 km5c(.a(ahl),.b(bhl),.c(hl));
    assign c[14:0] = ll[14:0];
    assign c[28:15] = ll[28:15]^hl[13:0]^hh[13:0]^ll[13:0];
    assign c[29] = hl[14]^hh[14]^ll[14];
    assign c[41:30] = hl[26:15]^hh[26:15]^ll[26:15]^hh[11:0];
    assign c[43:42] = hl[28:27]^ll[28:27]^hh[13:12];
    assign c[56:44] = hh[26:14];
endmodule
