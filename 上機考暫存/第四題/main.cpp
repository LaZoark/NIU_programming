#include <iostream>
#define M 20
using namespace std;
int four()
{
    int k=0;
    char ch,a[k];
    while(ch!='\n')
    {
        cin.get(ch);
        a[k]=ch;
        k++;
    }
    for(int i=1;i<=M;i++)
    {
        if(a[1]==a[k-3]&&a[2]==a[k-4]&&a[3]==a[k-5]||a[0]==a[k-2])
            return 1;
        else
            return 0;
    }
}
int main()
{
    while(1)
    {
        int j;
        j=four();
        (j==1)?cout<<"回文"<<endl:cout<<"沒有回文"<<endl;
    }
}
