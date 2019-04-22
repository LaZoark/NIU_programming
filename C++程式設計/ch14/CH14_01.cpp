#include <iostream>
#include <cstdlib>
using namespace std;

class car {
      public:     // 基礎類別中的成員函式宣告為public 
      void go()               // car類別的成員函數go()
      {
           cout <<"汽車啟動了!"<< endl;
      }
      void stop()    // car類別的成員函數stop()
      {
           cout <<"汽車熄火了!"<<endl;
       }	
       };
       class freighter: public car
        {};   // 衍生類別將其存取設定字元宣告為public
       
       int main()
       {
           freighter ft;
           
           ft.stop();
           cout<<"-------------------------------"<<endl;
           ft.go();   
           cout<<"-------------------------------"<<endl;
          // ft是freighter類別的一個物件,因為繼承關係,所以可以使用go()與stop()函數
        
        system("pause");
        return 0;
           
       	}
