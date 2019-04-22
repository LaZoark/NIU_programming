#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int a,b,c,d=0;
    for(a=1;a<=10000;a++)
    {
        b=rand()%6;
        c=rand()%6;
        if(b==c)
        d++;
    }
    cout<<d<<endl;
}
