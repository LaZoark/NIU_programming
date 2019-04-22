#include <iostream>
using namespace std;

int main()
{
    int a,b,c,n,i;
    string str1,BackGround;
    while(cout<<"請依序輸入字 底 次數(若底為半形的空格 請在字後面再加一個空格)\n")
    {
        cin>>str1>>BackGround>>c;
        //getline(cin,BackGround);
        //cin>>c;
        n=sizeof(str1);
        c*=2;
        for(a=1; a<c; a++)
        {
            for(b=1; b<c; b++)
                if(a==b||c==a+b)
                    cout<<str1;
                else
                    for(i=0; i<n/c; i++)
                        cout<<BackGround;
            cout<<endl;
        }
    }
}
