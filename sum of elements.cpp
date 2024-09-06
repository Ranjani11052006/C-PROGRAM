#include<stdio.h>
int main()
{
	int array[100],sl]]um=0,size,i;
	printf("Enter the size");
	scanf("%d",&size);
	for(i=0;i<size;i+=1)
	{
	    scanf("%d",array[i]);
    }
	for(i=0;i<size;i+=1)
	{
		sum=sum+array[i];
	}
	printf("the sum of elements in an array;%d",sum);
	return 0;
}

