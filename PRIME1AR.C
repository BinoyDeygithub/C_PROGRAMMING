#include<stdio.h>
main()
{
int i,count,k;
clrscr();
for (i=1;i<100;i++)
{
count=0;
for (k=1;k<=i;k++)
{
if(i%k==0)
{
count++;
}}
if(count==2)
printf("the prime no is %d\n",i);
}
getch();
}