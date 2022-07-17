#include<stdio.h>
void main()
{
 int x,y,t;
 printf("Floyd's Triangle :-\n");
 for(x=1;x<=5;x++)
 {
  for(y=1;y<=x;y++)
  {
   if((x+y)%2==0)
   printf("1");
   else
   printf("0");
  }
  printf("\n");
 }
}

