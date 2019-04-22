#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

int main()
{
    while(1)
    {
        cout << "Please enter the frequency. " << endl;
        int a;
        cin>>a;
        Beep(a,2000);
    }
    return 0;
}
