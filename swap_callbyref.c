#include<stdio.h>
void swap(int *x,int *y);
void main()
{
int a,b,c;
printf("enter the two numbers...\n");
scanf("%d %d",&a,&b);
swap(&a,&b);
printf("after swap , in main function a=%d b=%d\n",a,b);
}
void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
printf("after swap , in swap function a=%d b=%d\n",*x,*y);
}
