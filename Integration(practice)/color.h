#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED
#include <windows.h>
void SetColor(int color)
{
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,color);
}
#define BLUE 1
#define GREEN 2
#define AQUA 3
#define RED 4
#define PURPLE 5
#define YELLOW 6
#define SILVER 7
#define GREY 8
#define L_BLUE 9
#define L_GREEN 10
#define L_AQUA 11
#define L_RED 12
#define L_PURPLE 13
#define L_YELLOW 14
#define WHITE 15

#define RED_WHITE 79
#define WHITE_BLUE 159

/**
0 = Black	8 = Gray
1 = Blue	9 = Light Blue
2 = Green	A = Light Green
3 = Aqua	B = Light Aqua
4 = Red	    C = Light Red
5 = Purple	D = Light Purple
6 = Yellow	E = Light Yellow
7 = SELVER	F = Bright White
**/
#endif // COLOR_H_INCLUDED
