#include<stdio.h>
void print_array(const int *,int);
void array_sum(const int *,int *,int);
void main()
{
 int a[5],b[5],ele,i;
 printf("enter the array elements....\n");
 ele=sizeof(a)/sizeof(a[0]);
 for(i=0;i<ele;i++)
 scanf("%d",&a[i]);
 print_array(a,ele);
 array_sum(a,b,ele);
 print_array(b,ele);
}

void print_array(const int *a,int ele)
{
 int i;
 for(i=0;i<ele;i++)
 printf("%d ",a[i]);
 printf("\n");
}

void array_sum(const int *a,int *b,int ele)
{
 int i,m,n,sum=0,r;
 for(i=0;i<ele;i++)
 {
  for(n=a[i],sum=0,r;n;n)
  {
   r=n%10;
   sum=sum+r;
   n=n/10;
  }
  b[i]=sum;
 }
 }



