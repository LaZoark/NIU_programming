#include <iostream>
//輸入一整數n，設計一遞迴函數計算出不大於n之奇數和
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
        cout<<"奇數和 :"<<odds(n)<<endl;
}
