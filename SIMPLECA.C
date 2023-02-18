#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//function declarations
int addition();
int subtract();
int multiply();
float divide();
int sq();
int sqrt1();
void exit();

int main()
{


//declaration a local variable op

int op;
clrscr();
do
{
//displays the multiple operation of the c calculate
printf("select an operation to perform the calculation in c calculator :");
printf("\n 1 addition \t \t 2 subtraction \n 3 multiplication \t 4 divition\n 5 square \t 6 square root\n 7 exit\n\n please \n make a choice :");
scanf("%d",&op);//accepts a numeric input to choose the operation
//use switch statement to call an operation
switch (op)
{
case 1:
addition();/*it call the addition ()function to add the given numbers*/
break;//break the function
case 2:
subtract();/*it call the subtract ()function to subtract the given number*/
break;
case 3:
multiply();/*it call the multiply () function to multiply the given number */
break;
case 4:
divide();/*it call the divide () function to divide the given number */
break;
case 5:
sq();/* it call the square () fucntion to square the given number*/
break;
case 6:
sqrt1();/*it call the square root ()  function to square toot the given number*/
break;
case 7:
exit(0);//it call the exit () function to exit the program//
break;
default :
printf("something is wrong");
break;
}
printf("\n\n **************************************************************\n");
}while(op!=7) ;
return 0;
}
//function definition//
int addition()
{
int i,num,sum=0,f_num;//declare a local variable
printf("how many numbers you want to add :");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
scanf("%d",&f_num);
sum = sum+f_num;
}
printf("total sum of numbers %d",sum);
return 0;
}
//use subtract () function to subtract two numbers
int subtract()
{
int i,sub=0,num,res;
printf("enter the number you want to subtract:");
scanf("%d",&num);
for(i=0;i<num;i++){
printf("enter number %d :",i+1);
scanf("%d",&res);
sub -=res;}
printf("the subtraction of %d ",sub);
return 0;
}
//use multiply () function to multiply
int multiply()  {
int i, num ,mul,res=1;
printf("enter the  numbers you want to multiply:");
scanf("%d",&num);

for (i=1;i<=num;i++)
{
scanf("%d",&mul);
res=res*mul;
}
printf("the multiplication is = %d",res);
return 0;
}
//use divide () function to divide two number
float divide()
{
int n1,n2;
float res;
printf("the first number is :");
scanf("%d",&n1);
printf("the second number is :");
scanf("%d",&n2);
if (n2==0)
{
printf("\n divisor cannot be zero.please enter another value");
scanf("%d",n2);
}
res=n1/(float)n2;
printf("\n the divition of %d/%d is : %f",n1,n2,res);
}
//use sq () function to get the square of the given number
int sq()
{
int n1,res;
printf("enter a number to get the square :");
scanf("%d",n1);
res =n1*n1;
printf("\n the square of %d is : %d", n1,res);
}
//use sqrt1() function to get the square root of the given number
int sqrt1()
{
float res;
int n1;
printf("enter a number to get square root :");
scanf("%d",&n1);
res=sqrt(n1) ;
printf("\n the square root of %d is :%f",n1,res);
}


