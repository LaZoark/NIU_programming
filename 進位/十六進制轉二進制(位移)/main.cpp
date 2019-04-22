#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>hex>>a)
    {
        for(int x=1,i=a; x<=i; x++)
        {
            cout<<x<<endl;
            a=x;
            for(b=1; b<=16; b++)
            {
                c=32768&a;
                c/=0x8000;
                cout<<c;
                a<<=1;
            }
            cout<<endl;
        }
    }
}
