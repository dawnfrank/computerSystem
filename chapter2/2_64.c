/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_64.c
 *   Created on: Nov 13, 2016 1:52:16 PM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

/* problem:
 *	Write code to implement the following function:
 *	/* Return 1 when any odd bit of x equals 1; 0 otherwise.
 *	  Assume w=32 *'/ ,•
 *	int any_odd_one(unsigned x);
 *
 *	Your function should follow the bit-level integer coding rules (page 128),
 *	except that you may assume that data type int has w = 32 bits.
 */

#include <stdio.h>

int any_odd_one(unsigned x){
	x &= x>>16;
	x &= x>>8;
	x &= x>>4;
	x &= x>>2;
	x &= 1;
	return x;
}

int main(){
	printf("any_odd_one(0x77777777):%x\n",any_odd_one(0x77777777));
	printf("any_odd_one(0x7777ff77):%x\n",any_odd_one(0x7777ff77));
	printf("any_odd_one(0x00777777):%x\n",any_odd_one(0x00777777));
	printf("any_odd_one(0x00774777):%x\n",any_odd_one(0x00774777));
	return 0;
}
