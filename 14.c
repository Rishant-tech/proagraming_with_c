#include<stdio.h>
#include<math.h>
void main() 
{
 int a,b,c,D;
 double root_1,root_2;
 printf("Compare your equation with the standard one ax^2+bx+c=0\nThen enter the value of a,b,c respectevely=");
 scanf("%d%d%d",&a,&b,&c);
 D=(b*b)-(4*a*c);
 root_1=((-b)+sqrt(D))/2*a;
 root_2=((-b)-sqrt(D))/2*a;
 if(D>0)
 { 
  printf("The roots are real and distinct\n");
  printf("root_1=%lf\n",root_1);
  printf("root_2=%lf",root_2);
 }
 else if(D==0)
 {  
  printf("The roots are real but equal\n");
  printf("root_1=%lf\n",root_1);
  printf("root_2=%lf",root_2);
 }
 else
 {
  printf("The roots are imagenary");
 } 
}
