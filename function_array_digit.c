#include<stdio.h>
void print_array(int *,int);
void del_fun(int *,int);
void main()
{
 int a[5],ele,i;
 ele=sizeof(a)/sizeof(a[0]);
 printf("enter the array elements...\n");
 for(i=0;i<ele;i++)
 scanf("%d",&a[i]);
 printf("before deleting first digit of array elements...\n");
 print_array(a,ele);
 del_fun(a,ele);
 printf("after deleting first digit of array elements...\n");
 print_array(a,ele);
 printf("\n");
}
void print_array(int *a,int ele)
{
 int i;
 for(i=0;i<ele;i++)
 printf("%d ",a[i]);
 printf("\n");
}
void del_fun(int *a,int ele)
{
 int i,r,n1,n,rev1,rev,r1;
 for(i=0;i<ele;i++)
 {
  for(n1=a[i],rev1=0;n1;n1=n1/10)
  {
    r1=n1%10;
    rev1=rev1*10+r1;
  }
  rev1=rev1/10;
  for(n=rev1,rev=0;n;n=n/10)
  { 
    
    r=n%10;
    rev=rev*10+r;
 }
 a[i]=rev;
 }
 }
