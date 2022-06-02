`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/01/2022 10:08:55 AM
// Design Name: 
// Module Name: km_233
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


module km_233(
    input [232:0] a,
    input [232:0] b,
    output [464:0] c
    );
    wire [232:0] ll;
    wire [230:0] hh;
    wire [232:0] hl;
    wire [116:0] ahl, bhl;
    km_116 km2a(a[232:117],b[232:117],hh);
    km_117 km2b(a[116:0],b[116:0],ll);
    assign ahl[115:0] = a[232:117]^a[115:0];
    assign ahl[116] = a[116];
    assign bhl[115:0] = b[232:117]^b[115:0];
    assign bhl[116] = b[116];
    km_117 km2c(ahl,bhl,hl);
    assign c[116:0] = ll[116:0];
    assign c[232:117] = ll[232:117]^hl[115:0]^hh[115:0]^ll[115:0];
    assign c[233] = hl[116]^hh[116]^ll[116];
    assign c[347:234] = hl[230:117]^hh[230:117]^ll[230:117]^hh[113:0];
    assign c[349:348] = hl[232:231]^ll[232:231]^hh[115:114];
    assign c[464:350] = hh[230:116];
endmodule
