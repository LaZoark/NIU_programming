#include <iostream>
//��J�@���n�A�]�p�@���j��ƭp��X���j��n���_�ƩM
using namespace std;
int odds(int n)
{
    if(n>0&&n%2==1)
        return n+odds(n-2);
    if(n>0&&n%2==0)
        return odds(n-1);
    else
        return 0;
}
int main()
{
    int n;
    while(cin>>n)
        cout<<"�_�ƩM :"<<odds(n)<<endl;
}
