/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_92.c
 *   Created on: Feb 14, 2017 1:03:52 AM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/


/* problem:
 * Following the bit-Level floating-point coding.rules, impletment the function with
 * the following prototype:
 * // Compute -f. If f is NaN, then return f.
 * float_bits float_negate(float_bits f);
 * For floating-point number f, this function computes -f. If f is NaN, your
 * function should simply return f.
 * Test your function by evaluating it for all 2^32 values of argument f and-comparing
 * the result to what would be obtained using your machine's floating-point
 * operations.
 */

#include <stdio.h>
#include <stdint.h>

typedef unsigned float_bits;

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

float u2f(unsigned x){
	 unsigned sign = x>>31;
	 unsigned exp = x>>23 & 0xff;
	 unsigned frac = x & 0x7FFFFF;
	 printf("%d,%f,%d,%d\n",exp,1+((float)frac/(2^23)),2^(exp-127),exp-127);
	 if(exp==0){
		 return (2^(-126))*(float)frac/(2^23);
	 }
	 else if(exp== 0xff && frac){
		 return x;
	 }
	 else{
		 return (2^(exp-127))*(1+((float)frac/(2^23)));
	 }
}

float_bits float_negate(float_bits f){
	 unsigned sign = f>>31;
	 unsigned exp = f>>23 & 0xff;
	 unsigned frac = f & 0x7FFFFF;
	 if((exp==255)&&frac){
		 return f;
	 }
	return (!sign<<31)|(f&0x7fffffff);
}

int main(){
	float_bits f1 = f2u(1.0);
	float_bits f2 = f2u(-1.0);
	printf("float_negate(1.0)=%x %x %f\n",f1,float_negate(f1),u2f(float_negate(f1)));
	printf("float_negate(-1.0)=%x %x %f\n",f2,float_negate(f2),u2f(float_negate(f2)));
	return 0;
}
