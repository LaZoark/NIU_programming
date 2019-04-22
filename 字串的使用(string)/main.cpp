#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cout << "Please enter your name and create some stuff" << endl;
    while(str!="fin")
    {
        getline(cin,str);
        cout<<str<<endl;
    }
}
