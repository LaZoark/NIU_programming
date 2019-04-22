#include <iostream>
using namespace std;
int main(void)
{
    int i,f,m;     //initial,final,multiple.
    cout << "首數     = " ;
    cin >> i;
    cout << "尾數     = " ;
    cin >> f;
    cout << "所取倍數 = " ;
    cin >> m;
    for(; i<=f; i++)
        if((i%m)==0||i==m)
            cout << i <<endl;
    return 0;
}
