#include<stdio.h>
main()
{
int i,num,fact=1,count=1;
clrscr();
printf("enter the number\n");
scanf("%d",&num);
for (i=1;i<=num;i++)
{
fact =fact *i;
count=count+i;
}
printf("the factorial of %d is %d\n",num,fact);
getch();
}