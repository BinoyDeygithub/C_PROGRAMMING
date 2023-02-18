#include<stdio.h>
main()
{
int i;
clrscr();
for (i=1;i<=4;i++)
{
revers();
}
getch();
}
revers()
{
int num,rem, revs=0;
printf("enter the number\n");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
revs=revs*10+rem;
num/=10;
}
printf("the reverse number is %d\n",revs);
}
