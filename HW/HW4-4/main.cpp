#include <iostream>
using namespace std;
int main(void)
{
    int A=0x7fffffff,a=0x80000000;
    cout << "int���̤j��: " << A <<endl;
    cout << "int���̤p��:" << a <<endl;
    unsigned int B=0xffffffff,b=0x0;
    cout << "unsigned int���̤j��: " << B <<endl;
    cout << "unsigned int���̤p��: " << b <<endl;
    int C=0xff,c=0x0;
    cout << "char���̤j��: " << C <<endl;
    cout << "char���̤p��: " << c <<endl;
    long int D=0x7fffffff,d=0x80000000;
    cout << "long int���̤j��: " << D <<endl;
    cout << "long int���̤p��:" << d <<endl;
return 0;
}
