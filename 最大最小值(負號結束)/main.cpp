#include <iostream>
using namespace std;
int main()
{
    int a,min,max;
    cout<<"��J�Ʀr�D�̤j�̤p��(��J�t�Ƶ���) "<<endl;
    cin>>a;
    min=max=a;
    do
    {
        cin>>a;
        if(a>=max)
            max=a;
        else if(a<=min&&a>=0)
            min=a;
    }
    while(a>=0);
    cout<<"�̤j�� "<<max<<endl;
    cout<<"�̤p�� "<<min<<endl;
}
