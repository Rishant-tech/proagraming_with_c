#include<stdio.h>
void main()
{
 int a,b,i;
 printf("Enter two integers=");
 scanf("%d%d",&a,&b);
 for(i=2;a>0&&b>0;)
 {
  if((a%i==0)&&(b%i==0))
  {
   printf("The H.C.F is=%d",i);
   break;
  }
  b=b/i;
  a=a/i;
  i++;
 }
}
