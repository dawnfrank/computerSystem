#include <stdio.h>
#include <stdint.h>

#define False 0
#define True 1

#define GET_ARRAY_LEN(array,len) {len = (sizeof(array) / sizeof(array[0]));}

typedef unsigned char bool;
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start,int len)
{
	int i;
	printf("show_bytes=");
	for (i=0;i<len;i++)
		printf("%.2x",start[i]);
	printf("\n");

}

void show_Binary(int num)
{
	int binArry[32]={0};
	int arryLen;
	GET_ARRAY_LEN(binArry,arryLen)

	int i =0;
	int unsignednum = abs(num);
	while(unsignednum!=0)
	{
		binArry[i] = unsignednum%2;
		unsignednum/=2;
		i++;
	}

	bool isPass = False;
	for(i=arryLen-1;i>=0;i--)
	{
/*		if(binArry[i]==0 && isPass==False) continue;

		if(isPass == False)
		{
			printf("show_Binary=");
			isPass=True;
			i+=7-(i%8);
		}*/

		if(num>0) printf("%d",binArry[i]);
		else printf("%d",1-binArry[i]);

		if(i%8==0) printf(" ");
	}
	printf("\n");
}

int fun1(unsigned word)
{
	return (int)((word<<24)>>24);
}

int fun2(unsigned word)
{
	return ((int)word<<24)>>24;
}

float sum_elements(float a[],unsigned length)
{
	int i;
	float result = 0;
	
	for(i = 0;i <= 0xffff;i++) result += a[i];
	return result;
}
  
int main()
{
	int32_t a=6; //C99 Standard defines: unitN_t or intN_t can define bytes, most of N in (8 16 32 64)

	short x = 12345;
	short mx = -x;
	show_bytes((byte_pointer)&x,sizeof(short));
	show_Binary(x);
	show_bytes((byte_pointer)&mx,sizeof(short));
	show_Binary(mx);

	int *b;
	int c=6;
	b=&c;
	printf("b=%d &b=%d *b=%d\n",b,&b,*b);
	show_Binary(*b);

	unsigned u = 4294967295u;
	int tu = (int)u;
	show_Binary(u);
	show_Binary(tu);
	printf("u=%u,tu=%d\n",u,tu);
	
	show_Binary(-2147483647);
	show_Binary(-2147483648);
	printf("%d\n",(int)2147483648U);
	
	printf("%x\n",fun1(0x000000C9));
	printf("%x\n",fun2(0x000000C9));
	
	float d[2]={0};
	sum_elements(d,0);

	return 0;
}
