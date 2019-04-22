#include <windows.h>
#include <iostream>
using namespace std;
void getMousePosition (int& xPos, int& yPos)
{
    POINT cursorPos;
    GetCursorPos(&cursorPos);
    xPos = cursorPos.x;
    yPos = cursorPos.y;
}
