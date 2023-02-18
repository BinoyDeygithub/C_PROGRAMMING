#include<stdio.h>
main()
{
int n1,n2,sum=0;
clrscr();
printf("enter the two number\n");
scanf("%d%d",&n1,&n2);
sum=add(n1,n2) ;
printf("the sum is %d",sum);
getch();
}
int add(int x ,int y)
{
return(x+y) ;
}