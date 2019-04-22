#include <iostream>

using namespace std;

int main()
{
    double a;
    cin>>a;
    if(a>=100&&a<=299)
        a*=0.95;
    else if(a>=300&&a<=499)
        a*=0.92;
    else if(a>=500&&a<=999)
        a*=0.90;
    else
        a*=0.85;
    cout << (int)a <<endl;
    return 0;
}
