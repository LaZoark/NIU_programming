#include <iostream>

using namespace std;

int main()
{
    cout<<"s = 1/k + 1/(k + 1) + ... + 1/n "<<endl;
    cout<<"�Ш̧ǿ�Jn,k"<<endl;
    double n,k,s=0;
    for(cin>>n>>k; k<=n; k++)
    {
        cout<<"k="<<k<<",s= "<<s<<endl;     //�Ѯv���ӳ��w�o�˪��ԭz�A����
        s+=1/k;
    }
    cout<<"s���`�M "<<s<<endl;

    return 0;
}
