#include<stdio.h>
main()
{
int n=1;
clrscr();
while(n<=5)
{
if(n==3)
{
printf("this is continue statement\n");
n++;
}
printf("n=%d\n",n);
n++;
}
getch();
}