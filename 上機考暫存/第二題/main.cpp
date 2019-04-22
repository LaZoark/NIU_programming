#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int x, y,a;
    cin>>a;
    //a+=1;
    for(y =1; y <= a; y++)
    {
        for(x = 1; x <= a; x++)
        {
            if(x == y)
                cout<<"*";
            else
                if(y == 2*a - x)
                    cout<<"*";
                else
                    cout<<" ";
        }
        cout<<endl;
    }
 }



