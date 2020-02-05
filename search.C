#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student
{
	int id;
	char name[20];
	char faculty[50];
};
void main()
{
	struct student st[3];
	int i,choice,srch;
	char srh[50],srcch[50];
	while(1)
	{
	clrscr();
	printf("menu:\n");
	printf("\n1.add record\n2.search by id \n3.search by name\n4.search by faculty\n5.exit");
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		clrscr();
		printf("enter record of 3 students:\n");
		for(i=0;i<3;i++)
		{
			printf("for student %d:\n",i+1);
			printf("enter student_id:");
			scanf("%d",st[i].id);
			printf("enter student name:");
			scanf("%d",st[i].name);
			printf("enter faculty of student:");
			scanf("%s",st[i].faculty);
		}
		break;
		//search by id
		case 2:
		clrscr();
		printf("\n enter student_id to search:");
		scanf("%d",&srch);
		printf("name\tid\tfaculty\n");
		for(i=0;i<3;i++)
		{
			if(srch==st[i].id)
			{
			printf("%s\t%d\t%s\n",st[i].name,st[i].id,st[i].faculty);
			}
		}
		break;
		//search by name
		case 3:
		clrscr();
		printf("enter student name to search:");
		scanf("%s",&srh);
		for(i=0;i<3;i++)
		{
			if(strcmp(st[i].name,srh)==0);
			{
			printf("name\tid\tfaculty\n");
			printf("%s\t%d\t%s\n",st[i].name,st[i].id,st[i].faculty);
			}
		break;
		//search by faculty
		case 4:
		clrscr();
		printf("\nenter student faculty to search:");
		scanf("%s",&srcch);
		printf("name\tid\tfaculty\n");
		for(i=0;i<=3;i++)
		{
			if(strcmp(st[i].faculty,srcch)==0)
			{
			printf("%s\t%d\t%s\n",st[i].name,st[i].id,st[i].faculty);
			}
		getch();
		break;
		case 5:
		exit(0);
		}
		}
	getch();
	}
	}
	}
