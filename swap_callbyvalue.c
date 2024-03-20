#include<stdio.h>
void swap(int,int);
void main()
{
int a,b;
printf("enter the two numbers....\n");
scanf("%d %d",&a,&b);
swap(a,b);
printf("after swap main function becomes a=%d b=%d\n",a,b);
}
void swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf("after swap, swap function becomes a=%d b=%d\n",x,y);
}
