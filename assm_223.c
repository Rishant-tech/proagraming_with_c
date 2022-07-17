//Write a program in C for multiplication of two square Matrices.
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],product[3][3],i,j;
	printf("Enter elements of first matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the value for the index %d%d of matrix:-",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter elements of second matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the value for the index %d%d of matrix:-",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	/*00 01 02       00 01 02
      10 11 12       10 11 12
      20 21 22       20 21 22*/


    product[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0]+a[0][2]*b[2][0];
    product[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1]+a[0][2]*b[2][1];
    product[0][2]=a[0][0]*b[0][2]+a[0][1]*b[1][2]+a[0][2]*b[2][2]; 
	product[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0]+a[1][2]*b[2][0];
	product[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1]+a[1][2]*b[2][1];
	product[1][2]=a[1][0]*b[0][2]+a[1][1]*b[1][2]+a[1][2]*b[2][2];
	product[2][0]=a[2][0]*b[0][0]+a[2][1]*b[1][0]+a[2][2]*b[2][0];
	product[2][1]=a[2][0]*b[0][1]+a[2][1]*b[1][1]+a[2][2]*b[2][1];
 	product[2][2]=a[2][0]*b[0][2]+a[2][1]*b[1][2]+a[2][2]*b[2][2];
 	printf("\nThe product of two matrix:-\n");
	for(i=0;i<3;i++)
 	{
 	 	for(j=0;j<3;j++)
 	 	{
 	 		printf(" %d",product[i][j]);
 	 		if(j==2)
 	 		printf("\n");
	    }
	}
}
