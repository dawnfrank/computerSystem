#include <stdio.h>

/*int tadd_ok(int x,int y)
{
	int result;
	result = x+y;
	if(result>=0 && result<min(x,y)) return 1;
	
	if(result<0 && result>max(x,y)) return 1;
	
	return result;
	
}*/

int tadd_ok1(int x,int y)
{
	int sum = x+y;
	printf("tadd_ok1,%d %d %d %d %d\n",sum,x,y,sum-x,sum-y);
	return (sum-x==y)&&(sum-y==x);
}

int tsub_ok(int x,int y)
{
	return tadd_ok1(x,-y);
}

int main()
{
//	int result1,result2,result3,result4,result5,result6,result7,result8;
/*	result1=tdd_ok(0xffffffff,0x123);
	result2=tdd_ok(0xffffffff,0x123);
	result3=tdd_ok(0xffffffff,0x123);
	result4=tdd_ok(0xffffffff,0x123);
	printf("%d %d %d %d",result1,result2,result3,result4);*/
	
/*	result5 = tsub_ok(0xffffffff,0x123);
	result6 = tsub_ok(0x7fffffff,0x123);
	result7 = tsub_ok(0x123,0xffffffff);
	result8 = tsub_ok(0x123,0x7fffffff);
	printf("%d %d %d %d",result5,result6,result7,result8);*/
	
	int a,b;
	a=0xffffffff;
	b=1;
	printf("%p,%p\n",&a,&b);
	printf("%p %d,%p %d\n",a-100,a-100,b,b);
	printf("%p,%p\n",&a,&b);
	
	return 0;
}