/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_79.c
 *   Created on: Nov 26, 2016 6:46:22 PM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>

/* problem:
 * Write code for a function mu13div4 that, for integer argument x, computes 3 *
 * x/4 but follows the bit-level integer coding rules (page 128). Your-code should
 * replicate the fact that the computation 3•x can cause overflow.
 */

int mu13div4(int x){
	int w = sizeof(int) << 3;
	int x_left = x >> (w-1);
	(!x_left&&(x>>=2))||(x_left &&((x=x+3>>2)));
	return x+(x<<1);
}

int main(){
	printf("mu13div4(0x4)=%x\n",mu13div4(0x4));
	printf("mu13div4(0xffffffff)=%x\n",mu13div4(0xffffffff));
	return 0;
}
