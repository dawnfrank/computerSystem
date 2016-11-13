/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_65.c
 *   Created on: Nov 13, 2016 2:13:29 PM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

/* problem:
 * Write code to implement the following function:
 *
 * /* Return 1 when x contains an odd number of ls; 0 otherwise.
 * Assume w=32 *'/
 * int odd_ones(unsigned x):
 *
 *   Your function should follow the bit-level integer coding rules (page 128),
 * except that you may assume !hat data.type int has w = 32 bits,
 *   Your code should contain a total of at most 12 arithmetic, bitwise, and logical
 * operations.
*/

#include <stdio.h>
#include <stdint.h>

int odd_ones(unsigned x){
	x ^= x>>16;
	x ^= x>>8;
	x ^= x>>4;
	x ^= x>>2;
	x ^= x>>1;
	return x&1;
}

int main(){
	printf("odd_ones(0x77777777):%x\n",odd_ones(0x77777777));
	printf("odd_ones(0xf7777777):%x\n",odd_ones(0xf7777777));
	printf("odd_ones(0x00000007):%x\n",odd_ones(0x00000007));
	printf("odd_ones(0x00000077):%x\n",odd_ones(0x00000077));
	return 0;
}
