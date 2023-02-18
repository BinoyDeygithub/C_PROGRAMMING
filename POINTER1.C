#include<stdio.h>
main()
{
int *p,a;
clrscr();
a=10;
p=&a;
printf("%d\n",a);
printf("%d\n",*(&a));
printf("%u",p);
printf("%d",*p);
printf("%u",&p);
getch();
}