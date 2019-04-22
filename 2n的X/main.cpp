#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    while(cin>>c)
    {
        c*=2;
        for(a=1; a<c; a++)
        {
            for(b=1; b<c; b++)
                if(a==b||c==a+b)
                    cout<<"¡¯";
                else
                    cout<<"¡@";
            cout<<endl;
        }
    }
}
