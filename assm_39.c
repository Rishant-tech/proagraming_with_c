//Write a program in C to count the digits of a given number using recursion
#include<stdio.h>
int n_count(int);
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("The total number of digits:%d",n_count(num));
}
int n_count(int x)
{
	int i=0;
	if(x!=0)
	{
		i++;
		return (i+n_count(x/10));
	}
	else
	{
		return 0;
	}
		
}
