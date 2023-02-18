#include<string.h>
#include<stdio.h>
main()
{
char s1[20],s2[20];
clrscr();
printf("enter two string\n");
scanf("%s%s",s1,s2);
if (strcmp(s1,s2)==0)
printf("both are equal\n");
else
printf("no equal");
getch();
}
