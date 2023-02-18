#include<stdio.h>
main()
{
int a=5
int *p;
int **q;
clrscr();
p=&a;
q=&p;
printf("%d\n",a);
printf("%d\n",*(&a));
printf("%d\n",*p);
printf("%d\n",**q);
printf("%u\n",&a);
printf("%u\n",p);
printf("u\n",q);
getch();
}