#include<stdio.h>
main()
{
clrscr();
add();
getch();
}
add()
{
int n1,n2,sum=0;
printf("enter the two number\n");
scanf("%d%d",&n1,&n2);
sum=n1+n2;
printf("the sum is %d",sum);
}