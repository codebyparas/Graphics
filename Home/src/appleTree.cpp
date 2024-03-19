#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw trunk of the tree
    setcolor(BROWN);
    rectangle(300, 400, 350, 600);
    floodfill(325, 500, BROWN);

    // Draw leaves of the tree
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    fillellipse(275, 350, 100, 100);
    fillellipse(325, 300, 100, 100);
    fillellipse(375, 350, 100, 100);
    fillellipse(325, 350, 150, 100);

    // Draw apples
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    fillellipse(300, 200, 20, 20);
    fillellipse(320, 220, 20, 20);
    fillellipse(340, 200, 20, 20);
    fillellipse(320, 190, 20, 20);

    getch();
    closegraph();
    return 0;
}
