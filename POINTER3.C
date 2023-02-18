#include<stdio.h>
main()   {
int a=5;
int *b;
clrscr();
b=&a;
printf("%d\n",a);
printf("%d\n",*b);
printf("%u\n",&a);
printf("%u\n",&b);
printf("%u\n",++b);
getch();
}