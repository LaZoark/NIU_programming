#include <iostream>
using namespace std;

int main()
{
    int i,j,n,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(x=n-1;x>=i;x--)
            cout<<" ";
        for(j=i;j>=1;j--)
            if(j<=n)
                cout<<j;
        cout<<endl;
    }
}
