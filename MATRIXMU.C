#include<stdio.h>
main()
{
int mat1[2][2],mat2[2][2];
int i,j,k,r,c;
clrscr();
printf("enter the rows and column\n");
scanf("%d%d",&r,&c);
printf("enter the element of first matrix\n");
for(i=0;i<r;i++)  {
for (j=0;i<c;j++)
{
scanf("%d",&mat1[i][j]);
}}
printf("enter the second element\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++) {
scanf("%d",&mat2[i][j]);
}}
for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
mat3=0;
for(k=0;k<c;k++)
{
mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
}}
printf("the product of the matrix are:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",mat3[i][j]);
}
getch();
}