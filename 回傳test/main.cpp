#include <iostream>
#include <cmath>
using namespace std;
void f(...)
{
    cout<<9<<endl;
}
int main()
{
    float x;
    cin>>x;
    cout<<"cos("<<x<<")= " <<cos(x)<<endl;
    f();
}
