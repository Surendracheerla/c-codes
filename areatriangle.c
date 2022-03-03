#include<stdio.h>
int main()
{
	int a, b, c, s;
	float area;
	printf("\nEnter the three  number for a,b and c");
	scanf("%d%d%d",&a,&b,&c);
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\nArea of triangle = %f",area);
	return 0;
	
}
