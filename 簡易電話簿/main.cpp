#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include <vector>
#define FILE_NAME "聯絡人.txt"
using namespace std;
                                ///!*問題:即便我不再使用push_back ,capacity 依然會翻倍增加...
fstream contacts;
int s=0,*Sort=&s,k;
vector <string> name;
vector <string> mobile;
string N,M,load_name,load_mobile;

class TelBook
{
private:
    string Name;
    string Mobile;
public:
    TelBook() {}
    static int num; //初值要設在外部
    void count()
    {
        cout<<"目前資料數量: "<<name.size()<<endl;    ///用size取代num
    }

    TelBook(string Name,string Mobile,int *Sort)
    {
        if(contacts.is_open())
        {
            (*Sort)++;
            contacts<<"["<<setw(3)<<*Sort<<"] Name   : "<<Name<<endl;
            contacts<<"      Number : "<<Mobile<<endl;
            cout<<"                         File input successfully!"<<endl;
        }
        else
            cout<<"File ERROR"<<endl;
    }

} one; //TelBook one;
int TelBook::num=0;
void InitData()
{
    vector<string>().swap(name);
    vector<string>().swap(mobile);      ///swap強制釋放記憶體
    contacts.open("聯絡人.txt",ios::trunc);
    contacts.close();
}
void Insert()
{
    cout<<"["<<name.size()+1<<"]name:";
    cin>>N;
    N.resize(8);    //限制四個字
    cout<<"["<<mobile.size()+1<<"]mobile:";
    cin>>M;
    name.resize(name.size()+1);
    mobile.resize(mobile.size()+1);
    name[name.size()-1]=N;
    mobile[mobile.size()-1]=M;
    one.count();
}
void Remove()
{
    if(!name.empty())
    {
        cout<<"目前有"<<name.size()<<"筆資料"<<endl;
        cout<<"欲刪除第幾筆資料?"<<endl;
        cin>>k;
        if(!name[k-1].empty()&&k<=name.size())
        {
            cout<<"(DeBug)capacity="<<name.capacity()<<endl;
            name.erase(name.begin()+k-1);
            mobile.erase(mobile.begin()+k-1);

            cout<<*name.end()<<endl;
            cout<<*mobile.end()<<endl;
            *Sort=0;
            cout<<"已移除該筆資料"<<endl;
        }
        else
            cout<<"沒有該筆資料"<<endl;
    }
    else
        cout<<"沒有任何資料"<<endl;
}
void Load()
{
    contacts.open(FILE_NAME,ios::in);
    if(contacts.is_open()&&!contacts.eof())
    {
        while(contacts.peek()!=EOF)
        {
            getline(contacts,load_name);
            getline(contacts,load_mobile);
            load_name.erase(0,15);
            load_mobile.erase(0,15);
            cout<<"["<<setw(3)<<name.size()+1<<"]"<<load_name<<"|"<<load_mobile<<endl;
            name.resize(name.size()+1);
            mobile.resize(mobile.size()+1);
            name[name.size()-1]=load_name;
            mobile[mobile.size()-1]=load_mobile;
        }
        cout<<"已將資料匯入"<<endl;
    }
    else
        cout<<"FILE ERROR"<<endl;
    contacts.close();
}
void UI()
{
    cout<<"\n**********************************"<<endl;
    cout<<"*   Please select the function   *"<<endl;
    cout<<"*0.   開啟檔案                   *"<<endl;
    cout<<"*1.   清空資料(初始化)           *"<<endl;
    cout<<"*2.   增加一筆資料               *"<<endl;
    cout<<"*3.   刪除一筆資料               *"<<endl;
    cout<<"*4.   顯示所有資料               *"<<endl;
    cout<<"*5.   讀取檔案資料               *"<<endl;
    cout<<"*6.   寫入資料                   *"<<endl;
    cout<<"*7.   結束                       *"<<endl;
    cout<<"**********************************"<<endl;
}
int main()
{
    int End_Com=0;
    UI();
    while(End_Com!=-1)
    {
        switch(_getch())
        {
        case '0':
            system(FILE_NAME);
            break;
        case '1':
            InitData();
            cout<<"已經初始化"<<endl;
            *Sort=0;
            UI();
            break;
        case '2':
            Insert();
            UI();
            break;
        case '3':
            Remove();
            UI();
            break;
        case '4':
            for(int a=0; a<name.size(); a++)
                cout<<"["<<setw(3)<<a+1<<"] Name:"<<name[a]<<" Mobile:"<<mobile[a]<<endl;
            UI();
            break;
        case '5':
            Load();
            *Sort=0;
            UI();
            break;
        case '6':
            *Sort=0;
            contacts.open(FILE_NAME,ios::trunc|ios::out);
            for(int a=0; a<name.size(); a++)
            {
                cout<<"a="<<setw(3)<<a+1<<" "<<name[a]<<"\\ "<<mobile[a]<<endl;
                TelBook(name[a],mobile[a],Sort);
            }
            contacts.close();
            UI();
            break;
        case 'b':
            cout<<"(DeBug)sizeof()="<<sizeof(name);
            break;
        case 'm':
            cout<<"(DeBug)capacity="<<name.capacity();
            break;
        case 'n':
            cout<<"(DeBug)size="<<name.size();
            break;
        case '7':
            End_Com=-1;
            break;
        default:
            ;
        }
        cout<<endl;
    }
    contacts.close();
}
