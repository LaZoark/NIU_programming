#include <iostream>
using namespace std;
void LCM(int a,int b)
{
    for(int i=1;i<=a*b;i++)
        if(i%a==0&&i%b==0)
        {
            cout<<i<<endl;
            break;
        }
}
