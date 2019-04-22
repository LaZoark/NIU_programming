#include <iostream>
using namespace std;
int main(int a)
{
    while(cin>>hex>>a)
    {
        for(int b=0x8000; b>=1; b/=2)
            if(a>=b)
            {
                cout<<"1";
                a-=b;
            }
            else
                cout<<"0";
        cout<<"\n";
    }
}
