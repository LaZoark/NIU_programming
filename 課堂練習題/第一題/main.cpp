#include <iostream>
//1.�@����J�@���ơA�����J�t�Ƥ~���U�ӡA�̫�L�X������(�@�w�n�Ψ�BREAK)
using namespace std;

int main()
{
    int a,sum=0;
    float t=0.0f;
    for(; cin>>a; t++)
    {
        if(a<0)
            break;
        sum+=a;
    }
    cout<<"�@��J�F"<<t<<"�ӥ����"<<endl;
    cout<<"�����Ȭ� : "<<sum/t<<endl;
    return 0;
}
