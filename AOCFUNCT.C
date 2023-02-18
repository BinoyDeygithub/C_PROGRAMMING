#include<stdio.h>
float  res;
main()
{
int n1,n2;
clrscr();
printf("enter the value \n");
scanf("%d%d",&n1,&n2);
res = aoc(n1)+aoc(n2) ;
printf("the res is %f",res);
getch();
}
 int  aoc (int r)
{
float area;
area=3.14*r*r;
return (area);
}