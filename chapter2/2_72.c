/*************************************************
 * This is solution for CSAPP(Computer Systems A Programmer's perspective 3rd)
 * 
 *     Question: 2_72.c
 *   Created on: Nov 22, 2016 12:38:07 AM 
 *       System: win7_x64(little-endian)
 *  Enviornment: gcc 5.1.0(tdm64-1)
 * Optimization: Og
 *       Author: tianzigeng
 *       E-mail: dawn_frank@qq.com
 *************************************************/

#include <stdio.h>
#include <stdint.h>

/* problem:
 * You are given the task of writing a function that will copy an integer val into a
 * buffer buf, but it should do so only if enough space is available in the buffer.
 * Here is the code you write:
 *
 * // Copy integer into buffer if space is available
 * // WARNING: The following code is buggy
 * void copy_int(int val, void *buf, int maxbytes) {
 * 		if (maxbytes-sizeof(val) >= 0)
 * 			memcpy(buf, (void•) &val, sizeof(val));
 * }
 *
 *
 * This code makes use of the library function memcpy. Although its use is a bit
 * artificial here, where we simply want to copy an int, it illustrates an approach
 * commonly used to copy larger data structures.
 * You carefuhy test the code and discover that it always copies the value to the
 * buffer, even when maxbytes is too small.
 * A. Explain why the conditional test in the code always succeeds. Hint: 'The
 * sizeof operatoi returns a value of type size_t.
 * B. Show how you can rewrite-.the conditional test to make it work properly.
 */

//A  size_t is unsigned   so maxbytes-sizeof(val) always greater or equal than zero

void copy_int(int val, void *buf, int maxbytes) {
	if (maxbytes >= sizeof(val))
		memcpy(buf, (void*) &val, sizeof(val));
}
