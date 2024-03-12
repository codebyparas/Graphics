#include <graphics.h>
#include <math.h>

void drawCone(int x, int y, int radius, int height) {
    // Draw the base circle
    circle(x, y, radius);

    // Draw lines connecting the base circle to the top point of the cone
    line(x - radius, y, x, y - height);
    line(x + radius, y, x, y - height);

    // Draw the lines forming the cone's lateral surface
    float angle;
    int x1, y1, x2, y2;

    for (angle = 0; angle <= 180; angle += 1) {
        x1 = x - radius + radius * cos(angle * M_PI / 180);
        y1 = y - height + radius * sin(angle * M_PI / 180);
        x2 = x + radius - radius * cos(angle * M_PI / 180);
        y2 = y - height + radius * sin(angle * M_PI / 180);

        line(x1, y1, x2, y2);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int x = 200;    // x-coordinate of the center of the base circle
    int y = 300;    // y-coordinate of the center of the base circle
    int radius = 50; // radius of the base circle
    int height = 100; // height of the cone

    drawCone(x, y, radius, height);

    getch();
    closegraph();
    return 0;
}
