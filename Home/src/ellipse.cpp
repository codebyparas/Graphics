#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>


int main()
{
    int i, j;
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"C:\\MinGW\\lib\\libbgi.a");
    pieslice(getmaxx()/2,getmaxy()/2,0,180,80);
    for(i=100,j=30;j<=500;i=i+50,j=j+20)
    {
        ellipse(getmaxx()/2,getmaxy()/2,0,360,i,j);
    }
    getch();
    closegraph();
    return 0;
}