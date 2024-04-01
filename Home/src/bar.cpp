#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>


int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    
    setfillstyle(SOLID_FILL,RED);

    // Draw x-axis
    line(50,300,50,50);
    line(50,50,40,60);
    line(50,50,60,60);

    // Draw y-axis
    line(50,300,300,300);
    line(300,300,290,290);
    line(300,300,290,310);

    // Label
    outtextxy(310,290,"x-axis");
    outtextxy(40,30,"y-axis");
    outtextxy(40,310,"Origin");
    outtextxy(150,200,"BAR-2D");

    // Draw Bar-2D
    bar(100,150,125,300);

    getch();
    closegraph();
    return 0;
}