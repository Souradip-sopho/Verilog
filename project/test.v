`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:26:15 11/27/2016
// Design Name:   top
// Module Name:   G:/digital/test.v
// Project Name:  digital
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	//reg [1:0]S;

	// Outputs
	wire OUT;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		//.S(S),
		.OUT(OUT)
	);

	initial
	clk = 1'b0; 
	
	always
	#15 clk=~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		
	end
   
	initial
		$monitor($time,"Output =%d",OUT);
endmodule

