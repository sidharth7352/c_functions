#include<stdio.h>
int adder(int,int);
void main()
{
int a,b,c;
printf("enter the two numbers...\n");
scanf("%d %d",&a,&b);
c=adder(a,b);
printf("sum=%d\n",c);
}
int adder(int x,int y)
{
return x+y;
}

