#include<stdio.h>
void main()
{
 int d,r,bin=0;
 printf("Enter decimal number=");
 scanf("%d",&d);
 while(d>=0)
 { 
 	r=d%2;
 	bin=(bin+r);
        if(d==0)
        {
         printf("The binary code is=%d",bin);
         break;
        }
        d=d/2;
 }
}
