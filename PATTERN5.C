#include<stdio.h>
main()
{
int i,j,k,z=1;
clrscr();
for(i=1;i<=10;i++)
 {
 for(j=10-1;j>=i;j--)
 {
 printf(" ");
 }
 for(k=1;k<=z;k++)
 {
 printf( "*");
 }
 z+=2;
 printf("\n");
 }
 getch();
  }