/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_86.c
 *   Created on: Dec 10, 2016 10:15:01 PM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>

/* problem:
 * Intel-compatible processors also support an "extended-precision" floating-point
 * format with an 80-bit word divided into a sign bit, k = 15 exponent bits, a single
 * integer bit, and n = 63 fraction bits. The integer bit is an explicit copy of the
 * implied bit in the IEEE floating-point representation. That is, it equals 1 for
 * normalized values and 0 for denormalized values. Ftll in the following table giving
 * the approximate values of some "interesting" numbers in this format:
 *
 * 														Extended precision
 * Description							Value 				Decimal
 * Smallest positive denormalized		_______				_______
 * Smallest positive normalized			_______				_______
 * Largest normalized					_______				_______
 *
 * This format can be used in C programs compiled for Intel-compatible machines
 * by declaring the data to be of type long double. However, it forces the
 * compiler to generate code based on the legacy 8087 floatjng-poirit instructions.
 * The resulting program will most likely run inuch slower than would be the case
 * for data type float or double.
 */


// Smallest positive denormalized	Value:2^(2-(2^14)-63)
// Smallest positive normalized		Value:2^(2-(2^14))
// Largest normalized				Value:2^(2^14)*(2^(-63))*((2^64)-1)

int main(){
	return 0;
}
