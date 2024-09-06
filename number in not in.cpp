#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);

	if(n%3==0 && n%5==0)
	{
		printf("\n The number is divide by 5 and 3");
	}
	else
	{
    	printf("\n The number is not divide by 5 and 3");
	}
    return 0;
}
