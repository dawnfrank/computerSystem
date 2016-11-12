/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_61.c
 *   Created on: Nov 12, 2016 4:06:47 PM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

/* problem:
 *  Write C expressions that evaluate to 1 when the following conditions are true and
 * to 0 when they are false. Assume x is of type int.
 * A. Any bit of x equals 1.
 * B. Any bit of x equals 0.
 * C. Any bit in the least significant byte of x equals 1.
 * D. Any bit in the most significant byte of x equals 0.
 * Your code should follow the bit-level integer coding rules (page 128), with the
 * additional restriction that you may not use equality (==) or inequality (!=) tests.
 */

#include <stdio.h>

int A(int x){
	return !~x;
}

int B(int x){
	return !x;
}

int C(int x){
	return !(~x&0xff);
}

int D(int x){
	return !(x>>8*(sizeof(x)-1));
}

int main(){
	printf("A(0xffffffff)=%d\n",A(0xffffffff));
	printf("A(0x00000000)=%d\n",A(0x00000000));
	printf("B(0xffffffff)=%d\n",B(0xffffffff));
	printf("B(0x00000000)=%d\n",B(0x00000000));
	printf("C(0x001234ff)=%d\n",C(0x001234ff));
	printf("C(0xff123400)=%d\n",C(0xff123400));
	printf("D(0x001234ff)=%d\n",D(0x001234ff));
	printf("D(0xff123400)=%d\n",D(0xff123400));
	return 0;
}
