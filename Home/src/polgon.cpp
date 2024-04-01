#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Coordinates of the octagon
    int hexagon[] = {200, 100, 300, 100, 350, 175, 300, 250, 200, 250, 150, 175, 200, 100};

    // Draw hexagon outline
    drawpoly(6, hexagon);

    // Fill hexagon with different fill style
    setfillstyle(HATCH_FILL, BLUE);
    fillpoly(6, hexagon);

    getch();
    closegraph();
    return 0;
}