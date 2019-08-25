#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> ch;
    ch.push_back('a');
    ch.push_back('b');
    ch.push_back('c');
    for(int i=0;i<10;i++)
    cout<<ch[i]<<endl;
}
