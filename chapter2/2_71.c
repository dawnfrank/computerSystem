/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_71.c
 *   Created on: Nov 21, 2016 12:17:03 AM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>
#include <stdint.h>

/* problem:
 * you just started working for a company that is implementing a set of procedures
 * to operate on a data structure where 4 signed bytes are packed into a 32-bit
 * unsigned. Bytes within the word are numbered from 0 (least significant) to 3
 * (most significant). You have been assigned the task of implementing a function
 * for a machine using two's-complement arithmetic and arithmetic right shifts with
 * the following prototype:
 * //Declaration of data type where 4 bytes are packed
 * //into an unsigned
 * typedef unsigned packed_t;
 * // Extract byte from word. Return as signed integer
 * int xbyte(packed_t word, int bytenum);
 * That is, the function will extract the designated byte and sign extend it to be
 * a 32-bit int.
 * Your predecessor (who was fired for incompetence) wrote the following code:
 * //Failed attempt at xbyte
 * int xbyte(packed_t word, int bytenum)
 * {
 *		return (word>> (bytenum << 3)) & 0xFF;
 * }
 * A. What is wrong with this code?
 * B. Give a correct implementation of the function that uses only left and right
 * shifts, along with one subtraction.
 */

//A:return value should sign extend

typedef unsigned packed_t;
int xbyte(packed_t word, int bytenum){
	return ((word>> (bytenum << 3)) & 0xFF) - (word>> (bytenum << 3) >> 7 << 31 >> 23);
}


int main(){
	printf("xbyte(0x1234ff78,0)=%x\n",xbyte(0x1234ff78,0));
	printf("xbyte(0x1234ff78,1)=%x\n",xbyte(0x1234ff78,1));
	return 0;
}
