#include <iostream>
#include <iomanip>
#include <stack>
using namespace std;

int main()
{
    char c='*';
    cout << "Hello "<<setw(10)<<setfill(c)<<" world!" << endl;
    cout<<setbase(8)<<setw(5)<<255<<endl;
    cout<<setbase(10)<<setw(5)<<255<<endl;
    cout<<setbase(16)<<setw(5)<<255<<endl;
    //stack(int s);
    stack<int> s;

    s.push(10);     //  | 30 |
    s.push(20);     //  | 20 |   疊三個盤子
    s.push(30);     //  |_10_|   10 在最下面

    for(int i=0 ; i<s.size() ; i++){    // s.size() = 3
        cout << s.top() << endl;
        s.pop();
    }
}
