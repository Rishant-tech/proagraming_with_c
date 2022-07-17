#include<stdio.h>
int main(void)
{
	int a[10],x,y,i;
	for(i=0;i<10;i++)
	{
		printf("Enter the value for index %d ,of the array:",i);
		scanf("%d",&a[i]);
	}
	x=0;
	for(i=0;i<10;i++)
	{
		if(x<a[i])
		{
			x=a[i];
		}
		if(y>a[i])
		{
			y=a[i];
		}
	}
	printf("\nThe max element of array is:%d",x);
	printf("\nThe min element of array is:%d",y);
}
