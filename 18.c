#include<stdio.h>
#include<ctype.h>
char main()
{
 char alp;
 printf("Please type any alphabet=");
 scanf("%c",&alp);
 if((alp=='a')||(alp=='e')||(alp=='i')||(alp=='o')||(alp=='u'))
 { 
  printf("The alphabet entered is a 'vowel'");
 } 
 else if((alp=='A')||(alp=='E')||(alp=='I')||(alp=='O')||(alp=='U'))
 {
  printf("The alphabet entered is a 'vowel'");
 } 
 else
 {
  printf("The alphabet entered is a 'consonant'");
 }
}
