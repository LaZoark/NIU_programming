#include <iostream>
#include<cstdlib>
using namespace std;

class vehicle {              
      // 宣告基礎類別vehicle
      public:
       virtual void start()=0; // 純虛擬函數start
       virtual void stop()=0;     // 純虛擬函數stop
        };
class aircraft: public vehicle {   
      // 宣告衍生類別aircraft
      public:
       virtual void start()        //宣告同名異式的成員函數start (其virtual關鍵字可省略)
       {
       cout  << "飛行器啟動"<< endl;
        }
       virtual void stop()       //宣告同名異式的成員函數stop (其virtual關鍵字可省略)
       {
       cout << "飛行器停止"<< endl;
       }	
       };
class car: public vehicle {      
      // 宣告衍生類別car
      public:   
      virtual void start()       //宣告同名異式的成員函數start (其virtual關鍵字可省略)
      {
      cout << "汽車啟動"<< endl;
      }
      virtual void stop()       //宣告同名異式的成員函數stop (其virtual關鍵字可省略)
      {
      cout << "汽車停止"<< endl;
      }
      };
      int main()
      {
        vehicle* ve ;//宣告基礎類別vehicle指標,抽象基礎類別不可實體化
        aircraft af;
        car cr;
        
        ve = &af;   // 將基礎類別指標指向衍生類別aircraft
        ve->start();  // 呼叫其成員函數start()
        ve->stop();  // 呼叫其成員函數stop()
        ve = &cr;   // 將基礎類別指標指向衍生類別car
        ve->start(); // 呼叫其成員函數start()
        ve->stop();  // 呼叫其成員函數stop()
      
        system("pause");
        return 0;
      }
