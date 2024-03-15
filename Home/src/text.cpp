#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    char str[] = "Paras Sachdeva";
    int y = 30;
    for (int i = 0; i <= 10; i++)
    {
        sprintf(str, "Paras Sachdeva %d", i);
        settextstyle(i, 0, 3);
        outtextxy(100, y, str);
        y += 30;
    }

    getch();
    closegraph();
}