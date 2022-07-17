//Write a program in C to add numbers using call by reference
#include<stdio.h>
int sum_n(int *,int *);
int main(void)
{
	int a,b,sum,*ptr1=&a,*ptr2=&b;
	printf("Enter two integers:");
	scanf("%d%d",&a,&b);
	sum=sum_n(ptr1,ptr2);
	printf("The sum:%d",sum);	
}
int sum_n(int *x,int *y)
{
	int sum;
	sum=*x+*y;
	return sum;
}
