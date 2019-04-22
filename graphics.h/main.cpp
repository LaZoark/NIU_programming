#include <iostream>
#include <graphics.h>
#include <conio.h>
using namespace std;
int main()
{
    //SetPixel(NULL, 0, 100, RGB(255, 255, 255));
    //_getch();
    int gd=DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\Users\\La Zoark\\OneDrive\\орн▒\\WinRoot\\TURBOC3\\BGI");
    setcolor(11);
    line(0,240,639,240);
    line(320,0,320,479);
    setcolor(14);
    circle(320,240,200);
    _getch();
    closegraph();
}
