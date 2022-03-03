#include<stdio.h>
int main()
{
	char str1[100], str2[100];
	scanf("%s%s",str1, str2);
	int i;
	for(i=0;str1==str2&&str2==str1;);
	if(str1==str2)
	{
		printf("same");
	}
	else
	{
		printf("not same");
	}
}
