#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Draw y-axis   
    line(190, 50, 190, 270);
    line(190,50,200,60);
    line(190,50,180,60);

    // Draw x-axis
    line(190, 271, 530, 271);
    line(530,271,520,261);
    line(530,271,520,281);

    // Labels
    outtextxy(540,265,"x-axis");
    outtextxy(180,25,"y-axis");
    outtextxy(180,280,"Origin");
    outtextxy(300,50,"Histogram");

    // Bars
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
    return 0;
}
