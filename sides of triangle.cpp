#include<stdio.h>
int main()
{
	float s1,s2,s3;
	printf("Enter the lengths of the triangle");
	scanf("%f %f %f",&s1,&s2,&s3);
	if(s1==s2 && s2==s3)
	{
	   printf("equilateral triangle");
	}
	else if(s1==s2||s2==s3||s3==s1)
	{
		printf("isosceles triangle");
	}
	else
	{
		printf("scalene triangle");
	}
}
