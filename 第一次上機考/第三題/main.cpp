#include <iostream>
using namespace std;
int main()
{
    int a,min,max;
    cout<<"块计―程程(块璽计挡) "<<endl;
    cin>>a;
    min=max=a;
    while(cin>>a)
    {
        if(a<0)
            break;
        if(a<=min)
            min=a;
        else if(a>=max)
            max=a;
    }
    cout<<"程 "<<max<<endl;
    cout<<"程 "<<min<<endl;
}
