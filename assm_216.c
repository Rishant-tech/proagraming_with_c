#include<stdio.h>
void main()
{
 int n,s=0,r=0;
 for(n=100;n<=200;n++)
 {
  r=n%9;
  if(r==0)
  {
   s=s+n;
   printf("The integers divisible by 9=%d\n",n);
  }
 }
 printf("Sum of integers is=%d",s); 
}
  
