#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,(char*)"");
    
    setcolor(RED);
    line(300, 60, 80, 320);
    line(300, 60, 520, 320);
    ellipse(300, 320, 180, 360, 220, 70);
    setfillstyle(SOLID_FILL, RED);
    floodfill(300, 61, RED);

    setcolor(WHITE);
    circle(300,55,30);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(300, 55, WHITE);

    setcolor(GREEN);
    ellipse(300, 190, 180, 360, 110, 20);
    ellipse(300, 220, 180, 360, 135, 30);
    // setfillstyle(SOLID_FILL, GREEN);
    // floodfill(301, 210, GREEN);

    getch();
    closegraph();
    return 0;
}