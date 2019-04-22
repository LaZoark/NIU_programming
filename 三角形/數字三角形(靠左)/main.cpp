#include <iostream>
using namespace std;

int main()
{
    int n;
    int i,j,k;
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
    }
    return 0;
}
