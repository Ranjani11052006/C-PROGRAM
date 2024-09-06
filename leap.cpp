#include<stdio.h>
int main()
{
	int yy;
	printf("Enter the year:");
	scanf("%d",&yy);
	
	if ((yy%4==0&& yy%100!=0)||(yy%400==0))
	{
		printf(" The entered year is leap year");
	}
	else
	{
		printf("The entered yr is not leap");
	}
	return 0;
}
