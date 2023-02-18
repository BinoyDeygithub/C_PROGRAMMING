#include<stdio.h>
main()
{
int n1=0,n2=1,n3,ele,i=2;
clrscr();
printf("enter the number of element\n");
scanf("%d",&ele);
printf("%d\t%d\t",n1,n2);
while (i<ele)
{
n3=n1+n2;
printf("%d\t",n3);
n1=n2;
n2=n3;
i++;
}
getch();
}