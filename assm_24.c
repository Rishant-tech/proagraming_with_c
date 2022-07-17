#include<stdio.h>
void main()
{
 int x,y,t=0;
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
 printf("The second pattern is:-\n");
 for(x=1;x<=5;x++)
 {
  for(y=1;y<=x;y++)
  {
   printf("%d",y);
  }
  printf("\n");
 }
 printf("The third pattern is :-\n");
 for(x=1;x<=5;x++)
 {
  for(y=1;y<=x;y++)
  {
   printf("%d",x);
  }
  printf("\n");
 }
 printf("The fourth pattern is :-\n");
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
