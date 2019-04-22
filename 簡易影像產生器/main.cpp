#include <iostream>
#include <iomanip>
using namespace std;
//typedef int type //1-black&white 2-color
class Image
{
public:
    int *photo=new int(100),t,&type=t,c,&color_bit=c;
    Image()
    {
        cout<<"0000"<<endl;
    }
    Image(int k)
    {
        cout<<"color"<<endl;
        for(int a=1; a<(0xff); a+=k)
        {
            cout<<setw(4)<<a;
            if(!(a%15)&&a!=0)
                cout<<endl;
        }
        cout<<endl;
    }
    Image(int b1,int b2)
    {
        for(int a=1; a<0xffff; a+=(b1*b2))
        {

            cout<<setw(3)<<b1<<setw(3)<<b2;
            if(!(a%60)&&a!=0)
                cout<<endl;
        }
    }
    Image(int r,int g,int b)
    {
        cout<<"R:"<<r<<endl;
        cout<<"G:"<<g<<endl;
        cout<<"B:"<<b<<endl;
    }

} ggh;
int main()
{

    Image(8);
    cout<<"\n\n_____________\n\n"<<endl;
    Image(3,86);
    cout<<"\n\n_____________\n\n"<<endl;
    Image(67,123,244);
    cout<<"\n\n_____________\n\n"<<endl;
    /*int place,*ptr=&place;
    cout<<"sizeof(int) = "<<sizeof(int)<<endl;
    cout<<"sizeof(*ptr) = "<<sizeof(*ptr)<<endl;
    cout<<"sizeof(place) = "<<sizeof(place)<<endl;
    cout<<"&place = "<<&place<<endl;
    cout<<"&ptr = "<<&ptr<<endl;*/

}


