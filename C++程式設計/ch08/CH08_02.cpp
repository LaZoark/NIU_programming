#include <iostream>
#include <cstdlib>
using namespace std;

int add(int,int);
int sub(int,int);
int Math(int,int,int (*pfunc)(int,int));//ㄣΤ把计ㄧ计夹ㄧ计 

int main()
{
    int x,y;
    
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    
    cout<<"-----------------------------------"<<endl; 
    cout<<x<<"+"<<y<<"="<<Math(x,y,add)<<endl;//㊣ add(),ㄤ 
    cout<<x<<"-"<<y<<"="<<Math(x,y,sub)<<endl;//㊣ sub(),ㄤ                                                         
        
    system("pause");
    return 0;
}
//ㄣΤ把计ㄧ计夹ㄧ计﹚竡 
int Math(int a,int b,int (*pfunc)(int,int))
{
    return (*pfunc)(a,b);
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}

