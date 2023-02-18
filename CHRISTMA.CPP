//________________WELCOME ALL OF YOU ON RIIT _______________________//
//-------------_c++ PROGRAM TO CELEBRATE CHRISTMAS DAY_ -------------//
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
void drawtree(int midx,int fill_pattern)
{
int x=30,y=30,i;
for(i=0;i<70;i=i+30)
{
int poly[7];

poly [0]=midx;
poly[1]=30+i+y/2;
poly[2]=midx+20+x;
poly[3]=60+i+2*y;
poly[4]=midx-20-x;
poly[5]=60+i+2*y;
poly[6]=poly[0];
poly[7]=poly[1];
setfillstyle(fill_pattern,2);
fillpoly(4,poly);
x=x+30;
y=y+30;
}
}
void drawbark(int midx,int fill_pattern)
{
setfillstyle(fill_pattern,6);
bar(midx-25,300,midx+25,360);
}
void drawstar(int midx)
{
int poly[8];
poly[0]=midx;
poly[1]=40;
poly[2]=midx-18;
poly[3]=30;
poly[4]=midx+18;
poly[5]=30;
poly[6]=poly[0];
poly[7]=poly[1];
setfillstyle(1,15);
fillpoly(4,poly);
int poly1[10];
poly1[0]=midx;
poly1[1]=17;
poly1[2]=midx+15;
poly1[3]=55;
poly1[4]=poly[0];
poly1[5]=poly[1];
poly1[6]=midx-15;
poly1[7]=55;
poly1[8]=poly1[0];
poly1[9]=poly1[1];
setfillstyle(1,15);
fillpoly(4,poly1);
}
int main()
{
int gdrive=DETECT,gmode,errorcode;
int  midx,fill_pattern=0;
initgraph(&gdrive,&gmode,"C:\\TC\\BGI" );
errorcode=graphresult();
if (errorcode!=grOk)
{
printf("graphics error:%s\n",grapherrormsg(errorcode));
printf("PRESS ANY KEY TO HALT:");
getch();
exit(1);
}
midx=getmaxx()/2;

do
	     {
fill_pattern=random(12);
setlinestyle(4,0,0);
if (fill_pattern==0)
continue ;
drawtree (midx,fill_pattern);
drawbark(midx,fill_pattern);
drawstar(midx);
//..Draw the decorative bulbs..//
setfillstyle (1,random(15)+1);
sector(midx+50,120,230,310,8,13);
setfillstyle(1,random(15)+1);
sector(midx-50,120,230,310,8,13);
setfillstyle(1,random(15)+1);
sector(midx+95,210,230,310,8,13);
setfillstyle(1,random(15)+1);
sector(midx-95,210,230,310,8,13);
setfillstyle(1,random(15)+1);
sector(midx+140,300,230,310,8,13);
setfillstyle(1,random(15)+1);
sector(midx-140,300,230,310,8,13);
settextstyle(3,0,2);
setcolor(random(15)+1);
outtextxy(410,10,"WISH YOU A");
setcolor(random(15)+1);
outtextxy(410,35,"MERRY CHIRSTMAS ");
settextstyle(3,0,5);
setcolor(random(15)+1);
outtextxy(390,100,"HAPPY NEW YEAR");
settextstyle (10,0,4);
setcolor(random(15)+1);
outtextxy(250,360,"CHRISTMAS DAY");
settextstyle(2,0,6);
setcolor(random(15)+1);
outtextxy(250,435,"BINOY DEY");
delay(400);
}

while (!kbhit());
closegraph();
return 0;
}