#include <iostream>
using namespace std;

int main()
{
    for(int r=1;r>0;r++)
        if(r%3==1&&r%5==3&&r%7==2)
        {
            cout<<r;
            break;
        }
}
