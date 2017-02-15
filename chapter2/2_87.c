/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_87.c
 *   Created on: Dec 11, 2016 1:19:02 PM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>

/* problem:
 * The 2008 version of .the IEEE floating-point standard, named IEEE 754-2008,
 * includes a 16-bit "half-precision" floating-point format, It was originally devised
 * by computer, graphics companies for storing data in which a higher dynamic range
 * is required than can be achieved with 16-bit integers. This format has 1 sign
 * bit, 5 exponent bits (k = 5), and 10 fraction bits (n = 10). The exponent bais is
 * 2^(5- 1) -1=15.
 * 	 Fill in the table that follows for each of the numbers given, with the following
 * instructions for each column:
 *
 * Hex: The four hexadecimal digits describing the encoded form.
 * M: The value of the significand. This should be a number of the form x or  x/y
 * 		where x is an integer and y is an integral power of 2. Examples include 0,
 * 		67/64 and 1/256
 * E: The integer value of the exponent.
 * V: The numeric value represented. Use the notation x or x * (2^z), where x and
 * 		z are integers.
 * D: The (possibly approximate) numerical value, as is' printed using the' %f
 * 		formatting specification of printf.
 *
 * As an example, to represent the number 7/8, we would have s = 0, M=7/4,
 * and E = -1. Our number would therefore have an exponent field of 01110
 * (decimal value 15 - 1=14) and a sigriifica1\a field of 11000000002, giving a hex
 * representation 3B00. The numerical value is 0.875.
 * You need not fill in entries marked-.
 *
 * Description				 Hex		 M		 E		 V		 D
 * -0						____		____	____	-0		-0.0
 * Smallest value			____		____	____	____	____
 * 512						____		____	____	512		512.0
 * Largest denormalized		____		____	____	____	____
 * -00						____		____	____	____	____
 * Number with hex			3BB0		____	____	____	____
 *	representation 3BBO
 */

 //Description				 Hex		 M					 E		 V					 D
 //-0						8000		0					-14		-0					-0.0
 //Smallest value			fbff		((2^11)-1)/(2^10)	2^15	-((2^11)-1)*(2^5)	-65504.0
 //512						2400		1					521		512					512.0
 //Largest denormalized		03ff		((2^10)-1)/(2^10)	2^-14	((2^10)-1)/(2^24)	0.00006097555
 //-00						fc00		____					____	-00				____


int main(){
	return 0;
}
