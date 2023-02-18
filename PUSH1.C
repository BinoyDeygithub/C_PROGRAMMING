#include <stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int stack[5];
int top=-1,item;
void main()
{

int ch;
clrscr();

{
printf("menu\n");
printf("1. push\n");
printf("2 .pop\n");
printf("3. display\n");
printf("4. exit\n");
while(1){
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit(0);
break;
default : printf("you have enter wrong choice");
}}}
void push();
{
int item;
if (top==10-1)
{
printf("stack is overflow");
}
else
{
printf("enter the item\n");
scanf("%d",&item);
top=top+1;
stack[top]=item;
}
}
void pop();
{
int item;
if(pop==-1)
printf("stuck is empty");
else
{
printf("after deleted elements %d\n",stack[top]);
}
top=top-1;
}
void display();
{
int item;
if(top=-1)
printf("the stack is empty");
else
for (top=i;i>=0;i--)
printf("%d\n",stack[i]);
}
}
else
else
printf("stack is overflow");
printf("stack is empty");
getch();
getch();}