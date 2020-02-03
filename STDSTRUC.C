#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int roll_no,age,cmarks;
}s[3];
struct student top(struct student s[],int n);
void main()
{
	int i=0,n=4;
	struct student topper;
	clrscr();
	printf("enter the number of students::");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d student:\n",i+1);
		printf("enter name:");
		scanf("%s",&s[i].name);
		printf("enter roll number:\n");
		scanf("%d",&s[i].roll_no);
		printf("enter age:\n");
		scanf("%d",&s[i].age);
		printf("enter c marks:\n");
		scanf("%d",&s[i].cmarks);
	}
	topper=top(s,n);
	printf("the highest ranker is::\n");
	printf("name::%s\n",topper.name);
	printf("roll number:%d\n",topper.roll_no);
	printf("age:%d\n",topper.age);
	printf("c marks:%d\n",topper.cmarks);
	getch();
}
struct student top(struct student a[], int n)
{
	struct student t;
	int i=0;
	t=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i].cmarks>t.cmarks)
		{
			t=a[i];
		}
	}
	return t;
}