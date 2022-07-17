/*Write a program in C to display the n terms of harmonic
series and their sum.1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms*/
#include<stdio.h>
void main()
{
 int a,d,n,an;
 float sum,SHS;
 printf("Enter the first digit and diffrence of AP series and total terms of series whose sum is to be calculated=");
 scanf("%d%d%d",&a,&d,&n);
 an=a+(n-1)*d;
 sum=(n*(a+an))/2;
 SHS=1/sum;
 printf("Sum of the harmonic series is=%f",SHS);
}
