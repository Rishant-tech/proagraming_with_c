//Write a program in C to separate odd and even integers in separate arrays.
#include<stdio.h>
int main(void)
{
	int a[10],even[10],odd[10],i;
	for(i=0;i<10;i++)
	{
		printf("\nEnter the value for index %d of array:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			even[i]=a[i];
			printf("\neven element:%d",even[i]);
		}
		else
		{
			odd[i]=a[i];
			printf("\nodd element:%d",odd[i]);
		}
	}
}
