#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x, y;
    int angle=0;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");
    //line(0,getmaxx()/2,getmaxx(),getmaxy()/2);
    line(0,240,getmaxx(),240);
    line(0,0,0,500);
    outtextxy(10,250,"(0,0)");
    outtextxy(0,50,"y-axis");
    outtextxy(getmaxx()-50,getmaxy()/2+5,"x-axis");
    for(x=0;x<getmaxx();x+=3)
    {
        y=50* sin(angle*3.141/180);
        y=getmaxy()/2-y;
        putpixel(x,y,15);
        delay(50);
        angle+=5;
    }
    getch();
    closegraph();
}