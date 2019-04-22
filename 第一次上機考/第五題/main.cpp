#include <iostream>
using namespace std;
int main()
{
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    for(; w<=x; w++)
        if(w%y==0&&w%z!=0)
            cout<<w<<endl;
    return 0;
}
