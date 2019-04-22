#include <iostream>
using namespace std;

int main()
{
    int a[2],b[2],i;
    cin>>a[0]>>a[1]>>b[0]>>b[1];
    i=b[0]*60+b[1]-(a[0]*60+a[1]);
    cout<<"¦@°±¤F"<<i<<"¤ÀÄÁ"<<endl;
    if(i<=120)
        i=(i/30)*30;
    if(i>120&&i<240)
        i=((i-120)/30)*40+120;
    if(i>=240)
        i=((i-240)/30)*60+120+160;
    cout<<i<<endl;
}
