#include <iostream>
#include <iomanip>
#include <ctime>
#include <windows.h>
using namespace std;

int main()
{
    time_t t1,t2;
    long temp1,temp2,*s1=&temp1,*s2=&temp2;
    cin>>*s1;
    cin>>*s2;
    t1=*s1;
    t2=*s2;

    cout<<"\n"<<(double) difftime(t2,t1);

}
