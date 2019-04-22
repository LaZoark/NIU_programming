#include <iostream>
using namespace std;

class Agri
{
private:
    float temp,&T=temp;//temperature
    float humi,&H=humi;//humidity
    bool water_switch,&S=water_switch;
    int photo,&P=photo;//8*6bits

    void InitAll()
    {
        cout<<"\n初始化所有資料..."<<endl;
        temp=0.0;
        humi=0.0;
        water_switch=0;
        photo=0;
        cout<<"temperature= "<<temp<<"\nhunidity= "<<humi<<"\nSwitch= "<<water_switch<<"\nphoto= "<<photo<<endl;
        cout<<"初始化完畢!\n"<<endl;
    }
    int ReadTemp()
    {
        int r;
        cout<<"Temperature = ";
        if(cin>>temp&&temp>=0)
            r=0;
        else
        {
            r=-1;
            temp=NULL;
        }
        return r;
    }
    int ReadHumidity()
    {
        int r;
        cout<<"Humidity = ";
        if(cin>>humi&&humi>=0)
            r=0;
        else
        {
            r=-1;
            humi=NULL;
        }
        return r;
    }
    int ReadCamera()
    {
        int r;
        cout<<"Photo = ";
        if(cin>>photo&&photo>=0)
            r=0;
        else
        {
            r=-1;
            photo=NULL;
        }
        return r;
    }
    int TurnOnOff(bool &OnOff)
    {
        if(OnOff==1||OnOff==0)
            return 0;
        else
            return 1;
    }

public:
    void test()
    {
        cout<<temp<<endl;
    }
    Agri()//is a constructor
    {
        cout<<"Agri()建構元被呼叫"<<endl;
    }
    bool w_switch=water_switch;
    int set_init();
    int set_ReadTemp();
    int set_ReadHumidity();
    int set_ReadCamera();
    int set_TurnOnOff(bool &);
    void ShowAll(Agri agri);
} agri;
void menu()
{
    agri.test();
    cout<<"*********************************"<<endl;
    cout<<"Please select the function.\n";
    cout<<"1.	產生一農場空資料(初始化)"<<endl;
    cout<<"2.	讀取溫度"<<endl;
    cout<<"3.	讀取濕度"<<endl;
    cout<<"4.	灑水開關"<<endl;
    cout<<"5.	讀取影像"<<endl;
    cout<<"6.	顯示所有資料"<<endl;
    cout<<"7.	結束"<<endl;
    cout<<"*********************************"<<endl;
}
int main()
{
    int select;
    menu();
    while(cin>>select)
    {
        switch(select)
        {
        case 1:
            agri.set_init();
            menu();
            break;
        case 2:
            agri.set_ReadTemp();
            menu();
            break;
        case 3:
            agri.set_ReadHumidity();
            menu();
            break;
        case 4:
            agri.set_ReadCamera();
            menu();
            break;
        case 5:
            agri.set_TurnOnOff(agri.w_switch);
            menu();
            break;
        case 6:
            agri.ShowAll(agri);
            menu();
            break;
        case 7:
            select=-1;
        }
        if(select<=0)
            break;
    }
}

int Agri::set_init()
{
    InitAll();
}
int Agri::set_ReadTemp()
{
    cout<<"\nPlease key in the temperature.(℃)\n";
    ReadTemp();
    cout<<"Current temperature = "<<temp<<"℃"<<endl;
}
int Agri::set_ReadHumidity()
{
    cout<<"\nPlease key in the humidity.(%)\n";
    ReadHumidity();
    cout<<"Current humidity = "<<humi<<"%"<<endl;
}
int Agri::set_ReadCamera()
{
    cout<<"\nPlease key in the photo.\n";
    ReadCamera();
    cout<<"The photo = "<<photo<<endl;
}
int Agri::set_TurnOnOff(bool &OnOff)
{
    cout<<"\nPlease set the watering switch.\n";
    cin>>OnOff;
    TurnOnOff(OnOff);
}
void Agri::ShowAll(Agri agri)
{
    string Status;
    if(w_switch==1)
        Status="ON";
    else
        Status="OFF";
    cout<<"\nTemperature = "<<temp<<"℃"<<endl;
    cout<<"Humidity = "<<humi<<"%"<<endl;
    cout<<"Watering Switch = "<<Status<<endl;
    cout<<"Photo : "<<photo<<endl;
}
