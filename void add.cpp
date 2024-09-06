#include<stdio.h>
int fact(int n);
main()
{
	printf("%d",fact(2));
	return 0;
}
int fact(int n)	
{
	if(n==0)
	   return 0;
	else
	return n+fact(n-1);	
}
