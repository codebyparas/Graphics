#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,(char*)"");

    setfillstyle(SOLID_FILL, 2);
    line(300, 60, 80, 320);
    line(300, 60, 520, 320);
    ellipse(300, 320, 180, 360, 220, 70);
    floodfill(300, 61, WHITE);

    setfillstyle(SOLID_FILL, 15);
    ellipse(300, 190, 180, 360, 110, 20);
    ellipse(300, 220, 180, 360, 135, 30);
    floodfill(301, 210, WHITE);

    getch();
    closegraph();
    return 0;
}