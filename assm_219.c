#include<stdio.h>
void main()
{
 int a[15],i,sum=0;
 for(i=0;i<=14;i++)
 {
  printf("Enter %d element of the array=",i);
  scanf("%d",&a[i]);
  sum=sum+a[i]; 
  if(i==14)
  printf("The sum of all the elements of the array is=%d",sum);
 }
}
