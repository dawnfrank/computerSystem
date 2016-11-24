/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_77.c
 *   Created on: Nov 24, 2016 11:37:33 PM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>
#include <stdint.h>

/* problem:
 * Suppose we are given the task of generating code to multiply integer variable x
 * by various different constant factors K. To be efficient, we want to use only the
 * operations+,-, and <<. For the following values of K, write C expressions to
 * perform the multiplication using at most three operations per expression.
 *
 *	A. K = 17
 *	B. K = -7
 *	C. K = 60
 *	D. K = -112
 */

int A(int x){
	return (x<<4) + x;
}

int B(int x){
	return x - (x << 3);
}

int C(int x){
	return (x<<6) - (x<<2);
}

int D(int x){
	return (x<<4) - (x<<7);
}

int main(){
	printf("A(10)=%d\n",A(10));
	printf("B(10)=%d\n",B(10));
	printf("C(10)=%d\n",C(10));
	printf("D(10)=%d\n",D(10));
	return 0;
}
