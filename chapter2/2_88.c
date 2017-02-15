/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_88.c
 *   Created on: Dec 11, 2016 2:22:26 PM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>


/* problem:
 * Consider the following two 9-bit floating-point representations based on the IEEE
 * floating-point format.
 *
 * 1. Format A
 *  • There is 1 sign bit.
 * 	• There are k = 5 exponeni bits. The exponent bias is 15.
 * 	• There are n = 3 fraction bi'ts.
 * 2. Format B
 *	 • There is 1 sign bit.
 * 	 • There are k·= 4 exponent. The exponent bias is 7.
 * 	 •'There are n·= 4 fraction·bits.
 * 	In the followihg taole, you are given some bit patterns in format A, and your
 * task is to conyert them .to the ,closest value in format B. If rounding is necessary
 * you should round toward +oo. In addition, give the values of numbers given by
 * the format A and format B bit patterns. Give these as whole numbers (e.g., 17) or
 * as fractions (e.g., 17 /64 or 17 /(2^6)).
 *
 * 			Format A					.Format B
 *		Bits		Value			Bits		Value
 *	1 01111 001		-9/8		1 0111 0010		-9/8
 *	0 10110 011		____			____		____
 *	1 00111 010		____			____		____
 *	0 00000 111		____			____		____
 *	1 11100 000		____			____		____
 *	0 10111 100		____			____		____
 *
 */

//			Format A					.Format B
//		Bits		Value			Bits		Value
//	1 01111 001		-9/8		1 0111 0010		-9/8
//	0 10110 011		176			0 1110 0110		176
//	1 00111 010		-5/(2^10)	1 0000 1010		-5/(2^10)
//	0 00000 111		7/(2^17)	0 0000 0001		1/(2^11)
//	1 11100 000		-384		1 1110 1111		-248
//	0 10111 100		384			0 1111 0000		∞

int main(){
	return 0;
}

