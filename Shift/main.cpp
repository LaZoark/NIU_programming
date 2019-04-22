#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a=1,a2=1,b,b2;
    cin>>b;
    for(;a<=30;a++)
    cout << "左位移" << a << "次\t    " << (b<<a) << endl;
    cin>>b2;
    for(;a2<=30;a2++)
    cout << "右位移" << a2 << "次\t    " << (b2>>a2) << endl;
    return 0;
}
