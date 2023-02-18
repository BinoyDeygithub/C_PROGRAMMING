#include<stdio.h>
int add (int , int)  ;
  main()
{
int n1,n2,n3,n4,n5,n6,res;
clrscr();
printf("enters the numbers  \n");
scanf("%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6);
res=add(n1,n2)*add(n3,n4)-add(n5,n6) ;
printf("the result is %d",res);

getch();
}
add (int x, int y)
{
int sum=0;
sum=x+y;
return (sum);
}