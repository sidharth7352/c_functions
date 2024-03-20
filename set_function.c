#include<stdio.h>
void print_binary(int);
int set_bit_count(int);
void main()
{
int num,c;
printf("enter the number....\n");
scanf("%d",&num);
print_binary(num);
c=set_bit_count(num);
printf("set bit count=%d\n",c);
}

void print_binary(int n)
{
int pos;
for(pos=31;pos>=0;pos--)
printf("%d",n>>pos&1);
printf("\n");
}

int set_bit_count(int n)
{
int pos,c=0;
for(pos=31;pos>=0;pos--)
if(n>>pos&1)
c++;
return c;
}

