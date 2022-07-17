#include<stdio.h>
void main()
{
 int age;
 printf("Enter the age of the candidate=");
 scanf("%d",&age);
 if(age>=18)
 {
  printf("The candidate is eligible for casting his/her own vote");
 }
 else
 { 
  printf("The candidate is not eligible for casting his/her own vote");
 }
}
