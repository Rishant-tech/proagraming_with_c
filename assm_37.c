//Write a program in C to calculate the sum of numbers from 1 to n using recursion
#include<stdio.h>
int sum_n(int);
int main(void)
{
	int num,sum;
	printf("Enter the number of digits, you wish to find out the sum");
	scanf("%d",&num);
	sum=sum_n(num);
	printf("The sum:%d",sum);
}
int sum_n(int x)
{
	int sum=x;
	if ( x == 1 )
    return ( 1 ) ;
    else
    {
		sum = sum+ sum_n ( x - 1 ) ;
    	return sum;
	}
}
