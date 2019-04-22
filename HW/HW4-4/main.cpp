#include <iostream>
using namespace std;
int main(void)
{
    int A=0x7fffffff,a=0x80000000;
    cout << "intぇ程: " << A <<endl;
    cout << "intぇ程:" << a <<endl;
    unsigned int B=0xffffffff,b=0x0;
    cout << "unsigned intぇ程: " << B <<endl;
    cout << "unsigned intぇ程: " << b <<endl;
    int C=0xff,c=0x0;
    cout << "charぇ程: " << C <<endl;
    cout << "charぇ程: " << c <<endl;
    long int D=0x7fffffff,d=0x80000000;
    cout << "long intぇ程: " << D <<endl;
    cout << "long intぇ程:" << d <<endl;
return 0;
}
