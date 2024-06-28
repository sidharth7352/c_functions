#include<stdio.h>
void print(const char *);
void main()
{
 char s[10];
 printf("enter the string...\n");
 scanf("%s",s);
 print(s);
 printf("\n");
 }
 void print(const char *s)
 {
  while(*s)
  printf("%c",*s++);
  }
