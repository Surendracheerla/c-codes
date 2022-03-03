#include<stdio.h>
int main()
{
	int year;
	printf("\n Enter a year");
	scanf("%d",&year);
	if((year %4==0)&&((year %100!=0)||(year %400==0)))
	{
		printf("\nIt is a leap year");
	}
	else
	{
		printf("\nNot a leap year");
	}
	return 0;
}
