#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int gd=DETECT, gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    // Base
	rectangle(getmaxx()/2-100,getmaxy()-50,getmaxx()/2+100,getmaxy());
	setfillstyle(SOLID_FILL, LIGHTGRAY);
	floodfill(getmaxx()/2, getmaxy()-10, WHITE);
	rectangle(getmaxx()/2-50,getmaxy()-100,getmaxx()/2+50,getmaxy()-50);
	floodfill(getmaxx()/2, getmaxy()-90, WHITE);

    // Flag Pole
	setcolor(BROWN);
	setfillstyle(SOLID_FILL, BROWN);
	rectangle(getmaxx()/2-10,60,getmaxx()/2,getmaxy()-100);
	line(getmaxx()/2-10,60,getmaxx()/2-5,50);
	floodfill(getmaxx()/2-5, 70, BROWN);
	line(getmaxx()/2,60,getmaxx()/2-5,50);
	floodfill(getmaxx()/2-5, 55, BROWN);

	// Top Strip
	setcolor(LIGHTRED);
	rectangle(getmaxx()/2,60,getmaxx()/2+200,100);
	setfillstyle(SOLID_FILL,LIGHTRED);
	floodfill(getmaxx()/2+20,75,LIGHTRED);

	// Middle Strip
	setcolor(WHITE);
	rectangle(getmaxx()/2,100,getmaxx()/2+200,140);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(getmaxx()/2+20,120,WHITE);

	// Ashoka Chakra
	setcolor(BLUE);
	circle(getmaxx()/2+100,120,23);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(getmaxx()/2+100,120,BLUE);

	// Spokes
	int numSpokes = 15;
	int centerX=getmaxx()/2+100;
    int centerY=120;
	int radius=23;
	double angleIncrement = 2 * M_PI / numSpokes;
	setcolor(WHITE);
	for (int i = 0; i < numSpokes; i++) {
        double angle = i * angleIncrement;
        int x1 = centerX + radius * cos(angle);
        int y1 = centerY + radius * sin(angle);
        int x2 = centerX;
        int y2 = centerY;
        line(x1, y1, x2, y2);
    }

	// Bottom Strip
	setcolor(GREEN);
	rectangle(getmaxx()/2,140,getmaxx()/2+200,180);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(getmaxx()/2+20,160,GREEN);

	getch();
    closegraph();
    return 0;
}
