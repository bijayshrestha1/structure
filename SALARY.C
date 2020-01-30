#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct emp
{
	char name[20];
	int id,age;
	long int sal;
}x[100],temp;


void main()
{
	int i,j,n;
	clrscr();
	printf("enter range");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter for %d : \n",i+1);
		printf("enter employee id,name,age and salary : \n");
		scanf("%d%s%d%d",&x[i].id,&x[i].name,&x[i].age,&x[i].sal);

	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{

			if(x[i].sal>x[j].sal)
			{
			temp=x[i];
			x[i]=x[j];
			x[j]=temp;
			}
		}
	}
	printf("\n the employee details with the lowest salary is : \n");
	printf("name : %s\nsalary : %d",x[0].name,x[0].sal);

	printf("\n the employee details with the highest salary is : \n");
	printf("name : %s\nsalary : %d\n",x[n-1].name,x[n-1].sal);
	getch();
	}

