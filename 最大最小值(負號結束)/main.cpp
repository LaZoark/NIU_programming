#include <iostream>
using namespace std;
int main()
{
    int a,min,max;
    cout<<"块计―程程(块璽计挡) "<<endl;
    cin>>a;
    min=max=a;
    do
    {
        cin>>a;
        if(a>=max)
            max=a;
        else if(a<=min&&a>=0)
            min=a;
    }
    while(a>=0);
    cout<<"程 "<<max<<endl;
    cout<<"程 "<<min<<endl;
}
