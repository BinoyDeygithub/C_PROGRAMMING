#include<stdio.h>
main ()
{
int num1 ,num2 , sum=0,sub=0,mul=1;
  int choice;
clrscr();
while(1)
 {
printf("menu\n\n");
printf("1. addition\n");
printf("2. subtraction\n");
printf("3. multiplication\n");
printf("4. exit\n");
printf(" enter your chioce\n");
scanf("%d",&choice );
switch( choice )
{
case 1:
printf("enter two number\n");
scanf("%d%d",&num1,&num2);
sum = num1+num2;
printf("the sum is %d\n",sum);
break;
case 2:
printf("enter two number\n");
scanf("%d%d",&num1,&num2);
sub=num1-num2;
printf("the subtraction is %d\n",sub);
break;
case 3:
printf("enter two number\n");
scanf("%d%d",&num1,&num2);
mul=num1*num2;
printf("the multiplication is %d\n");
break;
case 4:
exit(0);
default:
printf("you have entered wrong choice \n");
getch();
}
}
}