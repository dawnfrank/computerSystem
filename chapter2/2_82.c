/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_82.c
 *   Created on: Nov 27, 2016 7:01:25 PM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>

/* problem:
 * We are running programs where values of type int are 32 bits. They are represented
 * in two's complement, and they are right shifted arithmetically. Values of
 * type unsigned are also 32 bits.
 * We generate arbitrary values x and y, and convert them to unsigned values as follows:
 *
 * // Create some arbitrary values
 * int x = random();
 * int y = random();
 * //Convert to unsigned
 * unsigned ux = (unsigned) x;
 * unsigned uy = (unsigned) y;
 *
 * For each of the following C expressions, you are to indicate whether ,or
 * not the expression always yields 1. If it always yields 1, describe the underlying
 * mathematical principles. Otherwise, give an example of arguments that make it
 * yield 0.
 *
 * A. (x<y) == (-x>-y)
 * B. ((x+y)<<4) + y-x == 17*y+15*x
 * C. ~x+~y+1 == ~(x+y)
 * D. (ux-uy) ==-(unsigned)(y-x)
 * E. ((x >> 2) << 2) <= x
 */

int A(int x,int y){
	return (x<y) == (-x>-y);
}

//For C variables x and k with two's-complement value x and unsigned value k,
//such that 0 <= k < w, the C expression x << k yields the value x*2^k.
int B(int x,int y){
	return ((x+y)<<4) + y-x == 17*y+15*x;
}

// ~x = -x + 1
int C(int x,int y){
	return ~x+~y+1 == ~(x+y);
}

//That is, for w-bit two's-complement addition, TMin is its own additive inverse,
// while any other value x has·-x as its additive inverse.
int D(int x,int y){
	unsigned ux = (unsigned) x;
	unsigned uy = (unsigned) y;
	return (ux-uy) ==-(unsigned)(y-x);
}

//Two's-complement division by a power of 2, rounding down
int E(int x){
	return ((x >> 2) << 2) <= x;
}

int main(){
	printf("A(0x80000000,0x0)=%x\n",A(0x80000000,0x0));
	return 0;
}
