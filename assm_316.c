//Write a program in C to copy one string to another string
#include<stdio.h>
#define size 20
int main()
{
	char str[size],xstr[size];
	int len;
	printf("Enter a string:");
	gets(str);
	for(len=0;str[len]!='\0';len++)
	xstr[len]=str[len];
	xstr[len]='\0';
	printf("Copy of string:%s",xstr);
}
