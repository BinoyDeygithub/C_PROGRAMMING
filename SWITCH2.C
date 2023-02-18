#include<stdio.h>
main()
{
int choice,num,dig1,dig2,dig3,sum=0,revs=0,rem;
clrscr();
while(1)
{
printf("menu\n");
printf("1. odd-even \n");
printf("2. sum of digit \n");
printf("3. reverse digit \n");
printf("4. exit\n");
printf("enter your choice ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the number\n");
scanf("%d",&num);
if(num%2==0)
{
printf("the number is even\n");
}
else
{
printf("the number is odd\n");
 }
	break;
case 2:
printf ("enter the three digits\n");
scanf("%d%d%d",&dig1,&dig2,&dig3);
sum=dig1+dig2+dig3 ;
printf("the sum is %d\n",sum);
break;
case 3:
printf("you have chosed reverse digit\n");
printf("enter any integer number\n");
scanf("%d",&num);
do
{
rem = num%10;
revs = revs*10+rem;
num /=10;
}
while(num!=0);
printf("Reversed Number is %d",revs);

break;
case 4:
exit(0);
default:
printf("you have entered wrong choice");
getch();
}
}
}