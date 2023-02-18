#include<stdio.h>
#include<string.h>
struct stud
{
int roll;
int age;
char name[20];
}s[5];
main()
{
int i;
clrscr();
printf("enter the details of 5 student\n");
for(i=0;i<5;i++)
{
printf("enter the record %d",i+1);
printf("enter the name,roll,age\n");
scanf("%s%d%d",s[i].name,&s[i].roll,&s[i].age);
}
printf("name\t\t roll\t\t age \n");
for(i=0;i<5;i++)
{
printf("%s\t\t%d\t\t%d\n",s[i].name,s[i].roll,s[i].age);
}
getch();
}