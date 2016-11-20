/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_69.c
 *   Created on: Nov 20, 2016 7:58:54 AM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>
#include <stdint.h>

/* problem:
 *Write code for a function with the following prototype;
 *
 * //Do rotating left shift. Assume 0 <= n < w
 * //Examples when x = Ox12345678 and w = 32:
 * //n=4-> 0x23456781, n=20 -> 0x67812345
 *
 *unsigned rotate_left(unsigned x, int n);
 *Your function should follow the bit-level integer coding rules (page 128). Be
 *careful of the case n = 0.
 */

unsigned rotate_left(unsigned x, int n){
	int w = sizeof(x)*8;
	unsigned lower = x >> (w-n-1) >> 1;
	return (x <<= n)|lower;
}

int main(){
	printf("rotate_left(0)=%x\n",rotate_left(0x12345678,0));
	printf("rotate_left(4)=%x\n",rotate_left(0x12345678,4));
	printf("rotate_left(20)=%x\n",rotate_left(0x12345678,20));
	return 0;
}
