/*
1.�D�B�Ƶ{�����n�W�L50��
2.�{�����n������b�P��.cpp
3.�X�p�W�L300��{��
5.�ۤv�C�C�غc�B�D�إi�ۭq�q(�iFB�P�ڽT�{)
8.���κ����W�L�H�Ҽg���{�����q<10%
*/
///���{���B�Ψ�C++��"����ɦV"�Τֶq��"�h�u�B�z"
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
    cout<<"***�Х��N�����ܦ����ù� �ñN�r��אּ�u�I�}�v\t\t�A�����N���~��\n";
    _getch();
    SetConsoleTitle("�ХX�@�D�m�i!!!");
    cout<<"�Ѯv�n/�Ǫ��n �o�O�����~(B0742006)���H���@�~\n\n";
    while(1)
    {
        Logo();
        int xPos,yPos,sleepTime;
        char ch;
        cout<<"�п�JŪ������: ";
        cin>>numOfClicks;
        cout<<"�аݬO�_��(�u�D�m�i�Ҧ�)? ��J(y/n) \n";
        cin>>ch;
        cout<<"�п�J�C��Ū�����j(ms): ";
        cin>>sleepTime;
        cout<<"�˼�3��}�lŪ��"<<endl;
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
        cout<<"�Ы����N�䭫�s�}�l...\n";
        _getch();
    }
}
