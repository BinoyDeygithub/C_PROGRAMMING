#include<stdio.h>
main()
{
int a=5;
int b=8;
clrscr();
printf("before calling function a and b are %d and %d\n",a,b);
ref(&a,&b)
printf("after calling function a and b are %d and %d\n",a,b);
value (int *p, int *q)
*p++;
*q++;
printf("the change are %d and %d\n",*p,*q);
getch();
}

























