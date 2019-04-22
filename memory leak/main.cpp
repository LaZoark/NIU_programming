#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int *leak=new int;
    for(int i=0;i<100;i++)
    {
        for(int f=0;f<100000;f++)
        int *leak=new int(f);
        cout<<"leaking -t:"<<i<<"(NULL)"<<endl;
        //Sleep(10);
    }
    //delete leak;
}
