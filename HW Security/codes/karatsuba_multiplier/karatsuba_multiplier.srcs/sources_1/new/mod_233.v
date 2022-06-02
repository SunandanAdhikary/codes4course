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


module mod_233(
    output [232:0] out,
    input [464:0] in
    );
//    irr. pn: x^n+x^m+1, m=74,n=233
    assign out[72:0] = in[72:0]^in[305:233]^in[464:392];                //m-2:0
    assign out[73] = in[73]^in[306];                                    //m-1 
    assign out[146:74] = in[146:74]^in[379:307]^in[305:233]^in[464:392];//2(m-2):m
    assign out[231:147] = in[231:147]^in[464:380]^in[390:306];          //n-1:m+1
    assign out[232] = in [232]^in[391];                                 //n
endmodule
