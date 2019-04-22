#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a=1,n;
    cout<<"請輸入一個數字：";
    cin>>n;
    cout<<n<<"的所有因數為:";
   
    while(a<=n)                      //義while迴圈
    {
       if(n%a==0)                    //當n能夠被a整除時~則a就是n的因數 
       {                             //則執行if內的敘述
         cout<<a;    
		 if(n!=a)cout<<",";
       }
       a++;                          //a值遞增1
    }
    
    cout<<endl;
    
    system("pause");
    return 0;
}


