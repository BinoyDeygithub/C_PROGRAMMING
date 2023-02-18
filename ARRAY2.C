#include<stdio.h>
 void main()
{
int x[100] ,n,i,sum=0;
clrscr();
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the element of array\n");
for (i=0;i<n;i++)
{
scanf("%d",&x[i]);
sum=sum+x[i] ;
}
printf("the sum of array element is %d\n",sum);
getch();


}
