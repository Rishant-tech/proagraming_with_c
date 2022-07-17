//Write a program in C to find sum of right diagonals of a matrix
#include<stdio.h>
int main(void)
{
	int a[3][3],i,j,sum=0;
	printf("Please input a square matrix of 3x3:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter integer for the index %d%d of matrix:-",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("\nThe sum of right diagonal of a given matrix:%d",sum);
}
