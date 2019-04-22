#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int value=255;         // 整數變數 
    int *piVal,*piVal1; //宣告兩個整數型態的指標變數  
    
    piVal= &value;   //指向value 變數位址 
    piVal1=piVal; //piVal1指向piVal的位址 
    
    cout<<"value ="<<value<<" *piVal="<<*piVal<<"*piVal1="<<*piVal1<<endl;
    
    *piVal=300; //重新設定piVal指標變數的資料內容 
     cout<<"value ="<<value<<" *piVal="<<*piVal<<" *piVal1="<<*piVal1<<endl;
    
    *piVal1=500; //重新設定piVal1指標變數的資料內容 
     cout<<"value ="<<value<<" *piVal="<<*piVal<<" *piVal1="<<*piVal1<<endl;
    
    system("pause");      
    return 0; 
}
