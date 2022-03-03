#include<stdio.h>
void main()
{
	int a =10;
	void *p;
	p = &a;
	printf("%d\n",p);
	printf("%d\n",*((int *)p));
}
