/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_60.c
 *   Created on: Nov 12, 2016 2:16:51 PM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

/* problem:
 *  Suppose we number the bytes in a w-bit word from 0 (least significant) to w/8 - 1
 *	(most significant). Write code for the following C function, which will return an
 *	unsigned value in which_ byte i of argument x has been replaced by byte b:
 *	unsigned replace_byte(unsigned x, int i, unsigned char b);
 *
 *		-Here are some examples showing how the function should work:
 *
 *	replace_byte(Ox12345678, 2, OxAB) --> Ox12AB5678
 *	replace_byte(Ox12345678, O, OxAB) --> Ox123456AB
 */

#include <stdio.h>

unsigned replace_byte(unsigned x, int i, unsigned char b){
	unsigned res = x;
	char *p = (char*)&res + i;
	*p = b;
	return res;
}

int main(){
	unsigned x = 0x12345678;
	printf("replace_byte(Ox12345678, 2, OxAB):%x\n",replace_byte(x,2,0xAB));
	printf("replace_byte(Ox12345678, 0, OxAB):%x\n",replace_byte(x,0,0xAB));
	return 0;
}
