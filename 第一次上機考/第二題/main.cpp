#include <iostream>

using namespace std;

int main()
{
    int x,y,sum=0;
    cin >>x>>y;
    if(x<y)
    {
        for(; x<=y; x++)
        {
            cout<< x <<"的立方值為 "<<x*x*x<<endl;
            sum+=x*x*x;
            cout<<"                    至此的總和為 "<<sum<<endl;
        }
    }
    else
    {
        for(; y<=x; y++)
        {
            cout<< y <<"的立方值為 "<<y*y*y<<endl;
            sum+=y*y*y;
            cout<<"                    至此的總和為 "<<sum<<endl;
        }
    }
    return 0;
}
