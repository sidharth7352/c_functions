#include<stdio.h>
void print_string(const char *);
void string_upper(char *);
void main()
{
 char s[10];
 printf("enter the string...\n");
 scanf("%s",s);
 printf("before converting to uppercase..\n");
 print_string(s);
 string_upper(s);
 printf("after coverting to uppercase...\n");
 print_string(s);
 printf("\n");
 }
 void print_string(const char *s)
 {
  while(*s)
  printf("%c",*s++);
  printf("\n");
  }
  void string_upper(char *s)
  {
   while(*s)
   {
    if(*s>='a' && *s<='z')
    *s=*s-32;
   s++;
   }
   }
