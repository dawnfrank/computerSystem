/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_83.c
 *   Created on: Nov 29, 2016 1:01:43 AM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>
#include <stdint.h>

/* problem:
 * Consider numbers having a binary representation consisting of an infinite string
 * of the form O.yyyyyy···, where y is a k-bit sequence. For example, the binary
 * representation of 1/3 is 0.01010101···(y = 01), while the representation of 1/5 is
 * O.OO11OO11OO11···(y = 0011).
 * A. Let Y = B2Uk(y), that is, the number having binary representation y. Give
 * 	a formula in terms of Y and k for the value·represented by the infinite string.
 * 	Hint: Consider the effect of shifting the binary point k positions to the right.
 * B .What is the numeric value pf the string for the following values of y?
 * 	(a) 101
 * 	(b) 0110
 * 	(c) 010011
 *
 */

//A:  (B2U(y) - 1)/B2U(1^k)

//B:(a) 5/7
//	(b) 2/5
//	(c) 19/63

int main(){
	return 0;
}
