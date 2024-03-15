#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    line(190, 50, 190, 270);
    line(190, 271, 520, 271);
    setfillstyle(SOLID_FILL, 15);
    bar(200, 80, 230, 270);
    setfillstyle(SOLID_FILL, 2);
    bar(231, 70, 261, 270);
    setfillstyle(SOLID_FILL, 4);
    bar(262, 120, 292, 270);
    setfillstyle(SOLID_FILL, 5);
    bar(293, 180, 323, 270);
    setfillstyle(SOLID_FILL, 14);
    bar(324, 160, 354, 270);
    setfillstyle(SOLID_FILL, 12);
    bar(355, 125, 385, 270);
    setfillstyle(SOLID_FILL, 13);
    bar(386, 110, 416, 270);
    setfillstyle(SOLID_FILL, 9);
    bar(417, 190, 447, 270);
    setfillstyle(SOLID_FILL, 10);
    bar(448, 230, 478, 270);
    setfillstyle(SOLID_FILL, 11);
    bar(479, 260, 509, 270);
    setfillstyle(SOLID_FILL, 12);

    getch();
    closegraph();
}