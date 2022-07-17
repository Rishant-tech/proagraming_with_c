#include<stdio.h>
//#include<conio.h>
void main()
{
 float x,cube=0;
 //clrscr();
 printf("Please enter the number to get its cube=");
 scanf("%f",&x);
 for(;x>=1;x--)
 {
  cube=x*x*x;
  printf("when x=%f, Cube is=%f\n",x,cube);
 }
 //getch();
}
