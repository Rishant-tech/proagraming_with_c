#include<stdio.h>
#define size 20
int main(void)
{
	 char str[size];
	 int alp=0,num=0,sp_ch=0,i;
	 printf("Enter a string:");
	 gets(str);
	 for(i=0;str[i]!='\0';i++)
	 {
	 	if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
	 	alp++;
	 	else if((str[i]>='0')&&(str[i]<='9'))
	 	num++;
	 	else if(str[i]==' ');
	 	else
	 	sp_ch++;
	 }
	 printf("Alphabet:%d",alp);
	 printf("\nNum_digit:%d",num);
	 printf("\nSpecial characters:%d",sp_ch);
}
