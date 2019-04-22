#include <iostream>
using namespace std;

int main()
{
    int i,j,k,n;
    while(cin>>n)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
                cout<<j;
            cout<<endl;
        }
        for(i=n-1; i>0; i--)
        {
            for(j=1; j<=i; j++)
                cout<<j;
            cout<<endl;
        }

        for(int num=1; num<=n; num++)
        {
            for(int s=n-1; s>=num; s--)
                cout<<" ";
            for(int t=1; t<=num; t++)
                if(t<=n)
                    cout<<num;
            cout<<endl;
        }
        for(int num=n-1; num>=1; num--)
        {
            for(int s=n-1; s>=num; s--)
                cout<<" ";
            for(int t=1; t<=num; t++)
                if(t<=n)
                    cout<<num;
            cout<<endl;
        }
    }
}
