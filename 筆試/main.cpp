#include <iostream>

using namespace std;

int main()
{
    char a,b,c;
    while(cin>>a)
    {
        //cout<<dec<<a<<endl;
        c=(a<<4);
        //cout<<"c=(a<<4)���G�O"<<c<<endl;
        b=(a>>4);
        //cout<<"b=(a>>4)���G�O"<<b<<endl;
        a=a&0;
        //cout<<"a=a&0���G�O"<<a<<endl;
        a=(b<<4)+c;
        cout<<hex<<(int)a<<endl;
    }
    /*char b;int a=0;
    while(cin>>b)
    {
        if(b>'Z'&&b<'a'||b>'z'||b<'A')
            a++;
        cout<<a<<endl;
    }*/
}
