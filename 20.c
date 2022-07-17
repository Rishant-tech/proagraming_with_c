#include<stdio.h>
void main()
{
 int M;
 printf("Please enter the month number according to non-Leap year\nTo have number of days=");
 while(M)
 {
  scanf("%d",&M);
  if((M==1)||(M==3)||(M==5)||(M==7)||(M==8)||(M==10)||(M==12))
   printf("The number of days in the month are=31\n");
  else if((M==4)||(M==6)||(M==9)||(M==11))
   printf("The number of days in the month are=30\n");
  else if(M==2)
   printf("The number of days in the month are=28\n");
  else
   printf("Invalid choice--\n");
  printf("Please re-enter to check again");
 }
}
