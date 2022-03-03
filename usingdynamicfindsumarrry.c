#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	scanf("%d",&n);
	int *ptr;
	ptr = (int *)malloc(n*sizeof(int));
	int i, sum = 0;
	printf("memory before entering value\n");
	for(i=0; i<n; i++)
	{
		printf("%d %d\n",ptr+i,*(ptr+i));
	}
	printf("Enter arry elements\n");
	for(i=0; i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("memory after entering value\n");
	for(i=0; i<n;i++)
	{
		printf("%d %d\n",ptr+i, *(ptr+i));
	}
	for(i=0; i<n;i++)
	{
		sum += *(ptr+i);
	}
	printf("sum of elements of arry is:%d\n",sum);
	free(ptr);
	for(i=0; i<n; i++)
	{
		printf("%d %d\n",ptr+i,*(ptr+i));
	}
}
