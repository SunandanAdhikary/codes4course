`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/01/2022 11:34:22 AM
// Design Name: 
// Module Name: km_116
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


module km_116(input [115:0] a,
    input [115:0] b,
    output [230:0] c
    );
    wire [114:0] ll;
    wire [114:0] hh;
    wire [114:0] hl;
    wire [57:0] ahl, bhl;
    km_58 km3d(a[115:58],b[115:58],hh);
    km_58 km3e(a[57:0],b[57:0],ll);
    assign ahl = a[115:58]^a[57:0];
//    assign ahl[58] = a[58];
    assign bhl = b[115:58]^b[57:0];
//    assign bhl[58] = b[58];
    km_58 km3f(ahl,bhl,hl);
    assign c[57:0] = ll[57:0];
    assign c[114:58] = ll[114:58]^hl[56:0]^hh[56:0]^ll[56:0];
    assign c[115] = hl[57]^hh[57]^ll[57];
    assign c[172:116] = hl[114:58]^hh[114:58]^ll[114:58]^hh[56:0];
//    assign c[174:175] = hl[116:115]^ll[116:115]^hh[57:56];
    assign c[230:173] = hh[114:57];
endmodule
