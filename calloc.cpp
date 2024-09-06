#include<stdio.h>
#include<stdlib.h>
struct stud{
	char name[20];
	int rollno;
	long int phoneno;
};
typedef struct stud st;
int main()
{
	st*studen;
	studen= (st*)malloc(sizeof(st));
	studen->phoneno=8270892035;
	studen->rollno=789;
	gets(studen->name);
	printf("phone no:%lld\n",studen->phoneno);
	printf("Roll no:%d\n",studen->rollno);
	printf("Name    :%s",studen->name);
	printf("%d",sizeof(studen));
}
