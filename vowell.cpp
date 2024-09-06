#include<stdio.h>
int main()
{
	char c;
	printf("Enter the alphabet:");
	scanf("%c",&c);
    
	if(c>='a' && c<='z') || (c>='A'||c<='Z')
	{
	
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
		{
        	printf(" is vowel");
		}
		else
		{
			printf("is consonant");
		}
	}
	else
	{
		printf("invalid input.\n");
	}
}
