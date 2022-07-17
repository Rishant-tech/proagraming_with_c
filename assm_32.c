#include<stdio.h>
void swap(int,int);
void main()
{
 int n_1,n_2;
 printf("Enter two numbers=");
 scanf("%d%d",&n_1,&n_2);
 swap(n_1,n_2);
}
void swap(int a,int b)
{
 int n_1,n_2;
 n_1=a+b;
 n_2=n_1-b;
 n_1=n_1-n_2;
 printf("The swaped numbers=%d\n%d",n_1,n_2);
}
