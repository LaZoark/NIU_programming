#include <iostream>  
#include <cstdlib> 
using namespace std;

float Exchange_Rate;     // Exchange_Rate表示1美金可兌換的台幣金額 
class Dollar              // 計算匯率轉換的自訂類別  
{  
  float NT_Dollar;    // NT_Dollar代表擁有的新台幣  
  public:  
  Dollar() // Dollar類別的建構子  
   {  
   NT_Dollar=1;  
   Exchange_Rate=40;  
   	}  
   Dollar(float Money,float Rate)  // Dollar類別的建構子  
   	{  
      NT_Dollar=Money;  
      Exchange_Rate=Rate;  
    }  
    Dollar(float Money)  
  	{  
     cout << "執行Dollar(flaot Meony)建構子函數" << endl; 
     NT_Dollar=Money * Exchange_Rate;  // 計算可兌換的台幣數量  
     }  
     friend ostream& operator << (ostream& out, Dollar& Tmp_Money); 
   // <<運算子的多載函數原型宣告，out是由ostream類別生成的輸出物件  
     Dollar operator = (float Money);  // 多載=等號運算子的函數原型宣告  
    }; 
     ostream& operator << (ostream& out, Dollar& Tmp_Money) 
     {  
     out << Tmp_Money.NT_Dollar << " 元" << endl;  
     return (out);          // 傳回輸出物件  
     }  
     Dollar Dollar::operator = (float Money)  
     {  
      cout << "執行多載=運算子函數" << endl;  
      NT_Dollar=Money * Exchange_Rate;  // 計算可兌換的台幣數量  
      return (*this);            // 傳回*this指標  
      }  
      int main()  
      {  
       Dollar TWD;  
       float USD,Rate;  
       cout << "請輸入1美元可兌換的台幣數量:";  
       cin >> Rate;  
       cout << "請輸入您要兌換的美金金額：";  
       cin >> USD;               
       Exchange_Rate=Rate;  
       TWD = USD;          // 呼叫多載型態轉換運算符號  
       cout << endl;  
       cout << "率匯比(美金:台幣) = 1 : "  << Exchange_Rate << endl;  
       cout << "要兌換的美金金額：" << USD << " 元" << endl; 
       cout << "可兌換台幣：" << TWD << endl;                   
         // 呼叫多載運算子<<輸出物件內容  
      
      system("pause");
      return 0;
      }
