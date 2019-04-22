#include <iostream>
#include <ctime>
#include <windows.h>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(NULL));
    int i,j,x,y,z=0;
    while(1)
    {

        i=rand()%6+1;
        j=rand()%6+1;
        x=rand()%6+1;
        y=rand()%6+1;
        cout<<i<<j<<x<<y<<endl;
        if(i==j||i==x||i==y||j==x||j==y||x==y)
            break;
    }
}
