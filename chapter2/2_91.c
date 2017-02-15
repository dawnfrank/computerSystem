/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_91.c
 *   Created on: Feb 2, 2017 11:05:39 PM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>

/* problem:
 *	 Around 250 B.C., the Greek mathematician Archimedes proved that 223/71 < π  < 22/7.
 * Had he had access to a computer and the standard library <math.h>, he would have
 * been able to determine that the single-precision floating-point approximation of
 * π has the hexadecimal representation Ox40490FDB. Of course, all of these are just
 * approximations, since π is not rational.
 * 	A. What is the fractional binary number denoted by this floating-point value?
 * 	B. What is the fractional binart representation of 22/7? Hint See Problem 2.83.
 * 	C. At what bit position.(relative to the; binary point) do these two approximations
 * 	to π divergy?
 *
 * 	In the following problems, you will write code to implement floahng:point functions,
 * operating directly on bit-level representations of floating-point numbers.
 * Your code should exactly replicate the conventions for IEEE floating-point operations,
 * including using round-to-even mode when rounding is required.
 *
 * 	To this end, we define data type float_ bi ts to be equivalent to unsigned
 * // Access bit-level representation floating-poNit number
 * typedef unsigned float_bits;
 *
 *	 Rather than using data type float in your code, you1will use float_bits.
 * You may use both int.and unsigned data types, including unsigned and integer
 * constants and operations. You may not use any unions, structs, or arrays. Most
 * significantly, you may not use any floating-point data types, operations, or constants.
 * Instead, your code should perform the' bit manipulati~ns, that implement
 * the specified floating-point operations.
 *
 * 	The following function illustrates the use of these coding rules. For argument
 * f, it returns ±0 if f is denormalized (preserving the sign of f), and returns f
 * otherwise.
 *
 * // If f is denorm, return 0. Otherwise, return f
 *
 * float_bits float_denorm_zero (float_bits f) {
 * 	//Deco~pose bit representation into parts
 * 		unsigned sign = f>>31;
 * 		unsigned exp·= f>>23 & OxFF;
 * 		unsigned frac = f & Ox7FFFFF;
 *		if (exp == 0) {
 * 		// Denormalized. Set fraction to 0
 *			 frac = O;
 * 		}
 *		//Reassemble bits
 *		return (sign << 31) | (exp << 23) | frac;
 *	}
 */

//A: 0|100 0000 0|100 1001 0000 1111 1101 1011 => 2*(1+ 4788187/(2^23))

//B: 0|100 0000 0|100 1001 0010 0100 1001 0010 => 2*(1+4/7)

//C: 0|100 0000 0|100 1001 001

int main(){
	return 0;
}
