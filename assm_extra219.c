w//Write a program in C to find the sum of all elements of the array.
#include<stdio.h>
int sum_array(int *,int);
void main()
{
 int a[10],i,sum=0;
 printf("Enter 10 numbers");
 for(i=0;i<=9;i++)
 {
  scanf("%d",&a[i]);
 }
 sum=sum_array(a,10);
 printf("The sum is=%d",sum);
}
int sum_array(int *b,int n)
{
 int sum=0,j;
 for(j=0;j<=n-1;j++)
 {
  sum=sum+*b;
  *b++;
 }
 if(j==n)
 return sum;
}
