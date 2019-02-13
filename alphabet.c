#include<stdio.h>
#include<conio.h>
{
char c;
printf("enter a character");
scanf("%c",&c);
if ((c>='a' && c<='z')||(c>='A' && c<='Z'))
 printf("%c alphabet",c);
else
 printf("%c no",c);
 return 0;
 }
