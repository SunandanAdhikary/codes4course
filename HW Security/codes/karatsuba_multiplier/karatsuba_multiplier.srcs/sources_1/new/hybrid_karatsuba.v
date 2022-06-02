`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/01/2022 10:08:55 AM
// Design Name: 
// Module Name: hkm_233
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

module hkm_233(
    input [232:0] a,
    input [232:0] b,
    output [232:0] d
    );
    wire [464:0] c;    
    km_233 km1(.a(a),.b(b),.c(c));
    mod_233 m(.out(d),.in(c));
endmodule
