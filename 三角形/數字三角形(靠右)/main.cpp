#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int num=1; num<=x; num++)
    {
        for(int s=x-1; s>=num; s--)
            cout<<" ";
        for(int t=1; t<=num; t++)
            if(t<=x)
                cout<<num;
        cout<<endl;
    }
    for(int num=x-1; num>=1; num--)
    {
        for(int s=x-1; s>=num; s--)
            cout<<" ";
        for(int t=1; t<=num; t++)
            if(t<=x)
                cout<<num;
        cout<<endl;
    }
}
