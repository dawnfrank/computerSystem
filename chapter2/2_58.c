/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_58.c
 *   Created on: Nov 12, 2016 1:48:18 PM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

/* problem:
 *   write a procedure is_little_endian that will return 1 when compiled and run
 * on a little-endian machine, and will return 0 when compiled and run on a big-endian
 * machine. This program should run on any machine, regardless of its word size.
 */

#include <stdio.h>

//In little endian format,the least significant byte(LSB) is the lowest address
//In big endian format,the most significant byte(MSB) is at the lowest address
int is_little_endian(){
	unsigned int endian=1;
	char *p = (char *)&endian;
	if (*p==0x01) return 1;
	return 0;
}

int main(){
	if(is_little_endian()) printf("is_little_endian:True");
	else printf("is_little_endian:False");
	return 0;
}
