#include<stdio.h>
main()
{
int n=1;
clrscr();
while(n<=5)
{
printf("n=%d\n",n);
if(n==3)
{
printf("this is break statement\n");
break;
}
n++;
}
getch();
}