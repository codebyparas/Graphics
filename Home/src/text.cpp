#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>

int main()
{
    int x, y, i;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");
    for (i = 0, x = 100, y = 50; i <= 10; i++, x += 20, y += 35)
    {
        settextstyle(i, 0, 2);
        outtextxy(x, y, "Hello World!!");
    }
    getch();
    closegraph();
}