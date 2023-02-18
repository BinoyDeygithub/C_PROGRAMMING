#include<stdio.h>
#include<string.h>
main()
{
char s1[20],s2[20] ;
int i=0,len=0,j=0;
clrscr();
printf("enter the string\n");
scanf("%s",s1);
len=strlen(s1);
for(i=len;i>=0;i--)
{
s1[j]=s1[i] ;
j++;
}
printf("%s",s2);
if(string(s1,s2)==0)
printf(" this is a palindrome\n");
else
printf("this is not a palindrome\n");
getch();
}