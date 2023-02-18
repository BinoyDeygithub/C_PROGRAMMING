#include<stdio.h>
main ()
{
int num ,i, count=0;
clrscr();
printf("enter the num \n");
scanf("%d",&num);
for (i=1;i<=num;i++)
{
if (num%i==0)
{
count ++;
  }
}
if (count==2)
printf("the number is prime\n");
else
printf("the number is not prime\n");
getch();
}
