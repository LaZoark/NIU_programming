#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std ;

int main ( )   //基於當前系統的當前日期/時間
{
    while(1)
    {
        time_t now = time ( 0 ) ;//把now轉換為字符串形式
        char * dt =ctime(&now);
        cout << "本地日期和時間：" << dt << endl ;//把now轉換為tm結構
        Sleep(876);
    }
}
