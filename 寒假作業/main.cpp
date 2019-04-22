/*
1.主、副程式不要超過50行
2.程式不要全部放在同個.cpp
3.合計超過300行程式
5.自己慢慢建構、題目可自訂義(可FB與我確認)
8.取用網路上他人所寫之程式片段<10%
*/
///此程式運用到C++的"物件導向"及少量的"多工處理"
#include "globle.h"
using namespace std;
int numOfClicks;
extern void getMousePosition(int&, int&);
extern void textgotoxy(int,int );
extern void full_textgotoxy(int,int);
extern void Logo(void);
extern void fullscreen(void);
extern void SetColor(int color);
void gotoxy(int x, int y)
{
    COORD scrn;
    HANDLE hOuput=GetStdHandle(STD_OUTPUT_HANDLE);
    scrn.X=x;
    scrn.Y=y;
    SetConsoleCursorPosition(hOuput,scrn);
}
int main()
{
    srand((unsigned)time(NULL));
    fullscreen();
    cout<<"***請先將視窗變成全螢幕 並將字體改為「點陣」\t\t再按任意鍵繼續\n";
    _getch();
    SetConsoleTitle("譜出一道彩虹!!!");
    cout<<"老師好/學長好 這是陳偉銍(B0742006)的寒假作業\n\n";
    while(1)
    {
        Logo();
        int xPos,yPos,sleepTime;
        char ch;
        cout<<"請輸入讀取次數: ";
        cin>>numOfClicks;
        cout<<"請問是否填滿(真．彩虹模式)? 輸入(y/n) \n";
        cin>>ch;
        cout<<"請輸入每次讀取間隔(ms): ";
        cin>>sleepTime;
        cout<<"倒數3秒開始讀取"<<endl;
        Sleep(1000);
        cout << "2..\n";
        Sleep(1000);
        cout << "1..\n\n";
        Sleep(1000);
        if(ch=='n')
        for(int x=0; x<numOfClicks; x++)
        {
            SetColor((rand()%15)+1);
            getMousePosition(xPos,yPos);
            thread t1(textgotoxy,xPos,yPos);
            t1.join();
            Sleep(sleepTime);
        }
        else
        for(int x=0; x<numOfClicks; x++)
        {
            SetColor((rand()%15)+1);
            getMousePosition(xPos,yPos);
            thread t1(full_textgotoxy,xPos,yPos);
            t1.join();
            Sleep(sleepTime);
        }
        cout<<"請按任意鍵重新開始...\n";
        _getch();
    }
}
