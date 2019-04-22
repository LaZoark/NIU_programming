#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>hex>>a)
    {
        for(b=32768; b>=1; b/=2)
        {
            a>=b>0?c=1:c=0;          //e04這邊要用>=不是/啦ㄎㄅ
            if(a>=b)
                a=a-b;
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}
