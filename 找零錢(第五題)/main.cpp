#include <iostream>
using namespace std;

int main()
{
    int a,b,i,j,k,c[]= {1000,500,100,50,10,5,1};
    cin>>a>>b;
    a-=b;
    for(i=0; i<7; i++)
    {
        j=a/c[i];
        cout<<j<<endl;
        for(k=1; k<=j; k++)
            a-=c[i];
    }
}
