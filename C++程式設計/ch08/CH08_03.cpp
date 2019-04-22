#include <iostream>
#include <cstdlib>
using namespace std;

int add(int,int);//ㄧ计 
int sub(int,int);//ㄧ计
int mul(int,int);//ㄧ计
int (*pfunc[])(int,int)={add,sub,mul};// ㄧ计夹皚 

int main()
{
    char c[]={'+','-','*'};
    int x,y,i;
            cout<<"x=";
            cin>>x;
            cout<<"y=";
            cin>>y;
    cout<<"--------------------------------------------"<<endl; 
            for(i=0;i<3;i++)
            {
                cout<<x<<c[i]<<y<<"="<<pfunc[i](x,y)<<endl;
                //硓筁for癹伴よΑ磅︽ㄧ计夹┮ㄧ计
            }  
     cout<<endl;                   
     cout<<"--------------------------------------------"<<endl;                   
    system("pause");
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
