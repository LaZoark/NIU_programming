#include <iostream>
using namespace std;
void two(int);
int main()
{
    int n;
    cin>>n;
    two(n);
}

void two(int n)
{
    int a,b,c;
    for(a=1; a<=n; a++)
    {
        for(b=1; b<=n-a; b++)
            cout<<" ";
        for(float c=1; c<=a; c+=0.5)
            cout<<a;
        cout<<endl;
    }
}
