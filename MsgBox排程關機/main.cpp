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
    cout<<"定時(s):";
    cin>>a;
    if(a=="a")
    {
        cmd="shutdown -";
        cmd+=a;
        text="排程關機已取消!";
    }
    else if(isNumber(a))
    {
        cmd="shutdown -s -t ";
        cmd+=a;
        text="排程關機設定完成!";
    }
    else
    {
        cmd+=a;
        text="ERROR!";
    }

    LPCTSTR title="自動定時關機";
    MessageBoxExA(NULL,
                  text,
                  title,
                  MB_ICONEXCLAMATION,
                  MB_OKCANCEL
                 );
    //system("@echo off");
    //system("shutdown -s -t 6000 -c \"這裡可以自由加上註解!\" ");
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
