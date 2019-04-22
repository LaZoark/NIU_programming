#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#define M 20
using namespace std;

int main()
{
    int num[M],a,m,s=0,b=0;
    num[0]=0;
    cin>>a;// the amount of number
    for(int i=1; i<=M,a>0; i++,a--)
    {
        cin>>num[i];
        if(num[i]>num[i-1])
        {
            b++;
            num[i]=num[i-1];
        }
        if(num[i]<num[i-1])
        {
            s++;
            num[i]=num[i-1];
        }
        if(s==b)
        {
            m=num[b];
        }
    }
    cout<<m;
}
