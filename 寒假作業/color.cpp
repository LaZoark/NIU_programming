#include <iostream>
#include <windows.h>
void SetColor(int color)
{
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,color);
}
