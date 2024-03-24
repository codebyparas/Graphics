#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw cone
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    line(100, 200, 540, 200);
    line(100, 200, 320, 50);
    line(540, 200, 320, 50);
    floodfill(320, 150, RED);

    // Draw base of the cap
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    pieslice(320, 200, 0, 180, 100);

    // Draw fur
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    ellipse(320, 200, 0, 360, 100, 60);
    floodfill(320, 200, WHITE);

    getch();
    closegraph();
    return 0;
}
