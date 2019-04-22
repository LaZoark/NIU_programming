#include <iostream>

using namespace std;

int main()
{
    cout<<"s = 1/k + 1/(k + 1) + ... + 1/n "<<endl;
    cout<<"請依序輸入n,k"<<endl;
    double n,k,s=0;
    for(cin>>n>>k; k<=n; k++)
    {
        cout<<"k="<<k<<",s= "<<s<<endl;     //老師不太喜歡這樣的敘述，太雜
        s+=1/k;
    }
    cout<<"s的總和 "<<s<<endl;

    return 0;
}
