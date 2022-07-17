//Write a program in C to find the Factorial of a number using recursion
#include<stdio.h>
int facto(int);
int main(void)
{
	int num,fact;
	printf("Enter integer:");
	scanf("%d",&num);
	fact=facto(num);
	printf("Factorial:%d",fact);
}
int facto(int x)
{
	int fact;
	if(x==1)
	return 1;
	else
	{
		fact=x*facto(x-1);
		return fact;
	}
}
