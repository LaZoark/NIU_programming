#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{


     int i=26;
     float f=1115.2;
     double d;

    //印出各資料型態變數的初始值
     cout<<"i="<<i<<" f="<<f<<endl;
     d=i+f; //資料型態轉換與浮點數與整數的加法
     cout<<"---------------------------------"<<endl;
     cout<<"d="<<d<<endl;
     cout<<"---------------------------------"<<endl;
     system("pause");
     return 0;
}
