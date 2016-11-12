/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_62.c
 *   Created on: Nov 13, 2016 1:53:56 AM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

/* problem:
 * Write a function int_shifts_are_arithmetic() that yields 1 when run on a
 * machine that uses arithmetic right shifts for data type int and yields 0 otherwise.
 * Your code should work on a machine with any word size. Test your code on several
 * machines.
 */

#include <stdio.h>

int int_shifts_are_arithmetic(){
	return !~(~0>>1);
}

int main(){
	printf("int_shifts_are_arithmetic:%d\n",int_shifts_are_arithmetic());
	return 0;
}
