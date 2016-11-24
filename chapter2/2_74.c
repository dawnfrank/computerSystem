/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_74.c
 *   Created on: Nov 24, 2016 12:05:17 AM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>

/* problem:
 * Write code for a function with the following prototype;
 *
 * //Determine whether arguments can be subtracted without overflow
 * int tsub_ok(int x, int y)
 *
 * This function should return 1 if the computation x-y does not overflow.
 */

int tsub_ok(int x, int y){
	int w = sizeof(int) << 3;
	int res = x - y;
	return !(((x>>w-1)^(y>>w-1))&&((x>>w-1)^(res>>w-1)));
}

int main(){
	printf("tsub_ok(0x00000001,0x80000000)=%d\n",tsub_ok(0x00000001,0x80000000));
	printf("tsub_ok(0x80000000,0x00000001)=%d\n",tsub_ok(0x80000000,0x00000001));
	printf("tsub_ok(0x80000000,0x80000000)=%d\n",tsub_ok(0x80000000,0x80000000));
	return 0;
}
