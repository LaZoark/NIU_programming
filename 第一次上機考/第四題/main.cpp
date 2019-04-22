#include <iostream>
using namespace std;

int main()
{
    char ch,s=65;
    cin>>ch;
    for(; s<=ch; s++)
    {
        for(int a=1; a<=26; a++)
            if((s-64)>=a)
                cout << s <<"  ";
        cout<<endl;
    }
    return 0;
}
