/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_68.c
 *   Created on: Nov 20, 2016 7:48:03 AM 
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
 * //Mask with least signficant n bits set to 1
 * //Examples: n = 6 --> Ox3F, n = 17 --> Ox1FFFF
 * //Assume 1 <= n <= w
 *
 *int lower_one_mask(int n);
 *Your function should follow the bit-level integer coding rules (page 128). Be
 *careful of the case n = w.
 */

int lower_one_mask(int n){
	return ~(~0<<n-1<<1);
}

int main(){
	printf("lower_one_mask(6)=%x\n",lower_one_mask(6));
	printf("lower_one_mask(17)=%x\n",lower_one_mask(17));
	printf("lower_one_mask(32)=%x\n",lower_one_mask(32));
	return 0;
}
