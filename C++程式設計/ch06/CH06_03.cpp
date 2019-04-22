#include <iostream>
#include <cstdlib>

using namespace std;

int main()
 {
    int *int_ptr;   // 宣告整數型態指標 
    int iValue=12345;
    double *double_ptr,dValue=1234.56;// 宣告倍精度實數型態指標 
    
    int_ptr=&iValue;
    double_ptr=&dValue;
    
    //整數指標加法與減法運算
        
        cout<<"int_ptr = "<<int_ptr<<endl;
        int_ptr++;//向右移1個整數基本記憶單位移動量 
        cout<<"int_ptr++ = "<<int_ptr<<endl;
        int_ptr--; //向左移1個整數基本記憶單位移動量 
        cout<<"int_ptr -- = "<<int_ptr<<endl;
        int_ptr=int_ptr+3; //向右移3個整數基本記憶單位移動量 
        cout<<"int_ptr+3 = "<<int_ptr<<endl<<endl<<endl;
        
        cout<<"double_ptr = "<<double_ptr<<endl;
        double_ptr++;//向右移1個倍精度實數基本記憶單位移動量 
        cout<<"double_ptr++ = "<<double_ptr<<endl;
        double_ptr--;//向左移1個雙精度實數基本記憶單位移動量 
        cout<<"double_ptr-- = "<<double_ptr<<endl;
        double_ptr=double_ptr+3;//向右移3個雙精度實數基本記憶單位移動量 
        cout<<"double_ptr+3 = "<<double_ptr<<endl;
        
        system("pause");
        return 0;
  }

