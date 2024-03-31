#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Draw face
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(250, 250, 150);
    floodfill(250, 250, RED);

    // Draw eyes
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, WHITE);
    circle(190, 200, 25);
    floodfill(190, 200, BLACK);
    circle(310, 200, 25);
    floodfill(310, 200, BLACK);

    // Draw pupils
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    circle(190, 200, 10);
    floodfill(190, 200, BLACK);
    circle(310, 200, 10);
    floodfill(310, 200, BLACK);

    // Draw mouth (smile)
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    arc(250, 280, 200, 340, 80);

    getch();
    closegraph();
    return 0;
}
