/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_85.c
 *   Created on: Nov 29, 2016 2:07:46 AM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>
#include <stdint.h>

/* problem:
 * Given a floating-point format with a k-bit exponent and an n-bit fraction, write
 * formulas for the exponent E, the significand M, the fraction f, and the value V
 * for the quantities that follow. In addition, describe the bit representation.
 * A. The number 7.0
 * B. The largest odd integer that can, be represented exactly
 * C. The reciprocal of the smallest positive normalized value
 */

//A: bit representation:0100 0001 0011 0000 0000 0000 0000 0000
//E=4 M=1.75 f=0.75 V=7

//B:E=(2^(k-1))-2 M=(2^k))-3)/((2^(k-1))-2) f=((2^(k-1))-3)/(2^(k-1))-2)) V=(2^k)-3

//C:smallest postive normalized value:2^(1-(2^(k-1)))*2^(-2^n) = 2^(1-2^(n+k-1))
// reciprocal ?!

int main(){
	return 0;
}
