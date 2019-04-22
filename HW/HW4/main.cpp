#include <iostream>
using namespace std;
int main(void)
{
cout << "2.印出下列字元與其ASCII CODE" <<endl;
    char a;
    a='\b';
    int ASC1=a;
    cout << "\\b = " << ASC1 <<endl;
    char b;
    b='\t';
    int ASC2=b;
    cout << "\\t = " << ASC2 <<endl;
    char c;
    c='\\';
    int ASC3=c;
    cout << "\\\\ = " << ASC3 <<endl;
    char d;
    d='\'';
    int ASC4=d;
    cout << "\\" << d << " = " << ASC4 <<endl;
    char e;
    e='\"';
    int ASC5=e;
    cout << "\\" << e << " = " << ASC5 <<endl;
    char f;
    f='\r';
    int ASC6=f;
    cout << "\\r" << " = " << ASC6 <<endl;
    char g;
    g='\a';
    int ASC7=g;
    cout << "\\a" << " = " << ASC7 <<endl;
    return 0;
}
