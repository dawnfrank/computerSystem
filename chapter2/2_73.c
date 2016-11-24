/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_73.c
 *   Created on: Nov 22, 2016 12:51:16 AM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/* problem:
 *Write code for a function with the following prototype;
 *
 * //Addition that saturates to TMin or TMax
 * int saturating_add(int x, int y)
 *
 * Instead of overflowing the way normal two's-complement addition does, saturating
 * addition returns TMax when there would be positive overflow, and TMin
 * when there would be negative overflow. Saturating arithmetic is commonly used
 * in programs that perform digital signal processing.
 *
 * Your function should follow the bit-level integer coding rules (page 128).
 */

#define TMin INT_MIN
#define TMax INT_MAX

int saturating_add(int x, int y){
	int w = sizeof(int) << 3;
	int mask = 1 << w -1;
	int posmask = (mask^x)&&(mask^y)&&((x+y)&mask);
	int negmask = (mask&x)&&(mask&y)&&((x+y)^mask);
	int sum = x+y;
	(posmask &&(sum=TMax))||(negmask &&(sum=TMin));
	return sum;
}

int main(){
	printf("saturating_add(0x7fffffff,0x7fffffff)=%x\n",saturating_add(0x7fffff00,0x7fffff00));
	printf("saturating_add(0x80000000,0x80000000)=%x\n",saturating_add(0x800000ff,0x800000ff));
	printf("saturating_add(0x12005600,0x00340078)=%x\n",saturating_add(0x12005600,0x00340078));
	return 0;
}
