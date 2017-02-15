/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_89.c
 *   Created on: Dec 11, 2016 3:31:47 PM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

/* problem:
 * 	We are running programs on a machine where values of type int have a 32-
 * bit two's-complement representation. Values of type float use the 32-bit IEEE
 * format, and values of type double use the 64-bit IEEE format.
 *	We generate arbitrary integer values x, y, and z, and convert them io values
 * of type double as follows:
 *
 * // Create some arbitrary values
 * int x =random();
 * int y =random();
 * int z =random();
 * // Convert to double
 * double dx = (double) x;
 * double dy = (double) y;
 * double dz = (double) z;
 *
 * 	For each of the following C expressions, you are to indicate whether or
 * not the expression always yields 1. If it always yields 1, describe the underlying
 * mathematical principles. Otherwise, give an example ·of arguments that make
 * it yield 0. Note that you cannot use an IA32 machine running ace to test your
 * answers, since it woul,d use the 80-bit extended-precision representation for both
 * float and double.
 * A. (float) x == (float) dx
 * B. dx - dy == (double) (x-y)
 * C. (dx + dy) + dz== dx + (dy +dz)
 * D. (dx * dy) *dz== dx * (dy *dz)
 * E. dx / dx == dz / dz
 *
 */

//True
bool A(int x,double dx){
	return (float) x == (float) dx;
}

//False,double precision range far more than int
bool B(int x,int y,double dx,double dy){
	return dx - dy == (double) (x-y);
}

//True,double precision range far more than int
bool C(double dx,double dy,double dz){
	return (dx + dy) + dz== dx + (dy +dz);
}

//True intmax 2^32-1   doublemax nearly 2^2046
bool D(double dx,double dy,double dz){
	return (dx * dy) *dz== dx * (dy *dz);
}

//False ,dx or dz == 0
bool E(double dx,double dz){
	return dx / dx == dz / dz;
}


int main(){
	int x = INT_MAX - 1;
	int y = INT_MAX - 1;
	int z = INT_MAX - 1;
	double dx = (double) x;
	double dy = (double) y;
	double dz = (double) z;
	printf("A(x,dx)=%d\n",A(x,dx));
	printf("B(x,y,dx,dy)=%d\n",B(INT_MAX,INT_MIN,INT_MAX,INT_MIN));
	printf("C(dx,dy,dz)=%d\n",C(dx,dy,dz));
	printf("D(dx,dy,dz)=%d\n",D(dx,dy,dz));
	printf("E(dx,dz)=%d\n",E(dx,dz));
	return 0;
}
