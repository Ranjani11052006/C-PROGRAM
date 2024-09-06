#include<stdio.h>
int main()
{
	int a,b,i,j,c,r,n,ar[100][100],br[100][100],c[100][100];
	printf("Enter the no of rows req in a:");
	scanf("%d",&a);
	printf("Enter the no cols req in a:");
	scanf("%d",&a);
	printf("Enter the no of rows req in b:");
	scanf("%d",&b);
	printf("Enter the no cols req in b:");
	scanf("%d",&b);
	for (i=0;i<r;i+=1)
	{
		for(j=0;j<c;j+=1);
		printf("Enter the val for pos %d%d",i,j);
		scanf("%d",&ar[i][j]);
	}
	for(i=0;j<r;j+=1)
	{
		for(j=0;j<c;j+=1);
		{
			printf("%d\t",ar[i][j]);
		}
		printf("\n");
		}
	}
    return 0;
}
