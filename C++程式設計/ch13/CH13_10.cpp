#include <iostream>  
#include <cstdlib>
using namespace std;

class USD;        // 宣告USD類別  
class NTD       // 計算匯率轉換的自訂類別  
{  
 float NT_Exchange_Rate;    // NT_Exchange_Rate表示1美金可兌換的台幣金額  
 public:  
   NTD()    // Dollar類別的建構子  
   {  
    NT_Exchange_Rate=40;  
   }  
   NTD(float Rate)    // Dollar類別的建構子  
  {  
   NT_Exchange_Rate=Rate;  
   }  
 friend istream& operator >> (istream& in, NTD& Tmp_Money);  
 // >>運算子的多載函數原型宣告，in是由istream類別生成的輸出物件  
 operator USD();           // 宣告類別型態轉換函數  
  };  
  class USD {  
  float US_Exchange_Rate;  
  public:  
   USD()  // Dollar類別的建構子  
   {  
    US_Exchange_Rate=40;
   }  
   USD(float Rate)     // Dollar類別的建構子  
   {  
    US_Exchange_Rate=Rate;  
    } 
   friend ostream& operator << (ostream& out, USD& Tmp_Money);  
   	// >>運算子的多載函數原型宣告，in是由istream類別生成的輸出物件  
  };  
  istream& operator >> (istream& in, NTD& Tmp_Money)  
   {  
    cout << "請輸入匯率比(台幣:美金)" << endl<< "1塊台幣 : 美金 " ;  
    in >> Tmp_Money.NT_Exchange_Rate;    // 設定NTD的類別成員資料  
    return (in);                         // 傳回輸入物件  
    }  
    ostream& operator << (ostream& out, USD& Tmp_Money)  
    {  
    out << Tmp_Money.US_Exchange_Rate    // 輸出USD的類別成員資料  
    << " 元" << endl;  
    return (out); // 傳回輸出物件  
    }  
    NTD::operator USD()   
     {  
     float US_Exchange_Rate=1/NT_Exchange_Rate;  // 計算轉換後的兌換比率  
     return (USD(US_Exchange_Rate));      // 傳回USD類別  
      }  
    
     int main()  
      {  
       NTD NT_Dollar;  
       USD US_Dollar;  
       cin >> NT_Dollar;   // 輸入NT_Dollar物件的內容  
   	   US_Dollar = NT_Dollar;      // 執行USD()轉換函數  
       cout << endl;  
       cout << "等於匯率比(美金:台幣)" << endl<< "1塊美金 : " << US_Dollar;  // 輸出轉結果  
      
      system("pause");
      return 0;
       }
