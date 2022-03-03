#include<stdio.h>
void main()
{
	int a = 1031;
	int *p = &a;
	char *ch = &a;
	printf("%d\n",p);
	printf("%d\n",ch);
	printf("%d\n", *p);
	printf("%d\n", *ch);
}
