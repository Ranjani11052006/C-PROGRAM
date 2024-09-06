#include<stdio.h>
#include<stdlib.h>
struct stud{
	char name[20];
	int rollno;
	long int phoneno;
};
int main()
{
	int *ptr;
	int n,i;
	printf("Enter N:");
	scanf("%d",&n);
	ptr = (int*)calloc(n,sizeof(int));
	for(i=0;i<n;i+=1)
	   scanf("%d",ptr+i);
	for(i=0;i<n;i+=1)
	    printf("%d",*(ptr+i));
}
