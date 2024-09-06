#include<stdio.h>
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
void sort(int arr[],int n)
{
	int i,j,min;
	for(i=0;i<n;i+=1)
	{
		min=i;
		for(j=i+1;j<n;j+=1)
		{
			if(a[j]<a[min])
			    min=j;
	}
	}
}int main()
{
	int n;
	int arr[100],i,j;  
	printf("Enter the Size:");
	scanf("%d",&n);
	for(i=0;i<n;i+=1)
	{
		printf("Enter Arra elem :");
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
	for(i=0;i<n;i+=1)
	   printf("%d",arr[i]);

}
