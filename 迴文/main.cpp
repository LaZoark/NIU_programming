#include <iostream>
using namespace std;
int main()
{
    int n,r,sum=0,temp;
    while(cin>>n)
    {
        temp=n;
        while(n>0)
        {
            r=n%10;
            cout<<"r=n%10           現在等於= "<<r<<endl;
            sum=(sum*10)+r;
            cout<<"sum=(sum*10)+r   現在等於= "<<sum<<endl;
            n=n/10;
            cout<<"n=n/10           現在等於= "<<n<<endl;
        }
        if(temp==sum)
            cout<<"回文\n";
        else
            cout<<"沒有回文\n";
    n=r=sum=temp=0;
    }
}

/*
通用
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int is_palindrome(string s)
{
    return equal(s.begin(), s.begin() + s.length()/2, s.rbegin());
}
int main()
{
    string s;
    while(cin>>s)
        if (is_palindrome(s))
            cout << s <<"回文\n";
        else
            cout << s <<"沒有回文\n";
}
*/
