#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>


int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"C:\\MinGW\\lib\\libbgi.a");
    setcolor(YELLOW);
    circle(250,200,100);
    setfillstyle(1,YELLOW);
    floodfill(250,200,YELLOW);

    setcolor(WHITE);
    circle(200,160,25);
    setfillstyle(1,WHITE);
    floodfill(200,160,WHITE);
    circle(300,160,25);
    floodfill(300,160,WHITE);

    setcolor(BLACK);
    circle(200,165,10);
    setfillstyle(1,BLACK);
    floodfill(200,165,BLACK);
    circle(300,165,10);
    setfillstyle(1,BLACK);
    floodfill(300,165,BLACK);

    setcolor(BLACK);
    arc(250,200,220,320,60);
    line(250,180,250,220);

    
    getch();
    closegraph();
    return 0;
}