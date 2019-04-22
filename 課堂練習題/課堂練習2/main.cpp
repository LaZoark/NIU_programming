#include <iostream>
using namespace std;
int main()
{
    while(1)
    {
        char b,d;
        cin >> b >> d;
        b=~~b;
        d=~~d;
        if(b<d)
            for(; b<d; b++)
                cout << b << " ";
        for(; b>=d; b--)
            cout << b << " ";
        cout<<"\n";
    }
    return 0;
}
