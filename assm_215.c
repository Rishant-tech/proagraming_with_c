#include<stdio.h>
void main()
{
 int num,r=0,s=0,z=0;
 printf("Enter the number=");
 scanf("%d",&num);
 z=num;
 while(num!=0)
 {
  r=num%10;
  s=(s*10)+r;
  num=num/10;
 }
 if(z==s)
 printf("Is palindrome=%d",z);
 else
 printf("Is not a palindrome=%d",z);
}

