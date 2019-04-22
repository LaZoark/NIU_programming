#include <iostream>
#include <iomanip>
#define LONG 100
using namespace std;

int main()
{
    int num[LONG];
    for(int i=0; i<LONG; i++)
    {
        cout.width(LONG);
        cout.fill('@');
        cout<<i<<endl;
    }
    for(int a=0; a<LONG; a++)
    {
        cout.width(LONG);
        cout.fill('=');
        for(int b=0;b<=a;b++)
        {
            cout<<a<<endl;
        }

    }
}
