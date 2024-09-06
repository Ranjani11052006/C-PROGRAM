#include<stdio.h>
int main()
{
	int i,j,n;
	char a[100];
	printf("Enter the string:");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i+=1);
	n=i;  
	i=0;
	j=n-1;
	while(i<j)
	{
		char t;
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		i+=1;
		j-=1; B        
    }
    printf("%s",a);
}

		
	
