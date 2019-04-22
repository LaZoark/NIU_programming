#include <iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        if(a>=0)
        {
            for(int b=0x80; b>=1; b/=2)
                if(a>=b)
                {
                    cout<<"1";
                    a-=b;
                }
                else
                    cout<<"0";
            cout<<"\n";
        }
        else if(a<0)
        {
            a=~a;
            for(int b=0x80; b>=1; b/=2)
                if(a>=b)
                {
                    cout<<"0";
                    a-=b;
                }
                else
                    cout<<"1";
            cout<<"\n";
        }
    }

}
