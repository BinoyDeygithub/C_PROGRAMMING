#include<stdio.h>
main()
{
int n1,n2;
clrscr();
printf("enter the two number\n");
scanf("%d%d",&n1,&n2);
add(n1,n2);
getch();
}
add(int x, int y)
{
int sum=0;
sum= x+y;
printf("the sum is %d",sum);
}
