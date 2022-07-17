#include<stdio.h>
//#include<conio.h>
void main()
{
 int a,sum=0,i=1;
 float average;
 //clrscr();
 printf("Enter the 10 numbers=");
 while(i<=10)
 {
  scanf("%d",&a);
  sum=sum+a;
  i++;
 }
 average=sum/10.0;
 printf("SUM=%d\n",sum);
 printf("AVERAGE=%f",average);
 //getch();
}
