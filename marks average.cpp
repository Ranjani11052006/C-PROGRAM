#include<stdio.h>
int main()
{
	int n;
	printf("Enter the mark:");
	scanf("%d",&n);
	
	if(n>90)
	{
		printf("O grade");
	
	}
	else if(n>80 || n<90)
	{
		printf("A Grade");
	}
	else if(n>70|| n<80)
	{
		printf("B grade");
	}
	else if(n>60|| n<70)
	{
		printf("C Grade");
	}
	else
	{
		printf("D Grade- FAIL");
	}
}
