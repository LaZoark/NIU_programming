#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{	
	
	bool Num1= true;        // 宣告布林變數，設值為true
    bool Num2= 0;           //宣告布林變數，設值為0
    bool Num3= -43;        // -43為非零值，結果為真
    bool Num4= Num1>Num2;   // 設值為布林判斷式，結果為真
    
    cout<<"Num1="<<Num1<<" Num2="<<Num2<<endl;
    cout<<"Num3="<<Num3<<" Num4="<<Num4<<endl;
    
    
    system("pause");
    return 0;
} 
