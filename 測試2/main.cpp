#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
void test1()
{
    int temp=53,*ptr=&temp,*Dptr=&*ptr;
    cout<<"## *ptr=&temp"<<endl;
    cout<<"temp = "<<temp<<endl;
    cout<<"&temp= "<<&temp<<endl;   ///不可以用*temp
    cout<<"ptr  = "<<ptr<<endl;
    cout<<"*ptr = "<<*ptr<<endl;
    cout<<"&ptr = "<<&ptr<<endl;
    while(cin>>*Dptr)///* or not
    {
        cout<<"## *ptr=&temp\n-------------------"<<endl;
        cout<<"temp = "<<temp<<endl;
        cout<<"&temp= "<<&temp<<endl;
        cout<<"ptr  = "<<ptr<<endl;
        cout<<"*ptr = "<<*ptr<<endl;
        cout<<"&ptr = "<<&ptr<<endl;
        cout<<"Dptr = "<<Dptr<<endl;
        cout<<"&Dptr = "<<&Dptr<<endl;
        cout<<"*Dptr = "<<*Dptr<<endl;
    }
}

class D
{
private:
    int r=9;
public:
    int *p=&r;
    int i=35;
    int j[53];
    void show(D test)
    {
        cout<<"r="<<r<<endl;
        cout<<"p="<<p<<endl;
        cout<<"this="<<this<<endl;
        cout<<"\n j[]={}"<<endl;
        cout<<"*this-> j="<<*this->j<<endl;  ///*this不能跟'->'斷開 括號需謹慎使用
        cout<<"this->  j="<<this->j<<endl;
        cout<<"...................."<<endl;
        cout<<"*this-> p="<<*this->p<<endl;
        cout<<"this->  p="<<this->p<<endl;
        cout<<"...................."<<endl;
        cout<<"&this-> r="<<&this->r<<endl;
        cout<<"this->  r="<<this->r<<endl;
        cout<<"...................."<<endl;
        cout<<"&this-> i="<<&this->i<<endl;
        //cout<<"*this-> i="<<*(&this->i)<<endl;
        cout<<"this->  i="<<this->i<<endl;
        cout<<*&*&*&*&*&(*this).i<<endl;
        cout<<(*this).i<<endl;
        cout<<"...................."<<endl;
    }
};
int main()
{
    D com;
    for(int a=0;a<sizeof(com.j)/sizeof(int);a++)
    com.j[a]=a;
    int k[]={3,632,7,8,3,67};
    D test2;
    test2.show(com);



}
