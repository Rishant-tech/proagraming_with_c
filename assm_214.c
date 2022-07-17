//14-Write a program in C to display the number in reverse order.
#include<stdio.h>
void main()
{
 int num,r;
 printf("Enter the digit from where you want reverse order");
 scanf("%d",&num);
 while(num!=0)
 {
  r=num%10;
  printf("%d",r);
  num=num/10;
 }
}
