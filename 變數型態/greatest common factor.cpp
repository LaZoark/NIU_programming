#include <iostream>
using namespace std;
void GCF(int a,int b)
{
    for(int j=a+b; j>=1; j--)
        if(a%j==0&&b%j==0)
        {
            cout<<j<<endl;
            break;
        }
}
