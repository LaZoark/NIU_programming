#include <iostream>
using namespace std;
int main()
{
    while(1)
    {
        int month;
        cin>>month;
        if(month>=3&&month<=5)
            cout<<"¬K©u"<<endl;
        else if(month>=6&&month<=8)
            cout<<"®L©u"<<endl;
        else if(month>=9&&month<=11)
            cout<<"¬î©u"<<endl;
        else if(month==12||month==1||month==2)
            cout<<"¥V©u"<<endl;

    }
    return 0;
}
