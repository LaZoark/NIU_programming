 #include <iostream> 
 #include <cstdlib> 
 using namespace std;
 
 class Dollar   // 計算匯率轉換的自訂類別  
 {  
       int NT_Dollar;   // NT_Dollar代表擁有的新台幣  
	   float Exchange_Rate;   // Exchange_Rate表示1美金可兌換的台幣金頧  
       public:  
   	     Dollar()            // Dollar類別的建構子  
          {  
            NT_Dollar=1;  
            Exchange_Rate=40;  
           }  
           Dollar(int Money,float Rate)  // Dollar類別的建構子  
           {  
            NT_Dollar=Money;  
            Exchange_Rate=Rate;  
           }  
       	friend istream& operator >> (istream& in, Dollar& Tmp_Money);  
      	// >>運算子的多載函數原型宣告，in是由istram類別生成的輸入物件  
        friend ostream& operator << (ostream& out, Dollar& Tmp_Money);  
        // <<運算子的多載函數原型宣告，out是由ostream類別生成的輸出物件  
        operator float();          // 多載型態轉換運算符號的函數原型宣告  
        float Get_Rate()  
        {  
         return (Exchange_Rate);  // 傳回匯率比  
         }  
         };  
         istream& operator >> (istream& in, Dollar& Tmp_Money)  
         {  
           cout << "請輸入1美元可兌換的台幣數量:";  
           in >> Tmp_Money.Exchange_Rate;     // 取得匯率比  
           cout << "請輸入您要兌換的台幣數：";  
           in >> Tmp_Money.NT_Dollar;        // 取得要兌換的台幣金額  
           return (in);                            // 傳回輸入物件  
           }  
         ostream& operator << (ostream& out, Dollar& Tmp_Money)  
         {  
          out << Tmp_Money.NT_Dollar << " 元";  
          return (out);             // 傳回輸出物件  
         }  
         Dollar::operator float () 
         {  
          float US_Dollar;  
          US_Dollar = (float)NT_Dollar / Exchange_Rate;  // 依據匯率比計算兌換金額  
          return (US_Dollar);                         // 傳回計算結果  
          }  
          int main()  
           {  
          	 Dollar TWD;  
               float USD;  
               cin >> TWD;       // 呼叫多載運算子>>設定物件內容  
               USD = (float)TWD;      // 呼叫多載型態轉換運算符號  
               cout << endl;  
               cout << "率匯比(美金:台幣) = 1 : " << TWD.Get_Rate() << endl;  
               cout << "要兌換的台幣金額：" << TWD << endl; // 呼叫多載運算子<<輸出物件內容  
               cout << "可兌換美金：" << USD << " 元" << endl;  
               
               system("pause");
               return 0;
           }
