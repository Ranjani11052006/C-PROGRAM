#include<stdio.h>
int main()
{
	int temp;
	printf("Enter the temperature");
	scanf("%d",&temp);
	
	if (temp<0)
	{
		printf("Freezing temperature");
	}
	else if(temp>0 && temp<10)
	{
		printf("Very cold weather");
	}
	else if(temp>10 && temp<20)
	{
		printf("cold weather");
	}
	else if(temp>20 && temp<30)
	{
		printf("normal");
	}
	else if(temp>30 && temp<40)
	{
		printf("its hot");
	}
	else
	{
		printf("Its very hot");
	}
}
