/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_63.c
 *   Created on: Nov 13, 2016 2:57:19 AM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

/*
	Fill in code for the following C functions. Function srl performs a logical right
	shift using an arithmetic right shift (given by value xsra), followed oy other operations
	not including right shifts or division. Function sra performs an arithmetic
	right shift using a logical right shift (given oy value xsrl), :followed by other
	operations not including right shifts or division. You may use the computation
	8•sizeof (int) to determine w, the number of bits in data type int. The shift
	amount k can range from 0 to w - 1.

	unsigned srl(unsigned x, int k) {
	//Perfrom shift arithmetically
	unsigned xsra = (int) x >> k;
	}


	int sra(int x, int k) {
	//Perfrom shift logically
	int xsrl = (unsigned) x >> k;
	}

 */
#include <stdio.h>

unsigned srl(unsigned x, int k) {
	unsigned xsra = (int) x >> k;
	unsigned w = sizeof(unsigned)*8;
	unsigned mask = ~(~0 <<w-k);
	unsigned ihead = xsra & 1<<(w-k-1);
	ihead&&(xsra&=mask);
	return xsra;
}

int sra(int x, int k){
	int xsrl = (unsigned) x >> k;
	unsigned w = sizeof(int)*8;
	int mask = ~0 << w - k;
	unsigned ihead = xsrl & 1<<(w-k-1);
	ihead &&(xsrl |= mask);
	return xsrl;
}


int main(){
	printf("srl(0xfffffff0,8):%x\n",srl(0xfffffff0,8));
	printf("srl(0x0ffffff0,8):%x\n",srl(0x0ffffff0,8));
	printf("sra(0xfffffff0,8):%x\n",sra(0xfffffff0,8));
	printf("sra(0x0ffffff0,8):%x\n",sra(0x0ffffff0,8));
	return 0;
}
