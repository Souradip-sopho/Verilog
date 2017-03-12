`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:03:15 11/27/2016 
// Design Name: 
// Module Name:    modules 
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


//D-Flip Flop
module d_ff(q, d, clk); output q;  input d, clk; reg q;
 initial
	q=0; always @(posedge clk)		q <= d;endmodule


//ADDER
module adder_subtractor(A,B,Cin,S,Op);
   parameter width = 8;

   input [width-1:0] A;
   input [width-1:0] B;
	input Cin,Op;
	output  [width-1:0] S;
   reg  [width-1:0] S;
   
   always @*
      if (~Op)
         S = A + B + Cin;
      else
         S = A - B - Cin ; 
endmodule					
	
/*module MUX( select, I, Y );

input [1:0]select;
input[3:0] I;
output     Y;

wire Y;
wire[1:0] select;
wire[3:0] I;
assign Y = I[select];

endmodule
*/


//Decision Module
module decision( x, y);
input [7:0]x;
output y;
reg y;
always @ x
begin
if(x[7]==0)
	y=1'b1;
else
	y=1'b0;	
end	
endmodule



//4x1 Multiplexer
module MUX3( select1,select0, X, Z );

input select1,select0;
input[3:0]X ;
output Z;

reg Z;
wire select1,select0;
wire[3:0] X;

always @*
begin
   if( select0 == 0 & select1==0)
      Z = X[0];

   if( select0 == 1 & select1==0)
      Z = X[1];

   if( select0 == 0 & select1==1)
      Z = X[2];

   if( select0 == 1 & select1==1)
      Z = X[3];
end

endmodule
	