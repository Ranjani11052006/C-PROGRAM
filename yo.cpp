#include<stdio.h>
int main()
{
	FILE *fptr;
	char a[100] ;
	fptr = fopen("yo.txt","r");
	fscanf(fptr,"%[^o]%*s",a);
	printf("%s",a);
	fclose(fptr);
}
