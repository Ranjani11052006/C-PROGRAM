#include<stdio.h>
int main()
{
	char c;
	printf("alphabet");
	scanf("%c",&c);
	if( (c>='A'&&c<='Z')||(c>='a' && c<='z') )
	{
		if((c=='a'||c=='e'||c=='i'||c=='o'||c=='u') && (c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))
	    {
	    	printf("vowel");
		}
		else
		{
			printf("consonant");
		}
    }
    else
	{
		printf("invalid");
	}
}
