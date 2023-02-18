#include<stdio.h>
#include<alloc.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
} *start =NULL;
void dis();
void create(int) ;
insbeg();
inslast();
insanypos();
deleteatbeg();
deleteatlast();
count_node();
traverserev();
int search(int);
int item,n,count=0;
void main()
{
int ch , n;
char cho;
clrscr();
do
{
printf("1 . create\n");
printf("2 .display\n3. insert begining\n4. insert at last\n5. insert any position\n6. delete at begining\n7. delete at last\n8. count node number\n9. reverse node\n10. search\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter how many node do you want\n");
scanf("%d",&n);
if (n==0)
printf("your list contain Zero node OR NULL LIST\n");
else
create (n);
break;
case 2:
dis();
break;
case 3:
insbeg();
break;
case 4:
inslast();
break;
case 5:
insanypos();
break;
case 6:
deleteatbeg();
break;
case 7:
deleteatlast();
break;
case 8:
count_node();
break;
case 9 :
traverserev();
break;
case 10:
printf("enter the search item\n") ;
scanf("%d",&item);
if(search(item)==1)
printf("%d has been found \n",item);
default :
printf("you have enter wrong choice\n");
}
printf("\nDo you want you continue(press Y or y)\n");
fflush(stdin);
scanf("%c",&cho);
}while(cho=='Y'||cho=='y') ;
getch();
}
void create(int num)
{
char ch;
int no=1;
do
{
struct node *new_node,*current;
new_node=(struct node *)malloc(num *sizeof (struct node));
printf("this is node no %d\t",no);
printf("enter the data :");
scanf("%d",&new_node->data);
new_node->next=NULL;
if(start==NULL)
{
start=new_node;
current=new_node;
}
else
{
current->next=new_node;
current=new_node;
}
no++;
}while(/*ch!='n'*/no<=num);
}
void dis()
{
struct node *temp;
temp=start;
printf("the element are \n\n");
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
}
insbeg()
{
struct node *ptr;
ptr=(struct node*)malloc(sizeof(struct node));
printf("the node will be insert at begining");
printf("enter the data:");
scanf("%d",&ptr->data);
if(start==NULL)
ptr->next=NULL;
else
ptr->next=start;
start=ptr;
printf("the node has been inserted successfully");
}
inslast()
{

struct node *ptr,*loc;
printf("the node will be insert at last\n");
printf("enter the data:");
scanf("%d",&ptr->data);
ptr->next=NULL;
if(start==NULL)
start=ptr;
else   {
loc=start;
while(loc->next!=NULL)
loc=loc->next;
loc->next=ptr;
printf("the node has been sucessfully");
}
}
insanypos()
{
int k=1,pos;
struct node *ptr,*loc;
printf("enter the position where do you want \n");
scanf("%d",&pos);
loc=start;
while(k<pos-1)
{
loc=loc->next;
k++;
}
printf("the node will insert at any position %d\n",pos);
printf("enter the data:\n");
scanf("%d",&ptr->data);
ptr->next=loc->next;
loc->next=ptr;
printf("the node is successfully inserted");
}
deleteatbeg()
{
struct node *temp;
if(start==NULL)
{
printf("no node are exits\n");
}
else
temp=start;
start=temp->next;
printf("node is deleted %d",temp->data);
free(temp);
}
deleteatlast()
{
struct node *temp,*prev;
if(start==NULL)
{
printf("empty list\n");
}
else
temp=start;
prev=start;
while(temp->next!=NULL)
{
prev=temp;
temp=temp->next;
}
prev->next=NULL;
printf("no is deleted %d",temp->data);
free(temp) ;
}
count_node()
{
int count=0;
struct node *temp;
temp=start;
while(temp!=NULL)
{
temp=temp->next;
count++;
}
printf("the no. of node %d",count);
}
traverserev()
{
struct node *temp,*temp2,*head;
head=start;
temp=NULL;
temp2=NULL;
while(head!=NULL)
{
temp2=head->next;
head->next=temp;
temp=head;
head=temp2;
}
head=temp;
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
temp=NULL;
temp2=NULL;
while(head!=NULL)
{
temp2=head->next;
head->next=temp;
temp=head;
head=temp2;
}
printf("\nThe list is rearranged again\n");
}
int search(int item)
{
struct node *temp;
temp=start;
while(temp!=NULL)
{
if(item==temp->data)
{
return 1;
break;
}
else
temp=temp->next;
}
}
