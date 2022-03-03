#include<stdio.h>
int main()
{
	int a, b, c, big;
	printf("\n Enter three number for a, b, c\n");
	scanf("%d%d%d",&a,&b,&c);
	big=a>b?(a>c?a:c):(b>c?b:c);
	printf("Greatest among the three number = %d",big);
	return 0;
}
