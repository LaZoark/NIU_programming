#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <cstring>
#include <sstream>
using namespace std;
bool isNumber(string line)
{
    return (atoi(line.c_str()));
}
int main()
{
    LPCTSTR text;
    string cmd,a;
    cout<<"�w��(s):";
    cin>>a;
    if(a=="a")
    {
        cmd="shutdown -";
        cmd+=a;
        text="�Ƶ{�����w����!";
    }
    else if(isNumber(a))
    {
        cmd="shutdown -s -t ";
        cmd+=a;
        text="�Ƶ{�����]�w����!";
    }
    else
    {
        cmd+=a;
        text="ERROR!";
    }

    LPCTSTR title="�۰ʩw������";
    MessageBoxExA(NULL,
                  text,
                  title,
                  MB_ICONEXCLAMATION,
                  MB_OKCANCEL
                 );
    //system("@echo off");
    //system("shutdown -s -t 6000 -c \"�o�̥i�H�ۥѥ[�W����!\" ");
    system(cmd.c_str());
    //system("shutdown -s -t a");
    system("exit");
}

/*
int MessageBoxExA(
  HWND   hWnd,
  LPCSTR lpText,
  LPCSTR lpCaption,
  UINT   uType,
  WORD   wLanguageId
);
*/
