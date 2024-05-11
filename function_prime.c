#include<stdio.h>
int prime_checking(int);
void main()
{
 int num,r;
 printf("enter the number...\n");
 scanf("%d",&num);
 r=prime_checking(num);
 if(r==1)
 printf("yes,it is a prime number...\n");
 else
 printf("no,it is a prime number...\n");
}

int prime_checking(int num)
{
  int i,c=0;
  for(i=2,c=0;i<=num;i++)
  {
   if(num%i==0)
   c++;
  }
  if(c==1)
  return 1;
  else
  return 0;
 }
