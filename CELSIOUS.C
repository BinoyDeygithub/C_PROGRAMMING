#include<stdio.h>
main()
{
float c,f;
clrscr();
printf("enter the temp in fahrenhiet\n");
scanf("%f",&f);
c=(f-32)*5/9;
printf("the temp in celsious is %f",c);
getch();
}