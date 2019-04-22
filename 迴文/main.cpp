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
            cout<<"r=n%10           ²{¦bµ¥©ó= "<<r<<endl;
            sum=(sum*10)+r;
            cout<<"sum=(sum*10)+r   ²{¦bµ¥©ó= "<<sum<<endl;
            n=n/10;
            cout<<"n=n/10           ²{¦bµ¥©ó= "<<n<<endl;
        }
        if(temp==sum)
            cout<<"¦^¤å\n";
        else
            cout<<"¨S¦³¦^¤å\n";
    n=r=sum=temp=0;
    }
}

/*
³q¥Î
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
            cout << s <<"¦^¤å\n";
        else
            cout << s <<"¨S¦³¦^¤å\n";
}
*/
