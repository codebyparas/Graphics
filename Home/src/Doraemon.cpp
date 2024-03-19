#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw Doraemon's head
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    fillellipse(320, 200, 100, 100);

    // Draw Doraemon's face
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(320, 200, 80, 90);

    // Draw Doraemon's eyes
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(300, 180, 15, 25);
    fillellipse(340, 180, 15, 25);

    // Draw Doraemon's nose
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(320, 210, 7, 7);

    // Draw Doraemon's mouth
    setcolor(BLACK);
    arc(320, 215, 200, 340, 30);

    // Draw Doraemon's whiskers
    setcolor(BLACK);
    line(280, 200, 250, 180);
    line(280, 200, 250, 200);
    line(280, 200, 250, 220);
    line(360, 200, 390, 180);
    line(360, 200, 390, 200);
    line(360, 200, 390, 220);

    // Draw Doraemon's body
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    arc(320, 400, 0, 180, 100);
    arc(320, 400, 0, 180, 100);

    // Draw Doraemon's hands
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    arc(220, 400, 0, 180, 80);
    arc(420, 400, 0, 180, 80);

    // Draw Doraemon's feet
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    ellipse(280, 500, 0, 360, 40, 20);
    ellipse(360, 500, 0, 360, 40, 20);

    // Draw Doraemon's bell
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    ellipse(320, 350, 0, 360, 15, 25);
    floodfill(320, 350, YELLOW);
    circle(320, 360, 5);

    getch();
    closegraph();
    return 0;
}
