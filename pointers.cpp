#include<stdio.h>
int main()
{
	int *p,i,sum=0;
	int a[100],n;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i+=1)
	{
	  printf("p+i:%d\t",p+i);
	  scanf("%d",p+i);
	}
	for(i=0;i<n;i+=1)
	{
		printf("%d",a[i]);
		sum=sum+(*(p+1));
	}
	printf("\n%d",*(p+2));
	printf("\n%d",sum);
	return 0;
}
