#include<stdio.h>
void ev_od(int);
void main()
{
 int num;
 printf("Enter a number=");
 scanf("%d",&num);
 ev_od(num);
}
void ev_od(int a)
{
 if(a%2==0)
 printf("The number is even");
 else
 printf("The number is odd");
}
