#include <iostream>
using namespace std;

int main()
{
    int a=1,b=0;
    while(a<=20)
    {
        a++;
        if(a%2==0)
        {
            cout << a << "\n";
            b+=a*a;
            cout << "���ƥ��褧�M= " << b <<endl;
        }
    }
    return 0;
}
