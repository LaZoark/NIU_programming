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
        cout<<"超出最大資料量存取限制..."<<endl;
        cout<<"初始化完畢!  "<<"可存取"<<*Max<<"筆資料"<<endl;
    }
    else
        cout<<"初始化完畢!  "<<"可存取"<<*Max<<"筆資料"<<endl;
}

void InsertDB(MyData *AddedStd)
{
    int err=0;
    cout<<"\nName(≦4): ";
    cin>>AddedStd->name;
    cout<<"Sex(M男/F女/Q未知): ";
    cin>>AddedStd->sex;
    cout<<"Math(int): ";
    cin>>AddedStd->math;
    for(int a=1; a<=*InStd; a++)
        if(student[0].name==student[a].name)
            err++;
    if(err==0)
        cout<<"success!! (return 0)\n"<<"這是第"<<++(*InStd)<<"筆資料"<<endl;
    else
        cout<<"發生錯誤 (return -1)"<<endl;
}

void ShowDB(int select)
{
    cout<<"\n<第"<<select+1<<"位學生資料>"<<endl;
    cout<<"學生姓名: "<<student[select].name<<endl;
    cout<<"性別: "<<student[select].sex<<endl;
    cout<<"數學成績: "<<student[select].math<<endl;
}

void DeleteDB(int k)
{
    student[k-1].name=' ';
    student[k-1].sex=' ';
    student[k-1].math=0;
    cout<<"已刪除!"<<endl;
}
int main()
{
    int Max,select,rm,func=0;
    cout<<"請設定資料庫大小: ";
    cin>>Max;
    while(func>=0)
    {
        for(int h=0;h<N;h++)
        cout<<&student[h]<<endl;
        cout<<"\n請選擇(輸入負數以離開)"<<endl;
        cout<<"1.初始化\n2.新增資料\n3.刪除資料\n4.顯示單一資料\n5.顯示所有資料\n";
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
            cout<<"請選擇欲刪除資料編號: ";
            cin>>rm;
            DeleteDB(rm);
            break;
        case 4:
            cout<<"請輸入欲查詢資料編號:";
            cin>>select;
            if(select>(*InStd))
                cout<<"沒有此筆資料"<<endl;
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
