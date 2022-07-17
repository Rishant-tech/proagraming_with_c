//Write a program in C to find transpose of a given matrix
#include<stdio.h>
int main(void)
{
	int a[3][3],i,j;
	printf("Enter a square matrix:")	;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter integer for index %d%d of matrix:-",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe transpose of a matrix:\n");
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			printf(" %d",a[i][j]);
			if(i==2)
			{
				printf("\n");
			}
		}
	}
}
