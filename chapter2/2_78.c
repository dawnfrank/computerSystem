/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_78.c
 *   Created on: Nov 25, 2016 12:22:52 AM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>

/* problem:
 * Write code for a function with the following prototype:
 *
 * //Divide by power of 2. Assume O <= k < w-1
 * int divide_power2(int x, int k);
 *
 * The function should compute x/(2<<k) with correct rounding,
 * and it should follow the bit-level integer coding rules (page 128).
 */

int divide_power2(int x,int k){
	int w = sizeof(int) << 3;
	int bais = (1<<k) - 1;
	return (x+bais)>>k;
}

int main(){
	printf("divide_power2(0x00000000f,3)=%x\n",divide_power2(0x0000000f,3));
	printf("divide_power2(0xffffffff0,3)=%x\n",divide_power2(0xfffffff0,3));
	return 0;
}
