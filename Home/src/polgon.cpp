#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Coordinates of the octagon
    int octagon[] = {200, 100, 300, 100, 350, 175, 300, 250, 200, 250, 150, 175, 200, 100};

    // Draw octagon outline
    drawpoly(8, octagon);

    // Fill octagon with different fill style
    setfillstyle(HATCH_FILL, BLUE);
    fillpoly(8, octagon);

    getch();
    closegraph();
    return 0;
}
