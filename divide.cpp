#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	
	if(n%3 ==0 && n%5==0)
	{
		printf("\nThe number divisible by 3 and 5");
	}
    else{
        printf("\nThe number is not divisible by 3 and 5");
    }
}
