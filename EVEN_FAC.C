#include<stdio.h>
main()
{
int num;
clrscr();
printf(" enter the number\n");
scanf("%d",&num);
even_odd(num);
factorial(num);
getch();
}
even_odd(int x)
{
if(x%2==0)
{
printf("even\n");
}

else
{
printf("odd\n");
}
}
factorial(int y)
{
int i,f=1;
for (i=1;i<=y;i++)
f=f*i;
printf("the factorial of %d is %d",y,f);
}



