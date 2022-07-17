#include<stdio.h>
void main()
{
 int num,i,z;
 printf("Enter the number=");
 scanf("%d",&num);
 for(i=2;i<=num;i++)
 {
  z=num%i;
  if(z!=0)
  break;
 }
 if((z==0)&&(num==i))
 printf("Is Prime");
 else
 printf("Not Prime");
}
  

