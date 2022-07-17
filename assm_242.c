#include<stdio.h>
void main()
{
 int x,y;
 printf("The pattern is:-\n");
 for(x=1;x<=5;x++)
 {
  for(y=1;y<=x;y++)
  {
   printf("%d",y);
  }
  printf("\n");
 }
}
