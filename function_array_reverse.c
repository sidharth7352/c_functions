#include<stdio.h>
void print_array(int *,int);
void array_reverse(const int *,int *,int);
void main()
{
 int a[5],b[5],ele,i;
 ele=sizeof(a)/sizeof(a[0]);
 printf("enter the array elements....\n");
 for(i=0;i<ele;i++)
 scanf("%d",&a[i]);
 print_array(a,ele);
 array_reverse(a,b,ele);
 printf("\n");
 print_array(b,ele);
}
void print_array(int *a,int ele)
{
 int i;
 for(i=0;i<ele;i++)
 printf("%d ",a[i]);
 printf("\n");
}
void array_reverse(const int *a,int *b,int ele)
{
 int i,rev,r,n;
 for(i=0;i<ele;i++)
 {
  for(n=a[i],rev=0;n;n=n/10)
  {
    r=n%10;
    rev=rev*10+r;
  }
  b[i]=rev;
 }
 }
