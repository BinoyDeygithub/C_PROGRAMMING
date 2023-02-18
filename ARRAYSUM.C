#include<srdio.h>
int main()
{
int a[5],i;
clrscr();
printf("enter the array element\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
arrsum(a);
getch();
}
void arrsum(int num[])
int sum=0,i;
for(i=0;i<5;i++)
{
sum=sum+num[i]
}
printf("sum is %d",sum);
}