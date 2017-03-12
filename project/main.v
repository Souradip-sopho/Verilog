`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:09:31 11/27/2016 
// Design Name: 
// Module Name:    main 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
//Main Module
module top(input clk,output OUT);

parameter a1=8'b10000000 ,a2=8'b01111111,a3=1'b0,a4=1'b1;//assumed some arbitrary values

//initialized wires
wire [3:0]W1;
wire [1:0]S;
wire [7:0]W3,W4,W5,W6;
wire y1,y2,w1,w2,s1,s0;

//initialized registers
reg [7:0]memA[0:3];
reg  memB[0:3];
reg [3:0]W2;
	
MUX3 mux1(s1,s0,W1,y1);
MUX3 mux2(s1,s0,W2,y2);

d_ff D1(s0,y1,clk);
d_ff D2(s1,s0,clk);
d_ff D3(w1,y2,clk);
d_ff D4(w2,w1,clk);

parameter temp=8'b00000000,add=1'b0;
adder_subtractor ADD1(memA[0],temp,w2,W3,add);
adder_subtractor ADD2(memA[1],temp,w2,W4,add);
adder_subtractor ADD3(memA[2],temp,w2,W5,add);
adder_subtractor ADD4(memA[3],temp,w2,W6,add);

decision dec1(W3,W1[0]);
decision dec2(W4,W1[1]);
decision dec3(W5,W1[2]);
decision dec4(W6,W1[3]);

initial 
	begin
		memA[0]=-a1-a2;
		memA[1]=-a1+a2;
		memA[2]=a1-a2;
		memA[3]=a1+a2;
		
		memB[0]=-a3-a4;
		memB[1]=-a3+a4;
		memB[2]=a3-a4;
		memB[3]=a3+a4;
		
	   W2[0]=memB[0];
		W2[1]=memB[1];
		W2[2]=memB[2];
		W2[3]=memB[3];
	end
reg OUT;
always @*
	begin
		OUT<=s1;
	end
endmodule
