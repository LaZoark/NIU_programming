#include <iostream>
#include <cstdlib>
#include <windows.h>
void SetColor(int color)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,color);
}
using namespace std;
int main(void)
{
    while(1)
    {
        char a;
        SetColor(a=3);
        cin >> a;
        if(a>=65&&a<=96)
        {
            int i=a+32;
            char b;
            b=a+32;
            cout << "小寫為 : " << b << endl;
            cout << "ASCII = " << i << endl;
        }
        if(a>=97&&a<=128)
        {
            int I=a-32;
            char B;
            B=a-32;
            cout << "大寫為 : " << B << endl;
            cout << "ASCII = " << I << endl;
        }
    }
    return 0;
}
