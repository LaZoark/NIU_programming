#include <iostream>
using namespace std;

int main()
{
    int a=0,b=0;
    cout << "Sum = 0" <<endl;
    for(; b>=0; a=a+b)
    {
        cout << '+';
        cin >> b;
        cout << '=' << a+b <<"\n\n";
    }
    return 0;
}
