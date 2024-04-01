#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // road
    line(0, 400, getmaxx(), 400);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(5,450,WHITE);

    // human
    circle(150,300,20);
    line(150,320,150,370);
    line(150,370,130,400);
    line(150,370,170,400);
    line(150,330,170,370);
    line(110,320,150,350);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(150,300,WHITE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(140,390,WHITE);

    // kite
    line(70,50,30,80);
    line(70,50,110,80);
    line(30,80,70,115);
    line(110,80,50,115);
    line(65,110,110,320);
    setfillstyle(SOLID_FILL,RED);
    floodfill(75,55,WHITE);
    line(30,80,110,80);
    line(70,50,65,110);

    // house
    line(350, 250, 350, 400);
    line(500, 250, 500, 400);
    line(350,250,500,250);
    line(430,170,499.9,250);
    line(430,170,350,250);
    line(390, 310, 390, 400);
    line(460, 310, 460, 400);
    line(390, 310, 460, 310);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    floodfill(400,270,WHITE);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(400,240,WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(400,320,WHITE);

    // tree
    line(225, 260, 225, 400);
    line(245, 260, 245, 400);
    line(170, 260,295, 260);
    line(220,190,170, 260);
    line(250,190,295, 260);
    line(190, 190,275, 190);
    line(237.5, 120,190, 190);
    line(237.5, 120,275, 190);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(230,200,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(237.5,150,WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(230,300,WHITE);

    // flower
    line(570, 335, 570, 400);
    circle(570,310,10);
    ellipse(570,315,180,360,10,20);
    ellipse(570,305,0,180,10,20);
    ellipse(580,310,270,90,20,9);
    ellipse(560,310,90,270,20,9);
    ellipse(570,360,90,270,14,9);
    ellipse(570,365,270,90,14,9);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(570,310,WHITE);
    setfillstyle(SOLID_FILL,LIGHTRED);
    floodfill(570,320,WHITE);
    setfillstyle(SOLID_FILL,LIGHTRED);
    floodfill(570,290,WHITE);
    setfillstyle(SOLID_FILL,LIGHTRED);
    floodfill(585,310,WHITE);
    setfillstyle(SOLID_FILL,LIGHTRED);
    floodfill(550,310,WHITE);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(560,360,WHITE);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(575,360,WHITE);

    //  sun
    circle(580,60,25);
    line(580,5,580,35);
    line(580,85,580,120);
    line(605,60,630,60);
    line(525,60,555,60);
    line(540,10,560,40);
    line(610,10,595,40);
    line(560,75,522,100);
    line(595,79,610,110);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(580,60,WHITE);

    // Fill Background
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(0,0,WHITE);

    getch();
    closegraph();
}
