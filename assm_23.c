#include<stdio.h>
//#include<conio.h>
void main()
{
 int x,i=1,table;
 //clrscr();
 printf("Enter the number to display its multiplication table=");
 scanf("%d",&x);
 printf("The multiplication table of %d is follows as:-\n",x);
 for(;i<=10;i++)
 {
  table=x*i;
  printf("%d * %d=%d\n",x,i,table);
 }
 //getch();
}
