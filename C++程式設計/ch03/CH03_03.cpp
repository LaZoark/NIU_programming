#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        cout<<"----------------------------------------"<<endl;
        cout<<"�줸�B��l�B��d��"<<endl;
        cout<<"----------------------------------------"<<endl;
        //�줸�B��l�B�����Y
        cout<<"13 & 57 ="<<(a&b)<<endl;//&�줸�B��l
        cout<<"13 | 57 ="<<(a|b)<<endl;//|�줸�B��l
        cout<<"13 ^ 57 ="<<(a^b)<<endl;//^�줸�B��l
        cout<<"~57 ="<<(~b)<<endl;//~�줸�B��l
        cout<<"13>>2 ="<<(a>>2)<<endl;// >>�줸�B��l
        cout<<"13<<2 ="<<(a<<2)<<endl;//<<�줸�B��l

    }
}
