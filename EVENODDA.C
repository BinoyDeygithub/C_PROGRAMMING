#include<stdio.h>
main()
{
int x[30],n,i;
clrscr();
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the element of array\n");
for (i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
printf("the result are\n");
for (i=0;i<n;i++)
{
if(x[i]%2==0)
printf(" the even no is %d\n",x[i]);
else
printf(" the odd no is %d\n",x[i]);
}
getch();
}