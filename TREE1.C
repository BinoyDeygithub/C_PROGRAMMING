#include<stdio.h>
#include<stdlib.h>
#include<alloc.h>
struct node
{
struct node *left;
struct node *right;
char key;
};
struct node* getnode(char);
struct node* insleft(struct node*, char);
struct node* insright(struct node*, char);
void inorder (struct node*) ;
void preorder(struct node*);
void postorder (struct node*);
main()
{
struct node *root=getnode('+');
clrscr();
insleft(root,'*');
insleft(root->left,'A');
insleft(root->left->left,'M');
insright(root->left,'B');
insright(root->left->left,'p') ;
insroot(root,'/');
insleft(root->right,'C');
insleft(root->right->left,'R');
insright(root->right,'d') ;
insright(root->right->right,'w');
printf("\nINORDER\n");
inorder(root);
printf("\nPREORDER\n");
preorder(root);
printf("\nPOSTORER\n");
postorder(root);
getch();
}
struct node* getnode(char key)
{
struct node *temp=(struct node*)malloc(sizeof (struct node) );
temp->key=key;
temp->left=NULL;
temp->right=NULL;
return temp;
}
struct node* insleft(struct node* parent,char key)
{
parent->left=getnode(key);
return parent ->left;
}
struct node* insright(struct node* parent,char key)
{
parent->right=getnode(key);
return parent->right;
}
void inorder(struct node *root)
{
if(root!=NULL)
{
inorder(root->left);
printf("%c",root->key);
inorder(root->right);
}
}
void preorder(struct node *root)
{
if(root!=NULL)
{
printf("%c",root->key);
preorder(root->left);
preorder(root->right);
}}
void postorder(struct node *root)
{
if(root!=NULL)
{

postorder(root->left);
postorder(root->right);
printf("%c",root->key);
}}



