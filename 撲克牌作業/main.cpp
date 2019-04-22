#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <string>
#include <conio.h>
#include <windows.h>
#include <ostream>
#define CARD_AMOUNT 13
#define UI 80       //���o�p��21!

using namespace std;

string fcard[CARD_AMOUNT*4];                     //flower-card  ****fcard[] is domain
string flower[]= {"[\5]","[\3]","[\4]","[\6]"};
void InitPoker_1(string card[],int n)              //n:�P�ռ�(�C�զ�7��)
{
    while(n-->0)
    {
        for(int k=0,j=0; j<4; j++)
        {
            for(int i=j*CARD_AMOUNT; i<CARD_AMOUNT*(j+1); i++)
            {
                fcard[i]=flower[j]+card[k++%CARD_AMOUNT];
                cout<<fcard[i]<<'\t';
            }
            cout<<endl;
        }
        cout<<'\n'<<setw(102)<<setfill('#')<<'\n'<<setfill(' ')<<endl;
    }
}
void Shuffle_1(string card[],int n)                //n:�����X��
{
    string temp;
    while(n-->0)
        for(int r,i=0; i<CARD_AMOUNT*4; i++)
        {
            r=rand()%CARD_AMOUNT*4;
            temp=fcard[i];
            fcard[i]=fcard[r];
            fcard[r]=temp;
        }
    for(int k=0,a=0; a<CARD_AMOUNT; a++)
    {
        for(int b=0; b<4; b++)
            cout<<"��"<<setw(2)<<k<<"�i�P"<<fcard[k++]<<'\t';
        cout<<endl;
    }
}
void gotoxy(int x, int y)
{
    COORD scrn= {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),scrn);
}
void SetColor(int color)
{
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,color);
}
void ShowAll_1(string card[],int n,int k)       //n:���X�i�P k:�C����ܱi��
{
    for(int j=0,a=0; a<k; a++)
    {
        for(int b=0; n%k==0?b<n/k:b<=n/k; b++)
            cout<<setw(5)<<fcard[j++]<<'\t';
        cout<<endl;
    }
}
void Poker(void)
{
    char ui=3+rand()%4;
    cout<<setw(UI)<<setfill(ui)<<'\n'<<setfill(' ');            //  ------------
    for(int a=0; a<UI/16; a++)                                  //  |  ���J�P  |
    {                                                           //  ------------
        cout<<ui<<setw(UI-2)<<setfill(' ')<<ui<<endl;
        Sleep(100);
    }
    cout<<ui<<setw((UI+14)/2)<<"�� �J �P   POKER"<<setw((UI+15)/2-16)<<ui<<endl;
    for(int a=0; a<UI/16; a++)
    {
        cout<<ui<<setw(UI-2)<<setfill(' ')<<ui<<endl;
        Sleep(100);
    }
    cout<<setw(UI/2+5)<<setfill(ui)<<" by  �����~ "<<setw(UI/2-5)<<setfill(ui)<<'\n'<<setfill(' ');
}
int main()
{
    SetConsoleTitle("yo �o�OPOKER�A����");
    int n,k;
    srand((unsigned)time(NULL));
    string card[]= {" A"," 2"," 3"," 4"," 5"," 6"," 7"," 8"," 9","10"," J"," Q"," K"};
    while(1)
    {
        Poker();
        cout<<"�п�J���[�J�P�ռ�(decks): ";
        cin>>n;
        cout<<"�`�@"<<n<<"�ƵP(decks)\n\n";
        InitPoker_1(card,n);
        cout<<"�п�J���~�P����: ";
        cin>>n;
        Shuffle_1(card,n);
        cout<<"\n�п�J���J�P�i��: ";
        cin>>n;
        cout<<"�п�J�C����ܱi��: ";
        cin>>k;
        ShowAll_1(card,n,k);
        cout<<"\n\n�Ы����N��[ �� �s �} �l ]\t(�Ϊ̥H\"Ctrl+c\"���})"<<endl;
        _getch();
        cout<<"�ǳƤ��еy��...\t\t";
        Sleep(1000);
        system("cls");
    }
}
