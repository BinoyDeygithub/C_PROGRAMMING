#include<stdio.h>
main()
{
int i,sum=0,num,r;
clrscr();
printf("enter the digits\n");
scanf("%d",&num);
for(i=num;num>0;i++)
{
r=num%10;
sum=sum+r;
num=num/10;
}
printf("%d",sum);

getch();
}