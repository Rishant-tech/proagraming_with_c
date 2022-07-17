//Write a program in C for addition of two Matrices of same size
#include<stdio.h>
int main(void)
{
	int a[3][3],b[3][3],sum[3][3],i,j;
	printf("Let first matrix be x, enter it's values:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the value for the index %d%d of Matrix 'x':",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nLet second matrix be y,enter it's values:");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the value for the index %d%d of Matrix 'y':",i,j);
			scanf("%d",&b[i][j]);
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nThe sum of two matrices is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",sum[i][j]);
			if(j==2)
			{
				printf("\n");
			}
		}
	}
}

