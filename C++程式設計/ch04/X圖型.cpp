#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{while(1){
    int x, y,a;
    cin>>a;
    for(y = 1; y < a; y++)
    {
        for(x = 1; x < a; x++)
        {
            if(x == y)
                cout<<"*";
            else if(x == a - y)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
}
