#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n =5;
	int *ptr;
	ptr = (int *)malloc(n*sizeof(int));
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d %d\n",ptr+i,*(ptr+i));
	}
	free(ptr);
	for(i=0; i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0; i<n;i++)
	{
		printf("%d %d\n",ptr+i, *(ptr+i));
	}
	
}
