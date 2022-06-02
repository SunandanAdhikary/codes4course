// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
// Date        : Fri Jan 21 17:38:15 2022
// Host        : LAPTOP-12A2IL26 running 64-bit major release  (build 9200)
// Command     : write_verilog -mode timesim -nolib -sdf_anno true -force -file {F:/TA/2021 Spring/HWSEC/Vivado
//               Project/Accumulator/Accumulator.sim/sim_1/impl/timing/xsim/test_time_impl.v}
// Design      : accumulator
// Purpose     : This verilog netlist is a timing simulation representation of the design and should not be modified or
//               synthesized. Please ensure that this netlist is used with the corresponding SDF file.
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps
`define XIL_TIMING

(* ECO_CHECKSUM = "e78e850f" *) 
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
  wire clk;
  wire clk_IBUF;
  wire clk_IBUF_BUFG;
  wire [3:0]in;
  wire [3:0]in_IBUF;
  wire rst;
  wire rst_IBUF;

initial begin
 $sdf_annotate("test_time_impl.sdf",,,,"tool_control");
end
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
       (.Q(acc_OBUF),
        .SR(rst_IBUF),
        .clk_IBUF_BUFG(clk_IBUF_BUFG),
        .in_IBUF(in_IBUF));
  IBUF rst_IBUF_inst
       (.I(rst),
        .O(rst_IBUF));
endmodule

module dff
   (Q,
    SR,
    clk_IBUF_BUFG,
    in_IBUF);
  output [4:0]Q;
  input [0:0]SR;
  input clk_IBUF_BUFG;
  input [3:0]in_IBUF;

  wire [4:0]Q;
  wire [0:0]SR;
  wire \add/c_out3 ;
  wire clk_IBUF_BUFG;
  wire [4:0]dff_in;
  wire [3:0]in_IBUF;

  LUT2 #(
    .INIT(4'h6)) 
    \out[0]_i_1 
       (.I0(Q[0]),
        .I1(in_IBUF[0]),
        .O(dff_in[0]));
  LUT4 #(
    .INIT(16'h8778)) 
    \out[1]_i_1 
       (.I0(Q[0]),
        .I1(in_IBUF[0]),
        .I2(in_IBUF[1]),
        .I3(Q[1]),
        .O(dff_in[1]));
  LUT6 #(
    .INIT(64'hE88817771777E888)) 
    \out[2]_i_1 
       (.I0(in_IBUF[1]),
        .I1(Q[1]),
        .I2(Q[0]),
        .I3(in_IBUF[0]),
        .I4(in_IBUF[2]),
        .I5(Q[2]),
        .O(dff_in[2]));
  LUT3 #(
    .INIT(8'h96)) 
    \out[3]_i_1 
       (.I0(\add/c_out3 ),
        .I1(in_IBUF[3]),
        .I2(Q[3]),
        .O(dff_in[3]));
  LUT4 #(
    .INIT(16'h17E8)) 
    \out[4]_i_1 
       (.I0(in_IBUF[3]),
        .I1(Q[3]),
        .I2(\add/c_out3 ),
        .I3(Q[4]),
        .O(dff_in[4]));
  LUT6 #(
    .INIT(64'hFFFFF880F8800000)) 
    \out[4]_i_2 
       (.I0(in_IBUF[0]),
        .I1(Q[0]),
        .I2(Q[1]),
        .I3(in_IBUF[1]),
        .I4(Q[2]),
        .I5(in_IBUF[2]),
        .O(\add/c_out3 ));
  FDRE #(
    .INIT(1'b0)) 
    \out_reg[0] 
       (.C(clk_IBUF_BUFG),
        .CE(1'b1),
        .D(dff_in[0]),
        .Q(Q[0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \out_reg[1] 
       (.C(clk_IBUF_BUFG),
        .CE(1'b1),
        .D(dff_in[1]),
        .Q(Q[1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \out_reg[2] 
       (.C(clk_IBUF_BUFG),
        .CE(1'b1),
        .D(dff_in[2]),
        .Q(Q[2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \out_reg[3] 
       (.C(clk_IBUF_BUFG),
        .CE(1'b1),
        .D(dff_in[3]),
        .Q(Q[3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \out_reg[4] 
       (.C(clk_IBUF_BUFG),
        .CE(1'b1),
        .D(dff_in[4]),
        .Q(Q[4]),
        .R(SR));
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
