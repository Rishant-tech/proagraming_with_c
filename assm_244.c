#include<stdio.h>
void main()
{
 int x,y,t=0;
 printf("The pattern is :-\n");
 for(x=1;x<=5;x++)
 {
  for(y=1;y<=x;y++)
  {
   t=t+1;
   printf("%d",t);
  }
  printf("\n");
 }
}
