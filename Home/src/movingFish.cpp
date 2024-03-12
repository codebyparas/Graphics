#include<graphics.h>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<ctime>

void drawFish(int x, int y, int color) {
    // Body
    ellipse(x, y, 0, 360, 30, 15);

    // Eye
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(x + 25, y - 5, 2, 2);

    // Tail
    setfillstyle(SOLID_FILL, color);
    line(x - 30, y, x - 50, y - 20);
    line(x - 50, y - 20, x - 50, y + 20);
    line(x - 50, y + 20, x - 30, y);

    // Fins
    line(x + 10, y - 10, x + 30, y - 20);
    line(x + 10, y + 10, x + 30, y + 20);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");

    srand(time(NULL));

    // Sea color
    setbkcolor(LIGHTBLUE);

    // Fish colors
    int fishColors[] = {RED, GREEN, YELLOW, MAGENTA, CYAN};

    while (!kbhit()) {
        cleardevice(); // Clears the previous frame

        // Draw sea
        rectangle(0, 0, getmaxx(), getmaxy());
        floodfill(1, 1, LIGHTBLUE);

        // Draw fishes
        for (int i = 0; i < 5; ++i) {
            int x = rand() % (getmaxx() - 100) + 50; // Random x position
            int y = rand() % (getmaxy() - 100) + 50; // Random y position
            int color = fishColors[rand() % 5]; // Random fish color
            drawFish(x, y, color);
        }

        delay(500); // Adjust the delay for the desired speed
    }

    closegraph();
    return 0;
}