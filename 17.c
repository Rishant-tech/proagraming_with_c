#include<stdio.h>
#include<ctype.h>
char main()
{
 char alp;
 printf("Please press any key to check whether a character is an alphabet, digit or special character=");
 scanf("%c",&alp);
 if(((alp>='a')&&(alp<='z'))||((alp>='A')&&(alp<='Z')))
  printf("The entered character is an alphabet");
 else if((alp>='0')&&(alp<='9'))
  printf("The entered character is a digit");
 else
  printf("The entered character is a special character");
}
