#include<graphics.h>
#include<conio.h>

void drawHumanAnatomy() {
    // Initialize graphics mode
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    // Head
    circle(300, 100, 50);

    // Torso
    line(300, 150, 300, 300);

    // Left Arm
    line(300, 200, 250, 250);

    // Right Arm
    line(300, 200, 350, 250);

    // Left Leg
    line(300, 300, 250, 400);

    // Right Leg
    line(300, 300, 350, 400);

    getch();
    closegraph();
}

int main() {
    drawHumanAnatomy();
    return 0;
}
