#include<stdio.h>
int sq_num(int x);
void main()
{
 int num, sq;
 printf("Enter a number=");
 scanf("%d",&num);
 sq=sq_num(num);
 printf("The square is=%d",sq);
}
int sq_num(int x)
{
 int sq;
 sq=x*x;
 return sq;
}
