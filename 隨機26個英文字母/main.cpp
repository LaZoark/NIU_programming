#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand((unsigned)time(0));
    int i,j,k;
    char ch[26],temp,a;
    for(a=65; a<=90; a++)
    {
        ch[a-65]=a;
        cout<<a<<'\0';
    }
    cout<<endl;
    for(int x=1; x<100; x++)
    {
        for(k=0; k<x; k++)
        {
            i=rand()%26;
            j=rand()%26;
            temp=ch[i];             // �έ쥻�N�w�T�w�n���}�C(��Ʈw)
            ch[i]=ch[j];            // �Ӱ��ۤ��洫�C�p���������|����
            ch[j]=temp;             // �ӥB�N�⴫�����b�A�]���e����ı
        }
        for(int x=0; x<26; x++)
            cout<<ch[x]<<'\0';
    cout<<"\n�����F"<<x<<"����\n"<<endl;
    }
}
