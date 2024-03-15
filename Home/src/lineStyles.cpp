#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

// solid
setlinestyle(0,1,1);
line(100,100,400,100);
// dotted
setlinestyle(1,3,1);
line(100,130,400,130);
// centered
setlinestyle(2,1,1);
line(100,160,400,160);
// dashed
setlinestyle(3,3,1);
line(100,190,400,190);
// user bit
setlinestyle(4,1,1);
line(100,220,400,220);


    getch();
    closegraph();
}