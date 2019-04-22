#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a=0;
    char ch;
    do
    {
        ch=getch();
        if(ch>=65&&ch<=90||ch>=97&&ch<=122)
            a++;
    }
    while(a<10);
    cout<<a;
    cout<<ch;
}
