`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/01/2022 11:34:22 AM
// Design Name: 
// Module Name: km_30
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


module km_30(input [29:0] a,
    input [29:0] b,
    output [58:0] c
    );
    wire [28:0] ll;//n-2
    wire [28:0] hh;//n-2
    wire [28:0] hl;//n-2
    wire [14:0] ahl, bhl;//(n-2)/2
    wire [28:0] al;
    assign al = a[14:0];
    wire [14:0] ah;
    assign ah = a[29:15];
    wire [14:0] bh;
    assign bh = b[29:15];
    wire [14:0] bl;
    assign bl = b[14:0];    
//    km_15 km5d(a[29:15],b[29:15],hh);
    km_15 km5d(ah,bh,hh);
//    km_15 km5e(a[14:0],b[14:0],ll);
    km_15 km5e(al,bl,ll);
//    assign ahl = a[29:15]^a[14:0];
    assign ahl = ah^al;
//    assign bhl = b[29:15]^b[14:0];
    assign bhl = bh^bl;
    km_15 km5f(ahl,bhl,hl);
    assign c[14:0] = ll[14:0];//n/2-1:0
    assign c[28:15] = ll[28:15]^hl[13:0]^hh[13:0]^ll[13:0];//ll_h:n/2+1
    assign c[29] = hl[14]^hh[14]^ll[14];
    assign c[43:30] = hl[28:15]^hh[28:15]^ll[28:15]^hh[13:0];
    assign c[58:44] = hh[28:14];
endmodule
