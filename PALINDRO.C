#include<stdio.h>
#include<string.h>
main()
{
char str[20];
int i=0,j,flag=0;
clrscr();
printf("enter the word\n");
scanf("%s",str);
j=strlen(str)-1;
while(i<=j)
{
if(str[i]==str[j])
flag=1;
else   {
flag=0;
break;  }
i++;
j--;
}
if(flag==1)
printf("the word is palindrome\n");
else
printf("the word is not palindrome\n");
getch();
}

