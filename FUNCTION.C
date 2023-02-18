#include<stdio.h>
main()
{
clrscr();
rev();
getch();
}
rev()
{
int num,rem,rev=0;
printf("enter the number \n");
scanf("%d",&num);
while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
printf("the reverse number is%d",rev);
}