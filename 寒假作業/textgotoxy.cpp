/*
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <windows.h>
#include <ctime>
#include <thread>
#define _WIN32_WINNT 0x500  //0x500 or 0x501
#define SCREEN_RATIO 9.28   //視窗座標與螢幕座標之比值
*/
#include "globle.h"  //超讚的功能!!!!!!
using namespace std;

void textgotoxy(int x,int y)
{
    srand((unsigned)time(NULL));
    char ch=rand()%6+1;
    if(x/SCREEN_RATIO<=135)
    cout<<"(視窗"<<(int)(x/SCREEN_RATIO)<<",鼠標"<<x<<")\n"<<setw((x/SCREEN_RATIO))<<ch<<endl;
    else
    cout<<"(視窗"<<(int)(x/SCREEN_RATIO)-2<<",鼠標"<<x<<")\n"<<setw((x/SCREEN_RATIO)-2)<<ch<<endl;
}
