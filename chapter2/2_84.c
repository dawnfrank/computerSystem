/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_84.c
 *   Created on: Dec 1, 2016 1:09:24 AM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>
#include <stdint.h>

/* problem:
 * Fill in the return value for the following proceaure, which tests whether its first
 * argument is less than or equal to its second. Assume the function f2u returns an
 * unsigned 32-bit number having the same bit representation, as its floating-point
 * argument. You can assume that neither argument is NaN. The two flavors of zero,
 * +0 and -0, are considered equal.
 *	int float_le(float x, float y) {
 * 		unsigned ux = f2u(x);
 *		unsigned uy = f2u(y);
 *
 * 		/• Get the sign bits •/
 *	 	unsigned sx = ux >> 31;
 * 		unsigned sy = uy >> 31;
 *
 * 		/* Give an expression using only ux, uy, sx, and sy •/
 *		 return;
 *	}
 */

unsigned f2u(float x){
	unsigned int is_little_endian=1;
	char *endian = (char *)&is_little_endian;
	if (*endian!=0x01) is_little_endian=0;

	int w = sizeof(x);
	char *p = (char *)&x;
	unsigned res=0;
	if(is_little_endian){
		for(int i=0;i<w;i++){
			res += ((unsigned)*p&0xFF)<<(8*i);
			++p;
		}
	}
	else{
		for(int i=0;i<w;i++){
			res*=8;
			res += ((unsigned)*p&0xFF);
			++p;
		}
	}
	return res;
}

 int float_le(float x, float y) {
	unsigned ux = f2u(x);
	unsigned uy = f2u(y);

	/* Get the sign bits */
	unsigned sx = ux >> 31;
	unsigned sy = uy >> 31;

	/* Give an expression using only ux, uy, sx, and sy */
	 return ((sx^sy)&&sx) || (!(sx^sy)&&((sx&&!((ux-uy)>>31))||(!sx&&((ux-uy)>>31)))) || !((ux<<1)||(uy<<1));
 }

int main(){
	printf("float_le(0.0,-0.0)=%d\n",float_le(0.0,-0.0));
	printf("float_le(-2.5,2.5)=%d\n",float_le(-2.5,2.5));
	printf("float_le(2.5,-2.5)=%d\n",float_le(2.5,-2.5));
	printf("float_le(3.5,4.5)=%d\n",float_le(3.5,4.5));
	printf("float_le(4.5,3.5)=%d\n",float_le(4.5,3.5));
	printf("float_le(-3.5,-4.5)=%d\n",float_le(-3.5,-4.5));
	printf("float_le(-4.5,-3.5)=%d\n",float_le(-4.5,-3.5));
	return 0;
}
