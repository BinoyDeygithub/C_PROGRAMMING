#include<stdio.h>
main()
{
int x[100],n,i,rev;
clrscr();
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the element of array\n");
for (i=0;i<n;i++)
{
scanf("%d",&x[i]);
while(x[i]>0){
rev=x[i]%10;
printf(" %d",rev);
x[i]=x[i]/10;}
}
getch();
}