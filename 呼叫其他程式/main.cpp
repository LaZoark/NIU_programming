#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include <conio.h>
#include <thread>
#include <stdio.h>
#include <string>
using namespace std;
void gotoxy(int x, int y)
{
    COORD scrn= {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),scrn);
}
void TIME()
{
    while(1)
    {
        time_t now=time(NULL);
        char *t=ctime(&now);
        string clock=t;     //25
        gotoxy(70,0);
        cout<<clock.substr(0,24)<<"\t\t\t\r";
        Sleep(1000);
    }
    gotoxy(0,1);
}

int main()
{
    thread t1(TIME);
    int i;
    while(cin>>i)
        for(int a=i; a>0; a--)
        {
            cout<<"­Ë¼Æ"<<a<<"¬í"<<endl;
            Sleep(100);
        }
    t1.join();
}
