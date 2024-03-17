#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>


int main()
{
    int i,j,r,c;
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"C:\\MinGW\\lib\\libbgi.a");
    setcolor(WHITE);
    for(i=250,j=200,r=165,c=0;r>=5;r=r-10,c++)
    {
       setcolor(c);
       circle(i,j,r);
       setfillstyle(1,c);
       floodfill(i,j,c);
    }
    getch();
    closegraph();
    return 0;
}