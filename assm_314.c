//Write a program in C to compare two string without using string library functions
#include<stdio.h>
int main(void)
{
	char str1[20],str2[20];
	int len=0,i=0;
	printf("Enter first strings:");
	gets(str1);
	printf("Enter second string:");
	gets(str2);
	while((str1[len]!='\0')&&(str2[len]!='\0'))
	len++;
	if(str1[len]>str2[len])
	printf("The first string is greater");
	else if(str1[len]<str2[len])
	printf("The second string is greater");
	else
	printf("Both the strings are equal");
}
