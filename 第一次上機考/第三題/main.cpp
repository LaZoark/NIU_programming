#include <iostream>
using namespace std;
int main()
{
    int a,min,max;
    cout<<"��J�Ʀr�D�̤j�̤p��(��J�t�Ƶ���) "<<endl;
    cin>>a;
    min=max=a;
    while(cin>>a)
    {
        if(a<0)
            break;
        if(a<=min)
            min=a;
        else if(a>=max)
            max=a;
    }
    cout<<"�̤j�� "<<max<<endl;
    cout<<"�̤p�� "<<min<<endl;
}
