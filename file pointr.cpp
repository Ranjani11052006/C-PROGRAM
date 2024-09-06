#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *fptr1,*fptr2;
	fptr1 = fopen("BMEBT.txt","r");
	fptr2 = fopen("Bio.txt","w");
	char ch;
	int c=0;
	printf("%d",ftell(fptr1));
	ch = fgetc(fptr1);
	while(ch!=EOF)
	{
		fprintf(fptr2,"%c",ch);
		ch = fgetc(fptr1);
	}
    printf("%d",ftell(fptr1));
    fclose(fptr2);
	fclose(fptr1);
}
