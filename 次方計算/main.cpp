//"a to the power of b" == �ua��b����v
//radix base == ����(���)
#include <iostream>
using namespace std;
double power(int a,int b)
{
    double i=1;
    for(; b>0; b--)
        i*=a;
    return i;
}

int main()
{
    int a,b;
    while(1)
    {
        cout<<"Please enter numbers for radix(base) and index separately."<<endl;
        cin>>a>>b;
        cout<<power(a,b)<<endl;
    }
}
