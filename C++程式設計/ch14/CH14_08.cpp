#include <iostream>
#include<cstdlib>
using namespace std;

class vehicle {              
      // 宣告基礎類別vehicle
      public:
       virtual void start() // 成員函數start
       {
        cout << "運輸工具啟動"<< endl;
       }
       virtual void stop()     // 成員函數stop
       {
            cout << "運輸工具停止"<< endl ;
        }
        };
class aircraft: public vehicle {   
      // 宣告衍生類別aircraft
      public:
       virtual void start()        // 具有和基礎類別相同名稱的成員函數start
       {
       cout  << "飛行器啟動"<< endl;
        }
       virtual void stop()           // 具有和基礎類別相同名稱的成員函數stop
       {
       cout << "飛行器停止"<< endl;
       }	
       };
class car: public vehicle {      
      // 宣告衍生類別car
      public:   
      virtual void start()         // 具有和基礎類別相同名稱的成員函數start
      {
      cout << "汽車啟動"<< endl;
      }
      virtual void stop()       // 具有和基礎類別相同名稱的成員函數stop
      {
      cout << "汽車停止"<< endl;
      }
      };
      int main()
      {
        vehicle* ve = new vehicle();  // 基礎類別的指標
        aircraft af;
        car cr;
        ve->start();  // 呼叫其成員函數start()
        ve->stop();  // 呼叫其成員函數stop()
        delete ve;
        ve = &af;   // 將基礎類別指標指向衍生類別aircraft
        ve->start();  // 呼叫其成員函數start()
        ve->stop();  // 呼叫其成員函數stop()
        ve = &cr;   // 將基礎類別指標指向衍生類別car
        ve->start(); // 呼叫其成員函數start()
        ve->stop();  // 呼叫其成員函數stop()
      
        system("pause");
        return 0;
      }
