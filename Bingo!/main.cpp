/*
5.��J3�ӼƥN���r�C���{�p�A�ЦL�XBINGO�_?
#��J����I�s ��ƦL�X�C
�Ҧp��J
101
110
011
*/
#include <iostream>
using namespace std;
int five()
{
    char a[3][3];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            cin>>a[i][j];
    if( a[0][0]==a[1][0]&&a[1][0]==a[2][0]||
        a[0][1]==a[1][1]&&a[1][1]==a[2][1]||
        a[0][2]==a[1][2]&&a[1][2]==a[2][2]||
        a[0][0]==a[0][1]&&a[0][1]==a[0][2]||
        a[1][0]==a[1][1]&&a[1][1]==a[1][2]||
        a[2][0]==a[2][1]&&a[2][1]==a[2][2]||
        a[0][0]==a[1][1]&&a[1][1]==a[2][2]||
        a[0][2]==a[1][1]&&a[1][1]==a[2][0]  )
        cout<<"BINGO!!!"<<endl;
    else
        cout<<"fail to Bingo..."<<endl;
}
int main()
{
    while(1)
    five();
}
