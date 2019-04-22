#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <ostream>
#define SIZE 16
using namespace std;

int main()
{
    int a=5,b=20;
    cout<<"a="<<a<<" b="<<b<<endl;
    a=a+b-(b=a);
    cout<<"a="<<a<<" b="<<b<<endl;
}
