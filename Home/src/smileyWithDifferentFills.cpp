#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    setfillstyle(SOLID_FILL, BLACK);
    circle(255, 255, 150);
    floodfill(255, 255, WHITE);

    setfillstyle(SOLID_FILL, BLACK);
    arc(210, 206, 0, 180, 20);
    arc(210, 206, 0, 180, 30);
    line(180, 206, 190, 206);
    line(230, 206, 240, 206);
    floodfill(210, 207, WHITE);

    setfillstyle(SOLID_FILL, BLACK);
    arc(300, 206, 0, 180, 20);
    arc(300, 206, 0, 180, 30);
    line(270, 206, 280, 206);
    line(320, 206, 330, 206);

    setfillstyle(SOLID_FILL, YELLOW);
    ellipse(260, 250, 180, 360, 100, 45);
    ellipse(260, 250, 180, 360, 100, 90);
    floodfill(260, 250, WHITE);

    setfillstyle(SOLID_FILL, WHITE);
    ellipse(261, 302, 180, 360, 60, 25);
    line(200, 302, 320, 302);
    floodfill(202, 303, WHITE);

    getch();
    closegraph();
    return 0;
}