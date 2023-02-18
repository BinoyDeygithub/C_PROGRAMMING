#include<stdio.h>
int fact (int);
main()
{
int n1,n2,res;
clrscr();
printf("enter two value\n");
scanf("%d%d",&n1,&n2);
res=fact(n1) + fact (n2) ;
printf("the result is %d",res);
getch();
}
int fact (int num)
{
int f=1,i;
for(i=1;i<=num;i++)
{
f=f*i;
}
return(f) ;
}