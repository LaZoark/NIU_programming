#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    cout << "��J�r���H�d��ASCII�X" <<endl;
    char X;
    cout << "��J��    ";
    cin >> X;
    int Y=X;
    cout << "���G��    " << Y << "(�Q�i��)" <<endl;
//__________________________________________
    cout << "\t";
    int a[64],i=0,tmp=Y;
    while(Y>0)
    {
        a[i]=Y%2;
        Y=Y/2;
        i++;
    }
    while(i>0)
    {
        cout << a[i-1];
        i--;
    }

    cout << "(�G�i��)" <<endl;
    cout << "\t  " << hex << tmp << "(�Q���i��)";
    return 0;
}
