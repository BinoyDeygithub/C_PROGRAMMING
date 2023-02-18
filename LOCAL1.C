#include<stdio.h>
main()
{
int a=6;    //local
clrscr();
printf("%d\n",a);
{
a=8;
printf("%d",a);
}
printf("%d",a);
getch();
}
fun()
{
int b=10;
printf("%d",b);
}
