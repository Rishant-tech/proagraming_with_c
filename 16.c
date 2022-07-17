#include<stdio.h>
void main()
{
 float a,b,c;
 printf("Enter the value of length of the sides of the given triangle=");
 scanf("%f%f%f",&a,&b,&c);
 if((a==b)&&(a==c))
 {
  printf("The triangle is equilateral");
 }
 else if((a==b)||(a==c)||(b==c))
 {
  printf("The triangle is Isosceles");
 }
 else
 {
  printf("The triangle is scalane");
 }
}
