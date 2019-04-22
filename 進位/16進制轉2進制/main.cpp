#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int a,b,c=0,d=32767;
    while(cin>>hex>>a)
    {
        for(int j=1; j<=16; j++)
        {
            a=a-d;
            d/=2;
            b=a%2;
            a/=2;
            Sleep(10);
            cout<<b;
        }
        cout<<endl;
    }
    return 0;
}
