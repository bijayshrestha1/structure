#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
	char name[10];
	int id;
	long salary;
	char dept[10];
	}k[2],temp;
	void main()
	{
		int i=0,j=0,loopCount=2;
		clrscr();
		for(i=0;i<loopCount;i++)
		{
			printf("enter the name\n");
			scanf("%s",&k[i].name);
			printf("enter the department\n");
			scanf("%s",&k[i].dept);
			printf("enter the salary\n");
			scanf("%ld",&k[i].salary);
			printf("enter the id\n");
			scanf("%d",&k[i].id);
		}

		for(i=0;i<=loopCount;i++)
		{
			for(j=i+1;j<loopCount;j++)
			{
			if(k[i].salary<k[j].salary)
			{
				temp=k[i];
				k[i]=k[j];
				k[j]=temp;
			}
			}
		}
		for(i=0;i<loopCount;i++)
		{
			printf("name:%s id:%d salary:%ld dept:%s",k[i].name,
			k[i].id,k[i].salary,k[i].dept);
			printf("\n");
		}
		printf("employee working in computer department:\n");
		for(i=0;i<loopCount;i++)
		{
			if(strcmp(k[i].dept,"computer")==0)
			{
				printf("name:%s id:%d: salary:%d dept:%s",k[i].name,k[i].id,k[i].salary,k[i].dept);
				printf("\n");
				}}
				getch();
				}