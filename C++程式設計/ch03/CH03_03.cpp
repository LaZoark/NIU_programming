#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        cout<<"----------------------------------------"<<endl;
        cout<<"位元運算子運算範例"<<endl;
        cout<<"----------------------------------------"<<endl;
        //位元運算子運算關係
        cout<<"13 & 57 ="<<(a&b)<<endl;//&位元運算子
        cout<<"13 | 57 ="<<(a|b)<<endl;//|位元運算子
        cout<<"13 ^ 57 ="<<(a^b)<<endl;//^位元運算子
        cout<<"~57 ="<<(~b)<<endl;//~位元運算子
        cout<<"13>>2 ="<<(a>>2)<<endl;// >>位元運算子
        cout<<"13<<2 ="<<(a<<2)<<endl;//<<位元運算子

    }
}
