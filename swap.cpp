#include<stdio.h>
int main()
{
	int a=100,b=200;
	printf("Before swapping :a=%d,b=%d\n",a,b);
	a=a+b;//a=300(100+200)
	b=a-b;//b=200(300-200)
	a=a-b;//a=200(300-100)
	printf("After swapping: a= %d,b=%d\n",a,b);
	return 0;
}
