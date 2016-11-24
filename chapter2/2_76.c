/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_76.c
 *   Created on: Nov 24, 2016 10:43:57 PM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>
#include <stdint.h>

/* problem:
 * The library function calloc has the following declaration:
 *
 * void *calloc(size_t nmemb, size_t size);
 *
 *   Accordilig to the library documentation, "The calloc function allocates memory
 * for an array of nmemb elements of size bytes each. The memory is set to zero. If
 * nmemb or size is zero,the cal1oc returns NULL."
 *   Write an implementation of calloc that performs the allocation by a call to
 * malloc and sets the memory to zero via memset. Your code should not have any
 * vulnerabilities due to arithmetic overflow, and it should work correctly regardless
 * of the number of bits used to represent data of type size_ t.
 *   As a reference, functions malloc and memset have the following declarations
 * void •malloc (size_ t size);
 * void *memset(void *s, int c, size_t n);
 */

void *calloc(size_t nmemb, size_t size){
	void *p = malloc(nmemb*size);
	p = memset(p,0,nmemb*size);
	return p;
}

int main(){
	return 0;
}
