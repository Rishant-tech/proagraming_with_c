#include<stdio.h>
void main()
{
 int day;
 printf("Enter the day number to get its name=");
 while(day)
 {
  scanf("%d",&day);
  if(day==1)
   printf("Sunday");
  else if(day==2)
   printf("Monday");
  else if(day==3)
   printf("Tuesday");
  else if(day==4)
   printf("Wednesday");
  else if(day==5)
   printf("Thrusday");
  else if(day==6)
   printf("Friday");
  else if(day==7)
   printf("Saturday");
  else
   printf("Invalid choice--\nPlease re-enter the day number of the week=");
 }
}
