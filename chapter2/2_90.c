/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_90.c
 *   Created on: Dec 17, 2016 12:51:05 AM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>

/* problem:
 * You have been assigned the task of writing a C function to compute a floating-
 * point,representation of 2^x. You decide that the best way to do this is to directly
 * construct the IEEE single-precision represeritaiion of the result: When x is too
 * small, your routine Will return 0.0. When x is too large, it will return +oo. Fill in the
 * blank portions of the code that follows to compute the correct result. ·Assume the
 * function u2f returns a floating-point value having an identical bit representation
 * as its unsigned argument.
 */

float fpwr2(int x)
{
	/* Result exponent and fraction */
	unsigned exp,frac;
	unsigned u;

	// 1-Bias-23
	if (x < -149) {
		/* Too small. Return 0.0 */
		exp = 0;
		frac = 0;
	//1-Bais
	} else if (x < -126) {
		/* Denormalized result */
		exp = 1;
		frac = 1<<(x+149);
	// 255 + 1 - bais -1
	} else if (x < 128) {
		/* Normalized result */
		exp = x+127;
		frac = 0;
	} else {
	/* Too big. Return +oo */
		exp = 255;
		frac = 0;
	}
	/*Pack exp and frac into,32 biFs */
	u = exp << 23 | frac;
	printf("exp=%d frac=%d u=%x \n",exp,frac,u);
	return u;
	/* Return as float */
//	return u2f(u);
}

int main(){
	printf("fpwr2(0)=%f\n",fpwr2(0));
	printf("fpwr2(-140)=%f\n",fpwr2(-140));
	printf("fpwr2(-2)=%f\n",fpwr2(-2));
	printf("fpwr2(2)=%f\n",fpwr2(2));
	return 0;
}
