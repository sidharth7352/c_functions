#include<stdio.h>
void print_array(const int *,int);
void bubble_sort(int *,int);
void main()
{
 int i,ele,a[5];
 ele=sizeof(a)/sizeof(a[0]);
 printf("enter the array elements...\n");
 for(i=0;i<ele;i++)
 scanf("%d",&a[i]);
 print_array(a,ele);
 bubble_sort(a,ele);
 printf("after sort...\n");
 print_array(a,ele);
}
void print_array(const int *a,int ele)
{
 int i;
 for(i=0;i<ele;i++)
 printf("%d ",a[i]);
 printf("\n");
}
void bubble_sort(int *a,int ele)
{
 int i,j,t;
 for(i=0;i<ele-1;i++)
 {
  for(j=0;j<ele-1-i;j++)
  {
  if(a[j]<a[j+1])
  {
   t=a[j];
   a[j]=a[j+1];
   a[j+1]=t;
   }
  }
 }
 }
