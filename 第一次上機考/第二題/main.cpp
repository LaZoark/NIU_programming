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
            cout<< x <<"���ߤ�Ȭ� "<<x*x*x<<endl;
            sum+=x*x*x;
            cout<<"                    �ܦ����`�M�� "<<sum<<endl;
        }
    }
    else
    {
        for(; y<=x; y++)
        {
            cout<< y <<"���ߤ�Ȭ� "<<y*y*y<<endl;
            sum+=y*y*y;
            cout<<"                    �ܦ����`�M�� "<<sum<<endl;
        }
    }
    return 0;
}
