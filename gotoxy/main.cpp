#include <iostream>
#include <windows.h>    //key
#include <conio.h>
using namespace std;
void gotoxy(int x, int y)
{
    COORD scrn;
    HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
    scrn.X=x;
    scrn.Y=y;
    SetConsoleCursorPosition(hOuput,scrn);
}
int main()      //following are some examples
{
    char ch;
    gotoxy(30,15);
    cout<<"���o�̬O(30,15)";
    gotoxy(0,0);
    cout<<"123456789123456789123456789123456789123456789";
    getch();
    gotoxy(8,0);
    cout<<endl;
    getch();
    gotoxy(0,0);
    cout<<"###########################################";
    getch();
    gotoxy(8,0);
    cout<<"�������a��"<<endl;
    cout<<"\033"<<flush<<"�o�O����UUUU";
    Sleep(1000);
    cout<<"\n����"<<'\r';
    cin>>ch;
}
/*also shorter:

void gotoxy(int x, int y)
{
    COORD scrn={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),scrn);
}
*/
