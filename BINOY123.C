#include<stdio.h>
#include<string.h>
main()
{
char str1[20],str2[20];
int i=0;
clrscr();
printf("enter the value of string1\n");
scanf("%s",str1);
while(str1[i]!='\0')
{
str2[i]=str1[i];
i++;
}
printf("now the value of string2 is %s\n",str2);
getch();
}