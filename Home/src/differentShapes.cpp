#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){
    int gd, gm, n;
    gd = DETECT;
    initgraph(&gd, &gm, "");
    printf("\t\tMENU");
    printf("\n1. Line");
    printf("\n2. Rectangle");
    printf("\n3. Circle");
    printf("\n4. Ellipse");
    printf("\nEnter the number from options");
    scanf("%d",&n);
    getch();
    closegraph();
    return 0;
}