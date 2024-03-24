#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){
    int gd, gm, x, y;
    gd=DETECT;
    initgraph(&gd, &gm, "");
    x=getmaxx();
    y=getmaxy();
    printf("The resolution is %dx %d",x,y);
    getch();
    closegraph();
    return 0;
}