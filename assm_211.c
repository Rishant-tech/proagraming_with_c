#include<stdio.h>
void main()
{
 int n,r=0,s=0,cn=0;
 printf("Enter the number=");
 scanf("%d",&n);
 cn=n;
 while(n!=0)
 {
  r=n%10;
  s=s+ ((r*r)*r);
  n=n/10;
 }
 if(s==cn)
 printf("\nIs a armstrong number=%d",s);
 else
 printf("\nIs not a armstrong number=%d",s);
}
