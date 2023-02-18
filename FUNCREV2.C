#include<stdio.h>
main()
{
int num;
clrscr();
printf("enter the number\n");
scanf("%d",&num);
rev(num);
getch();
}
 rev( x)
{
int rem,rev=0;
while(x>0)
{
rem=x%10;
rev=rev*10+rem;
x=x/10;
}
printf("the reverse number is %d",rev);
}