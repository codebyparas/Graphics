#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <dos.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Draw x-axis
    line(30, getmaxy() / 2, getmaxx() - 30, getmaxy() / 2);
    line(30, getmaxy() / 2, 40, getmaxy() / 2 - 10);
    line(30, getmaxy() / 2, 40, getmaxy() / 2 + 10);
    line(getmaxx() - 30, getmaxy() / 2, getmaxx() - 40, getmaxy() / 2 - 10);
    line(getmaxx() - 30, getmaxy() / 2, getmaxx() - 40, getmaxy() / 2 + 10);

    // Draw y-axis
    line(getmaxx() / 2, 30, getmaxx() / 2, getmaxy() - 30);
    line(getmaxx() / 2, 30, getmaxx() / 2 - 10, 40);
    line(getmaxx() / 2, 30, getmaxx() / 2 + 10, 40);
    line(getmaxx() / 2, getmaxy() - 30, getmaxx() / 2 - 10, getmaxy() - 40);
    line(getmaxx() / 2, getmaxy() - 30, getmaxx() / 2 + 10, getmaxy() - 40);

    // Label x-axis
    outtextxy(getmaxx() - 20, getmaxy() / 2 + 20, "X");
    outtextxy(20, getmaxy() / 2 + 20, "X'");
    
    // Label y-axis
    outtextxy(getmaxx() / 2 - 20, 10, "Y");
    outtextxy(getmaxx() / 2 - 20, getmaxy() - 20, "Y'");

    // Origin label
    outtextxy(getmaxx() / 2 + 5, getmaxy() / 2 + 10, "O");

    // Draw sine curve
    for (int x = 50; x <= getmaxx() - 50; x++) {
        float y1 = 100 * sin((x - 50) * 0.1);
        float y2 = 100 * sin((x - 49) * 0.1);
        line(x - 1, getmaxy() / 2 - y1, x, getmaxy() / 2 - y2);
    }

    getch();
    closegraph();
    return 0;
}