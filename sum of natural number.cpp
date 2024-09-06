#include<stdio.h>
int main()
{
	int i,s,n;
    printf("Enter n value");
    scanf("%d",&n);
    i=1;
    s=0;
    while (i<=n)
    {
    	s=s+i;
    	i+=1;
	}
	{
		printf("sum of %d numbers:%d",n,s);
	}
}
