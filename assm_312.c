//Write a program in C to find the length of a string without using library function
#include<stdio.h>
int main(void)
{
	char str[50];
	int len=0;
	printf("Enter a string:");
	gets(str);
	while(str[len]!='\0')
	len++;
	printf("The length of the string is:%d",len);
}
