`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/01/2022 11:34:22 AM
// Design Name: 
// Module Name: km_58
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


module km_58(
    input [57:0] a,
    input [57:0] b,
    output [114:0] c
    );
    wire [56:0] ll;//n-2
    wire [56:0] hh;//n-2
    wire [56:0] hl;//n-2
    wire [28:0] ahl, bhl;//(n-2)/2
//    wire [28:0] al;
//    assign al = a[28:0];
//    wire [28:0] ah;
//    assign ah = a[57:29];
//    wire [28:0] bh;
//    assign bh = b[57:29];
//    wire [28:0] bl;
//    assign bl = b[28:0];    
    km_29 km4d(a[57:29],b[57:29],hh);
//    km_29 km4d(ah,bh,hh);
    km_29 km4e(a[28:0],b[28:0],ll);
//    km_29 km4e(al,bl,ll);
    assign ahl = a[57:29]^a[28:0];
//    assign ahl = ah^al;
    assign bhl = b[57:29]^b[28:0];
//    assign bhl = bh^bl;
    km_29 km4f(ahl,bhl,hl);
    assign c[28:0] = ll[28:0];//n/2:0
    assign c[56:29] = ll[56:29]^hl[27:0]^hh[27:0]^ll[27:0];//ll_h:n/2+1
    assign c[57] = hl[28]^hh[28]^ll[28];
    assign c[85:58] = hl[56:29]^hh[56:29]^ll[56:29]^hh[27:0];
    assign c[114:86] = hh[56:28];
endmodule
