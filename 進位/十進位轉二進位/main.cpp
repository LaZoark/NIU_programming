#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    while(1)
    {
        int n,a[64],i;
        cout <<endl;
        cout << "�п�J�@�ӥ����:";
        cin >>n;
        cout << "�H�G�i���ܬ�:";
        i=0; //�]i=0
        while(n>0)
        {
            a[i]=n%2; //�s���ɭԧQ��i���s��}�C��
            n=n/2;
            i++;
        }
        while(i>0) //�A�]�@�Ӱj��h�˵ۦC�L���G
        {
            cout<<a[i-1]; // i-1�O�]���W�@�Ӱj�鵲����
// �|�W�L�}�C�̫᪺��m
            i--;
        }
    }
}
