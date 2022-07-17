#include<stdio.h>
int main(void)
{
	char str[20];
	int len=0,wrd=1;
	printf("Enter a string:");
	gets(str);
	while(str[len]!='\0')
	{
		if(str[len]==' ')
		wrd++;
		len++;
	}
	printf("The words in the given string:%d",wrd);
}
