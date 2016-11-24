/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_75.c
 *   Created on: Nov 24, 2016 12:41:15 AM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>

/* problem:
 * Suppose we want to compute the complete 2w-bit representation of x · y, where
 * both x and y are unsigned, on a machine for which data type unsigned is w bits.
 * The low-order w bits of the product can be computed with the expression x*y, so
 * we only require a procedure with prototype
 *
 * 	unsigned unsigned_high_prod(unsigned x, unsigned y);
 *
 * that computes the high-order w bits of x · y for unsigned variables .
 * 	We have access to a library function with prototype
 *
 * 	int signed_high_prod(int x, int y)
 *
 * that computes the high-order w bits of x · y for the case where x and y are in two's-complement
 * form. Write code ,calling this procedure to implement the function
 * for unsigned arguments. Justify the correctness of your solution.
 * 	Hint: Look at the relationship between the signed product x · y and the unsigned
 * product x' · y' in the derivation of Equation 2.18,
 */

int signed_high_prod(int, int);

unsigned unsigned_high_prod(unsigned x, unsigned y){
	unsigned w = sizeof(int) << 3;
	unsigned mask = 1 << w - 1;
	unsigned x_left = x >> w -1;
	unsigned y_left = y >> w -1;
	return signed_high_prod(x,y)+x_left*y+y_left*x;
}

int main(){
	printf("unsigned_high_prod(0xffffffff,0x00000002)=%x\n",unsigned_high_prod(0xffffffff,0x00000002));
	printf("unsigned_high_prod(0xffffffff,0xffffffff)=%x\n",unsigned_high_prod(0xffffffff,0xffffffff));
	printf("unsigned_high_prod(0xffffffff,0x00000080)=%x\n",unsigned_high_prod(0xffffffff,0x00000080));
	return 0;
}
