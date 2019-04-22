#include<iostream>
using namespace std;
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        if(x<0)     //要先變成正數
            x*=-1;
        if(y<0)
            y*=-1;
        while(x!=y)
        {
            x>y ? x-=y:y-=x;
            cout<<"x="<<x<<endl;
            cout<<"y="<<y<<endl;
        }
        cout<<x<<endl;
    }
    return 0;
}
