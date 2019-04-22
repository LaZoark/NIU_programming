#include <iostream>
#include <cstdlib>
#include <string>
#define N 10
using namespace std;
struct MyData
{
    string name;
    char sex;
    int math;
} student[N];
int instd=0;
int *InStd=&instd;


void InitDB(int *Max)
{
    if(*Max>N)
    {
        *Max=N;
        cout<<"�W�X�̤j��ƶq�s������..."<<endl;
        cout<<"��l�Ƨ���!  "<<"�i�s��"<<*Max<<"�����"<<endl;
    }
    else
        cout<<"��l�Ƨ���!  "<<"�i�s��"<<*Max<<"�����"<<endl;
}

void InsertDB(MyData *AddedStd)
{
    int err=0;
    cout<<"\nName(��4): ";
    cin>>AddedStd->name;
    cout<<"Sex(M�k/F�k/Q����): ";
    cin>>AddedStd->sex;
    cout<<"Math(int): ";
    cin>>AddedStd->math;
    for(int a=1; a<=*InStd; a++)
        if(student[0].name==student[a].name)
            err++;
    if(err==0)
        cout<<"success!! (return 0)\n"<<"�o�O��"<<++(*InStd)<<"�����"<<endl;
    else
        cout<<"�o�Ϳ��~ (return -1)"<<endl;
}

void ShowDB(int select)
{
    cout<<"\n<��"<<select+1<<"��ǥ͸��>"<<endl;
    cout<<"�ǥͩm�W: "<<student[select].name<<endl;
    cout<<"�ʧO: "<<student[select].sex<<endl;
    cout<<"�ƾǦ��Z: "<<student[select].math<<endl;
}

void DeleteDB(int k)
{
    student[k-1].name=' ';
    student[k-1].sex=' ';
    student[k-1].math=0;
    cout<<"�w�R��!"<<endl;
}
int main()
{
    int Max,select,rm,func=0;
    cout<<"�г]�w��Ʈw�j�p: ";
    cin>>Max;
    while(func>=0)
    {
        for(int h=0;h<N;h++)
        cout<<&student[h]<<endl;
        cout<<"\n�п��(��J�t�ƥH���})"<<endl;
        cout<<"1.��l��\n2.�s�W���\n3.�R�����\n4.��ܳ�@���\n5.��ܩҦ����\n";
        cin>>func;
        switch(func)
        {
        case 1:
            InitDB(&Max);
            break;
        case 2:
            InsertDB(&student[*InStd]);
            break;
        case 3:
            cout<<"�п�ܱ��R����ƽs��: ";
            cin>>rm;
            DeleteDB(rm);
            break;
        case 4:
            cout<<"�п�J���d�߸�ƽs��:";
            cin>>select;
            if(select>(*InStd))
                cout<<"�S���������"<<endl;
            else
                ShowDB(select-1);
            break;
        case 5:
            for(int g=0; g<*InStd; g++)
                ShowDB(g);
            break;
        }
    }
}
