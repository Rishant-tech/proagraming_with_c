#include<stdio.h>
void main() {
int yr;
printf("Enter any year=");
scanf("%d",&yr);
if(((yr%4==0)&&(yr%100!=0))||(yr%400==0))
printf("This year is leap year");
else
printf("The year is not leap year");
}
