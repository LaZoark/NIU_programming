#include <iostream>
//块俱计n砞璸患癹ㄧ计璸衡ぃnぇ计㎝
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
        cout<<"计㎝ :"<<odds(n)<<endl;
}
