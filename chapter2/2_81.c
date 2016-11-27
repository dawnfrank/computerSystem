/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_81.c
 *   Created on: Nov 27, 2016 3:48:08 PM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>

/* problem:
 * Write C expressions to generate the bit patterns that follow, where a^k represents
 * k repetitions of symbol a. Assume a w-bit data type. Your code may cout!lin
 * references to parameters j and k, representing the values of j and k, but uot a
 * parameter representing w.
 * A. 1^(w-k)0^k
 * B. 0^(w-k-j)1^k0^j
 *
 */

int A(int k){
	return ~0 << k;
}

int B(int j,int k){
	return ~(~0 << k) << j;
}


int main(){
	printf("A(8)=%x\n",A(8));
	printf("A(0)=%x\n",A(0));
	printf("B(2,3)=%x\n",B(4,4));
	printf("B(5,5)=%x\n",B(5,5));
	return 0;
}
