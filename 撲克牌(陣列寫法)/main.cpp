/*This code substituted the word "flower" for the word "suits"(花色)*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <string>
#include <conio.h>
#include <windows.h>
#define CARD_AMOUNT 13
#define UI 80       //不得小於21!

using namespace std;

string fcard[CARD_AMOUNT*4];                     //flower-card  ****fcard[] is domain
string flower[]= {"[\5]","[\3]","[\4]","[\6]"};
void InitPoker(string card[],int n)              //n:牌組數(每組佔7行)
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
void Shuffle(string card[],int n)           //n:互換幾次
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
            cout<<"第"<<setw(2)<<k<<"張牌"<<fcard[k++]<<'\t';
        cout<<endl;
    }
}
void gotoxy(int x, int y)
{
    COORD scrn= {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),scrn);
}
void ShowAll(string card[],int n,int k)       //n:有幾張牌 k:每行顯示張數
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
    for(int a=0; a<UI/16; a++)                                  //  |  撲克牌  |
    {                                                           //  ------------
        cout<<ui<<setw(UI-2)<<setfill(' ')<<ui<<endl;
        Sleep(100);
    }
    cout<<ui<<setw((UI+14)/2)<<"撲 克 牌   POKER"<<setw((UI+15)/2-16)<<ui<<endl;
    for(int a=0; a<UI/16; a++)
    {
        cout<<ui<<setw(UI-2)<<setfill(' ')<<ui<<endl;
        Sleep(100);
    }
    cout<<setw(UI/2+5)<<setfill(ui)<<" by  陳偉銍 "<<setw(UI/2-5)<<setfill(ui)<<'\n'<<setfill(' ');
}
int main()
{
    int n,k;
    srand((unsigned)time(NULL));
    string card[]= {" A"," 2"," 3"," 4"," 5"," 6"," 7"," 8"," 9","10"," J"," Q"," K"};
    while(1)
    {
        Poker();
        cout<<"請輸入欲加入牌組數(decks): ";
        cin>>n;
        cout<<"總共"<<n<<"副牌(decks)\n\n";
        InitPoker(card,n);
        cout<<"請輸入欲洗牌次數: ";
        cin>>n;
        Shuffle(card,n);
        cout<<"\n請輸入撲克牌張數: ";
        cin>>n;
        cout<<"請輸入每行顯示張數: ";
        cin>>k;
        ShowAll(card,n,k);
        cout<<"\n\n請按任意鍵[ 重 新 開 始 ]"<<endl;
        _getch();
        cout<<"準備中請稍後...\t\t";
        Sleep(1000);
        system("cls");
    }
}
