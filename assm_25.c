//Write a C program to calculate the factorial of a given number
#include<stdio.h>
int main()
{
	int i,f=1;
	printf("Enter the number to findout the factorial=");
	scanf("%d",&i);
	for(;i>=1;i--)
	{
		f=f*i;
		if(i==1)
		{
                printf("The factorial of the given number is=%d",f);  
                break;
                }  
	}
return 0;
}

