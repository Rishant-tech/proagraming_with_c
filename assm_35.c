//Write a program in C to get the largest element of an array using the function.
#include<stdio.h>
int max_array(int *,int);
int main(void)
{
	int a[10],i,max;
	for(i=0;i<10;i++)
	{
		printf("Enter integer %d:",i);
		scanf("%d",&a[i]);
	}
	max=max_array(a,10);
	printf("The max value of element is:%d",max);
}
int max_array(int *b,int n)
{
	int i,x=0;
	for(i=0;i<n-1;i++)
	{
		if(x<*b)
		{
			x=*b;
		}
		*b++;
	}
	return x;
}
