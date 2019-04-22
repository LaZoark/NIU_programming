#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    cout << "輸入字元以查詢ASCII碼" <<endl;
    char X;
    cout << "輸入為    ";
    cin >> X;
    int Y=X;
    cout << "結果為    " << Y << "(十進位)" <<endl;
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

    cout << "(二進位)" <<endl;
    cout << "\t  " << hex << tmp << "(十六進位)";
    return 0;
}
