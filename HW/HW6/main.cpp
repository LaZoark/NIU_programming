#include <iostream>
using namespace std;

int main(void)
{
    cout << "�п�Ja�ȻPb��" <<endl;
    int a,b,num;
    cin >> a;
    cin >> b;
    cout << "a= " << a <<endl;
    cout << "b= " << b <<endl;
    num=(a++)+b;
    cout << "(a) num=(a++)+b= " << num <<endl;
    num=(++a)+b;
    cout << "(b) num=(++a)+b= " << num <<endl;
    num=(a++)+(b++);
    cout << "(c) num=(a++)+(b++)= " << num <<endl;
    num=(++a)+(++b);
    cout << "(d) num=(++a)+(++b)= " << num <<endl;
    num=a+a+(b++);
    cout << "(e) a+=a+(b++)= " << "a+a+(b++)= " << num <<endl;

  return 0;

}
