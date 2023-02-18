#include<stdio.h>
#include<string.h>
main()
{
char str[20];
int i,len=0;
clrscr();
printf("enter the string\n");
scanf("%s",str);
for (i=0;str[i]!='\0';i++)
len++;
printf("the length is %d",len);
getch();
}
