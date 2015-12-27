#include <stdio.h>

//In little endian format,the least significant byte(LSB) is the lowest address
//In big endian format,the most significant byte(MSB) is at the lowest address
int main()
{
	unsigned int endian = 0x00000001;
	char *p = (char *)&endian;
	printf("%d",*p);
	if (*p==0x00) printf("this is little endian\n");
	else printf("this is big endian\n");
	return 0;
}