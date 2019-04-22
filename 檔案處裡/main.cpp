#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
    //char str[N];
    int i=0;
    char ch=65+i;
    fstream test;//("test.txt",ios::trunc|ios::in);
    test.open("test.txt",ios::out);
    if(test.is_open())
    while(1)
    {
        //keybd_event(ch,0,0,0);
        //test<<_getch()<<endl;
        //keybd_event(ch,0,KEYEVENTF_KEYUP,0); //©ñ¶}
        cout<<_getch()<<endl;
    }
    else
        cout<<"ERROR"<<endl;

}
