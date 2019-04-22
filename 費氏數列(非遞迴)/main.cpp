#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main()
{
    double a,b1=0,b2=1,result;
    LARGE_INTEGER t1,t2,ts;
    QueryPerformanceCounter(&ts);
    cin>>a;
    QueryPerformanceCounter(&t1);
    for(int b=1;b<a;b++)
    {
        result=b1+b2;
        b1=b2;
        b2=result;
    }
    cout<<(double)result<<endl;
    QueryPerformanceCounter(&t2);
    cout<<"所需要的時間 : "<<(t2.QuadPart-t1.QuadPart)/(double)(ts.QuadPart)<<endl;
}
