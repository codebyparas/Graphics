#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    setfillstyle(XHATCH_FILL, RED);
    int points[] = {320, 150, 420, 300, 250, 300, 320, 150};

    fillpoly(4, points);

    getch();
    closegraph();
}