#include <iostream>
using namespace std;
int main(void)
{
    int i,f,m;     //initial,final,multiple.
    cout << "����     = " ;
    cin >> i;
    cout << "����     = " ;
    cin >> f;
    cout << "�Ҩ����� = " ;
    cin >> m;
    for(; i<=f; i++)
        if((i%m)==0||i==m)
            cout << i <<endl;
    return 0;
}
