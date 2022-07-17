#include<stdio.h>
int main(void)
{
	int num,n,pm=0;
	printf("Enter a number:");
	scanf("%d",&num);
    for(n=1;n<=num/2;n++)
    {
    	if(num%n==0)
    	{
    		pm=1;
    		break;
		}
	}
	if(num==1)
	printf("Niether Prime nor composite");
	else
	{
		if(pm==0)
		printf("Prime");
		else
		printf("Not-Prime");
	}
}
