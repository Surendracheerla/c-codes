#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n =5;
	int *ptr;
	ptr = (int *)malloc(n*sizeof(int));
	printf("%d\n",ptr);
	printf("%d\n",ptr+1);
	return 0;
}
