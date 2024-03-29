// C Implementation for bar3d() function 
#include <graphics.h> 

// driver code 
int main() 
{ 
	
	int gd = DETECT, gm; 
	initgraph(&gd, &gm, ""); 

	// location of sides 
	int left, top, right, bottom; 

	// depth of the bar 
	int depth; 

	// top flag denotes top line. 
	int topflag; 

	// left, top, right, bottom, 
	// depth, topflag location's 
	bar3d(left = 150, top = 250, 
	right = 190, bottom = 350, 
	depth = 20, topflag = 1); 

	bar3d(left = 220, top = 150, 
	right = 260, bottom = 350, 
	depth = 20, topflag = 0); 

	bar3d(left = 290, top = 200, 
	right = 330, bottom = 350, 
	depth = 20, topflag = 1); 

	// y axis line 
	line(100, 50, 100, 350); 
	line(100,50,90,60);
	line(100,50,110,60);
	outtextxy(80,30,"y-axis");

	// x axis line 
	line(100, 350, 400, 350); 
	line(400, 350, 390, 340); 
	line(400, 350, 390, 360); 
	outtextxy(415,340,"x-axis");

	outtextxy(90,355,"Origin");
	outtextxy(230,80,"Bar-3D");

	getch(); 
	closegraph(); 
	return 0; 
} 
