#include <iostream>
#include <windows.h>
void SetColor(int color)
{
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,color);
}
using namespace std;
int main()
{
    int color;
    for(color=0; color<=256; color++)
    {
        char a[64]="³o¬O¹wÄý-################################";
        SetColor(color);
        cout << a << "\t\t" << color << endl;
        Sleep(10);
    }
    SetColor(0xf);
}
