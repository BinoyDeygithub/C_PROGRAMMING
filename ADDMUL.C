#include<stdio.h>
main()
{
int n1,n2;
clrscr();
printf("enter the two number\n");
scanf("%d%d",&n1,&n2);
add(n1,n2) ;
mul(n1,n2);
getch();
}
add(int x,int y)
{
int sum=0;
sum=x+y;
printf("the sum is: %d\n",sum );
}
mul(int a, int b)
{
int mul=0;
mul=a*b;
printf("the sum is: %d\n",mul);
}