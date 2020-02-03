#include<stdio.h>
#include<conio.h>
struct distance
{
	int kilometers;
	int meters;
}d1,d2,sum,sum1;
struct distance totaldis(struct distance d1, struct distance d2);
void main()
{
	clrscr();
	printf("1st distance:\n");
	printf("enter the distance in meters::");
	scanf("%d",&d1.meters);
	printf("2nd distance:\n");
	printf("\nenter the second distance in meters::");
	scanf("%d",&d2.meters);
	sum=totaldis(d1,d2);
	printf("total distance:\n");
	printf("%d km\n%d meters",sum.kilometers,sum.meters);
	getch();
}
struct distance totaldis(struct distance d1,struct distance d2)
{
	struct distance add;
	add.kilometers=0;
	add.meters=d1.meters+d2.meters;
	if(add.meters>1000)
	{
		add.kilometers=add.meters/1000;
		add.meters=add.meters%1000;
	}
	return add;
}