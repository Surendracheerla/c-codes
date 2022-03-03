#include<stdio.h>
int main()
{
	float c,f, ce,fa;
	printf("\n Enter a celsius to convert to fahrenheit");
	scanf("%f",&c);
	fa=(1.8)*c+32;
	printf("\n%.2f celsius = %.2f fahrenheit",c,fa);
	printf("\n Enter a fahrenheit to convert to celsius");
	scanf("%f",&f);
	ce=(f-32)/1.8;
	printf("\n%.2f fahrenheit  = %.2f celsius",f,ce);
	return 0;
}
