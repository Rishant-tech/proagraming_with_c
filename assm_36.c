//Write a program in C to check armstrong numbers using the function
#include<stdio.h>
void arm(int);
int main(void)
{
	int num;
	printf("Enter integer:");
	scanf("%d",&num);
	arm(num);
}
void arm(a)
{
	int r=0,s=0,cn;
	cn=a;
	while(a!=0)
	{
		r=a%10;
		s=s+(r*r*r);
		a=a/10;
	}
	if(a==cn)
	printf("The number is armstrong");
	else
	printf("The number is not a armstrong");
}
