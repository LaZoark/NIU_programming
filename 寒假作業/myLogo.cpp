#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <conio.h>
#include <windows.h>
//#define UI 80        //���o�p��21!
#include "globle.h"

using namespace std;

void Logo(void)
{
    srand((unsigned)time(NULL));
    char ui=3+rand()%4;
    cout<<setw(UI)<<setfill(ui)<<'\n'<<setfill(' ');            //  --------------
    for(int a=0; a<UI/16; a++)                                  //  |  �ƹ��y��  |
    {                                                           //  --------------
        cout<<ui<<setw(UI-2)<<setfill(' ')<<ui<<endl;
        Sleep(100);
    }
    cout<<ui<<setw((UI+14)/2)<<"�� �� �y �� MOUSE"<<setw((UI+15)/2-16)<<ui<<endl;
    for(int a=0; a<UI/16; a++)
    {
        cout<<ui<<setw(UI-2)<<setfill(' ')<<ui<<endl;
        Sleep(100);
    }
    cout<<setw(UI/2+5)<<setfill(ui)<<" by  �����~ "<<setw(UI/2-5)<<setfill(ui)<<'\n'<<setfill(' ');
}
