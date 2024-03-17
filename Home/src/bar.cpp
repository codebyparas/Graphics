#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>


int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"C:\\MinGW\\lib\\libbgi.a");
    
    setfillstyle(LINE_FILL,RED);
    line(50,300,300,300);
    line(50,300,50,50);
    bar(100,150,125,300);
    getch();
    closegraph();
    return 0;
}
