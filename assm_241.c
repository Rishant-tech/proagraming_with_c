#include<stdio.h>
void main()
{
 int x,y,i=1;
 printf("The first pattern is:-\n");
 for(x=1;x<=5;x++)
 { 
  for(y=1;y<=x;y++)
  { 
   printf("*");
   if(x==y)
   printf("\n");
  }
 }
}
