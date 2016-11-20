/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_67.c
 *   Created on: Nov 13, 2016 5:04:57 PM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

/* problem:
 *  You are given the task of writing a procedure int_size_is_32 () that yields 1
 * 	when run on a machine for which an int is 32.bits, ahd yields 0 otherwise. You are
 * 	not allowed to use the sizeof operator. Here is a first attempt
 *
 * 	1 //The following code does not run properly on some machines
 * 	2 int bad_int_size_is_32() {
 * 	3 //Set most significant bit (msb) of 32-bit machine
 * 	4 int set_msb = 1 << 31;
 * 	5 //Shift past msb of 32-bit word
 * 	6 int beyond_msb = 1 << 32;
 * 	7
 * 	B  // set_msb is nonzero when word size >= 32
 * 	9  // beyond_msb is zero when word size <= 32
 * 	10 return set_msb && !beyond_msb;
 * 	11 }
 *
 * 	When compiled and run on a 32-bit SUN SPARC, however, this procedure
 * 	returns 0. The following compiler message gives us an indication of the problem:
 *
 * 	warning: left shift count>= width of type
 *
 * 	A. In what way does our code fail to comply with the C standard?
 * 	B. Modify the code to run properly on any machine for'which data type int is at least 32 bits,
 * 	C. Modify the code to run properly on any machine for which data type int is at least 16 bits.
 */


#include <stdio.h>
#include <stdlib.h>

//A: If the value of the right operand is negative or is greater than or equal to the width of the promoted left operand,
//	the behavior is undefined(Committee Draft — April 12, 2011   ISO/IEC 9899:201x P94)

int B(){
	int set_msb = INT_MIN;
	int beyond_msb = 2 << 31;
	return set_msb && !beyond_msb;
}

int C(){
	int set_msb = INT_MIN;
	int beyond_msb = 1 << 15;
	beyond_msb <<= 15;
	 beyond_msb <<= 2;
	return set_msb && !beyond_msb;
}


int main(){
	return 0;
}
