#include <iostream>
using namespace std;
long rec(long i)
{
    if(i>0)
        return rec(i-1)+i;
    else
        return 0;
}
int main()
{
    long i,sum=0;
    cin >> i;
    //for(;i>0;i--)
    cout << rec(i) << endl;

cout<<"_____________________________\n";

    for(long j=0,n=0;j<i;j++,n++)
    {
        cout<<j<<"+";
        sum+=j;
        if(n%9==0&&n!=0)
            cout<<endl;
    }
    cout<<i<<"="<<sum+i<<endl;
}
