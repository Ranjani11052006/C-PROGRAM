#include<stdio.h>
int main()
{
	float r;
	printf("The radius of the sphere;");
	scanf("%f",&r);
	float pi = 3.14;
	float volume = 4*pi*(r*r*r);
	printf("Volume of the sphere = %f",volume);
	
}
