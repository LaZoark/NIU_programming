 #include <iostream>  
 #include <cstdlib>
 using namespace std;
 
 class IsZero         // 宣告一個 IsZero類別  
  // 主要作用是用來判斷成員值是否大於等於0  
  {   
      int Num;          // 宣告類別資料成員 
      public:  
        IsZero(int n)        // 宣告類別建構子  
       	{  
          Num=n;            // 若建立物件時有指定初始值  
       	}                   // 就將初始值指定給成員Num  
       	 IsZero()  
        {  
       	  Num=-1;         // 若建立物件時沒有指定初始值  
        }              // 就自動將Num設定成-1  
        bool operator !();         // 多載一元運算子 !  
   };  
    bool IsZero::operator ! ()      // 實作運算子函數  
    {  
        if (Num >= 0)  
         return true;          // 如果資料成員的值大於等於0，就傳回true  
        else  
         return false;          // 否則傳回false  
    }  
    int main()  
     {  
        IsZero Num1(3);          // 建立IsZero類別的物件  
       	if (!Num1)               // 呼叫多載運算子 ! 	
               cout << "Num1 大於等於 0" << endl;  
        else  
               cout << "Num1 小於 0" << endl; 
         
         system("pause");
         return 0; 
     }
               
               
               
               
               
               
