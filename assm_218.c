//Write a C program to check whether a number is a Strong Number or not.
#include<stdio.h>
void main()
{
 int num,z,r,i,fact,s=0;
 printf("Enter a number=");
 scanf("%d",&num);
 z=num;
 while(num!=0)
 {
  r=num%10;
  fact=1;
  for(i=r;i>=1;i--)
  {
   fact=fact*i;
  }
  s=s+fact;
  num=num/10;
 }
 if(s==z)
 printf("The number is a strong number=%d",s);
 else
 printf("The number is not a strong number=%d",s);
}
