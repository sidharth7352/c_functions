#include<stdio.h>
void print_string(const char *);
int string_length(const char *);
void main()
{
int c;
char s[10];
 printf("enter the string...\n");
 scanf("%s",s);
 print_string(s);
 c= string_length(s);
 printf("string length=%d\n",c);
 printf("\n");
 }
 void print_string(const char *s)
 {
  while(*s)
  printf("%c",*s++);
  printf("\n");
}
int string_length(const char *s)
{
 int i;
 for(i=0;s[i];i++);
 return i;
 }
