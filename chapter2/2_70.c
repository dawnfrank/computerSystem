/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_70.c
 *   Created on: Nov 20, 2016 8:39:04 AM 
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
 * //Return 1 when x can be represented as an n-bit, 2's-complement
 * //number; 0 otherwise
 * //Assume 1 <= n <= w
 *
 *int fits_bits(int x, int n);
 *Your function should follow the bit-level integer coding rules (page 128).
 */

int fits_bits(int x,int n){
	int w = sizeof(int) << 3;
	return x << (w - n -1) >> (w-1) & 0x1;
}

int main(){
	printf("fits_bits(0xffff)=%x\n",fits_bits(0xffff,15));
	printf("fits_bits(0xffff)=%x\n",fits_bits(0xffff,16));
	printf("fits_bits(0xffff)=%x\n",fits_bits(0xffff,20));
	return 0;
}
