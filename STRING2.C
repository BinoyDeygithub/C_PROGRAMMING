#include<srdio.h>
#include<string.h>
main()
{
char ch[10];
int len;
clrscr();
printf("enter a string\n");
scanf("%s",ch);
len=strlen(ch);
printf("the length of string is %d\n",len);
getch();
}