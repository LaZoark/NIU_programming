#include <iostream>

using namespace std;

int main()
{
    int a,b,n;
    for(a=1;a<=1000;a++)    //1~1000���d��
    {
        n=0;                //�C���p�ⳣ�n�k�s
        for(b=1;b<a;b++)    //set�@�Ӽ�b��"��"�]��
            if(a%b==0)      //�P�_���Ӽ�(b)�O�_��a���]�Ƥ��@
            n+=b;           //��n�Ӧ����]��(�D�`�M)
            if(a==n)
            cout<<n<<endl;
    }
}
