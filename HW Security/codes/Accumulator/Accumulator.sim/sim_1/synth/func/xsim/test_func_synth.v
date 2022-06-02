// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
// Date        : Fri Jan 15 12:07:00 2021
// Host        : LAPTOP-12A2IL26 running 64-bit major release  (build 9200)
// Command     : write_verilog -mode funcsim -nolib -force -file
//               F:/TA/HWSEC/Accumulator/Accumulator.sim/sim_1/synth/func/xsim/test_func_synth.v
// Design      : accumulator
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* NotValidForBitStream *)
module accumulator
   (in,
    clk,
    rst,
    acc);
  input [3:0]in;
  input clk;
  input rst;
  output [4:0]acc;

  wire [4:0]acc;
  wire [4:0]acc_OBUF;
  wire add_n_0;
  wire add_n_1;
  wire add_n_2;
  wire add_n_3;
  wire add_n_4;
  wire clk;
  wire clk_IBUF;
  wire clk_IBUF_BUFG;
  wire [3:0]in;
  wire [3:0]in_IBUF;
  wire rst;
  wire rst_IBUF;

  OBUF \acc_OBUF[0]_inst 
       (.I(acc_OBUF[0]),
        .O(acc[0]));
  OBUF \acc_OBUF[1]_inst 
       (.I(acc_OBUF[1]),
        .O(acc[1]));
  OBUF \acc_OBUF[2]_inst 
       (.I(acc_OBUF[2]),
        .O(acc[2]));
  OBUF \acc_OBUF[3]_inst 
       (.I(acc_OBUF[3]),
        .O(acc[3]));
  OBUF \acc_OBUF[4]_inst 
       (.I(acc_OBUF[4]),
        .O(acc[4]));
  adder add
       (.O({add_n_0,add_n_1,add_n_2,add_n_3}),
        .in(in_IBUF),
        .out(acc_OBUF),
        .\out_reg[4] (add_n_4));
  BUFG clk_IBUF_BUFG_inst
       (.I(clk_IBUF),
        .O(clk_IBUF_BUFG));
  IBUF clk_IBUF_inst
       (.I(clk),
        .O(clk_IBUF));
  IBUF \in_IBUF[0]_inst 
       (.I(in[0]),
        .O(in_IBUF[0]));
  IBUF \in_IBUF[1]_inst 
       (.I(in[1]),
        .O(in_IBUF[1]));
  IBUF \in_IBUF[2]_inst 
       (.I(in[2]),
        .O(in_IBUF[2]));
  IBUF \in_IBUF[3]_inst 
       (.I(in[3]),
        .O(in_IBUF[3]));
  dff mod
       (.O({add_n_0,add_n_1,add_n_2,add_n_3}),
        .clear(rst_IBUF),
        .clk(clk_IBUF_BUFG),
        .out(acc_OBUF),
        .\out_reg[4]_0 (add_n_4));
  IBUF rst_IBUF_inst
       (.I(rst),
        .O(rst_IBUF));
endmodule

module adder
   (O,
    \out_reg[4] ,
    in,
    out);
  output [3:0]O;
  output [0:0]\out_reg[4] ;
  input [3:0]in;
  input [4:0]out;

  wire [3:0]O;
  wire [3:0]in;
  wire [4:0]out;
  wire \out[0]_i_2_n_0 ;
  wire \out[0]_i_3_n_0 ;
  wire \out[0]_i_4_n_0 ;
  wire \out[0]_i_5_n_0 ;
  wire \out_reg[0]_i_1_n_0 ;
  wire \out_reg[0]_i_1_n_1 ;
  wire \out_reg[0]_i_1_n_2 ;
  wire \out_reg[0]_i_1_n_3 ;
  wire [0:0]\out_reg[4] ;
  wire [3:0]\NLW_out_reg[4]_i_1_CO_UNCONNECTED ;
  wire [3:1]\NLW_out_reg[4]_i_1_O_UNCONNECTED ;

  LUT2 #(
    .INIT(4'h6)) 
    \out[0]_i_2 
       (.I0(in[3]),
        .I1(out[3]),
        .O(\out[0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \out[0]_i_3 
       (.I0(in[2]),
        .I1(out[2]),
        .O(\out[0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \out[0]_i_4 
       (.I0(in[1]),
        .I1(out[1]),
        .O(\out[0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \out[0]_i_5 
       (.I0(in[0]),
        .I1(out[0]),
        .O(\out[0]_i_5_n_0 ));
  CARRY4 \out_reg[0]_i_1 
       (.CI(1'b0),
        .CO({\out_reg[0]_i_1_n_0 ,\out_reg[0]_i_1_n_1 ,\out_reg[0]_i_1_n_2 ,\out_reg[0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI(in),
        .O(O),
        .S({\out[0]_i_2_n_0 ,\out[0]_i_3_n_0 ,\out[0]_i_4_n_0 ,\out[0]_i_5_n_0 }));
  CARRY4 \out_reg[4]_i_1 
       (.CI(\out_reg[0]_i_1_n_0 ),
        .CO(\NLW_out_reg[4]_i_1_CO_UNCONNECTED [3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_out_reg[4]_i_1_O_UNCONNECTED [3:1],\out_reg[4] }),
        .S({1'b0,1'b0,1'b0,out[4]}));
endmodule

module dff
   (out,
    clear,
    O,
    clk,
    \out_reg[4]_0 );
  output [4:0]out;
  input clear;
  input [3:0]O;
  input clk;
  input [0:0]\out_reg[4]_0 ;

  wire [3:0]O;
  wire clear;
  wire clk;
  wire [4:0]out;
  wire [0:0]\out_reg[4]_0 ;

  FDRE #(
    .INIT(1'b0)) 
    \out_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(O[0]),
        .Q(out[0]),
        .R(clear));
  FDRE #(
    .INIT(1'b0)) 
    \out_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(O[1]),
        .Q(out[1]),
        .R(clear));
  FDRE #(
    .INIT(1'b0)) 
    \out_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(O[2]),
        .Q(out[2]),
        .R(clear));
  FDRE #(
    .INIT(1'b0)) 
    \out_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(O[3]),
        .Q(out[3]),
        .R(clear));
  FDRE #(
    .INIT(1'b0)) 
    \out_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\out_reg[4]_0 ),
        .Q(out[4]),
        .R(clear));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule
`endif
