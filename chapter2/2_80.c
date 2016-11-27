/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_80.c
 *   Created on: Nov 27, 2016 3:05:40 PM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>

/* problem:
 * Write code for a function threefourths that, for integer argument x, computes
 * the value of ¾x, rounded toward zero. It should not overflow. Your function should
 * follow the bit-level integer coding rules (page 128).
 */

int threefourths(int x){
	int w = sizeof(int) << 3;
	int x_left = x >> (w-1);
	(!x_left&&(x>>=2))||(x_left &&((x=x+3>>2)));
	return x+(x<<1);
}

int main(){
	printf("threefourths(0x4)=%x\n",threefourths(0x4));
	printf("threefourths(0xffffffff)=%x\n",threefourths(0xffffffff));
	return 0;
}
