#include<stdio.h>
#include<math.h>
int binary_decimal();
int decimal_binary();
void exit();

int main()
{
int op;
clrscr();
do {
printf("\n 1 binary_decimal   \n 2  decimal_binary \n 3 exit   " );
scanf("%d",&op);
switch(op)
{
case 1:
binary_decimal();
break;
case 2:
decimal_binary();
break;
case 3:
exit (0);
break;

default :
printf("some thing went wrong");
break;
}
printf("\n\n ****************************************\n");
}while(op!=3);
return 0;
}
int binary_decimal()

{
int bin,dec=0,i=0,rem;
printf("enter a binary number:");
scanf("%d",&bin);
while (bin!=0)
{
rem=bin%10;
dec+=(rem* pow(2,i));
bin/=10;
i++;}
printf("decimal number = %d",dec);
return 0;

}
int decimal_binary()
{
 int dec,bin=0,rem,i=1;
 printf("enter decimal number :");
 scanf("%d",&dec);
while(dec!=0){
rem=dec%2;
dec/=2;
bin+=rem*i;
i*=10;
}
  printf("binary number = %d",bin);
getch();
}