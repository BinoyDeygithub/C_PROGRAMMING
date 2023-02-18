#include<stdio.h>
main()
{
int x[100],i,n;
clrscr();
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the elements of array\n");
for (i=0;i<n;i++)
{
scanf("%d",x[i]);
}
for(i=o;i<n;i++)
{
printf("%d",x[i]);
}
getch();
}