//"a to the power of b" == �ua��b����v
//radix base == ����(���)
#include <iostream>
using namespace std;
double power(int a,int b)
{
    if(b==0)
        return 1;
    else
        return a*power(a,b-1);
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
