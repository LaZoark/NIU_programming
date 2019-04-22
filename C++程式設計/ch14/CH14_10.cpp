#include <iostream>
#include <cstdlib>
using namespace std;

class vehicle {    
      // 宣告基礎類別vehicle
      public:
       void start()
       {
         cout << "運輸工具啟動"<< endl;
        }
        void shutdown()
       {
         cout << "運輸工具熄火"<< endl;
        }
                };
class aircraft: virtual public vehicle 
      {      
      // 宣告虛擬基礎類別aircraft
       public:
        void fly()
        {
         cout << "飛行器飛行"<< endl;
        }
       void land()
       {
            cout << "飛行器著陸"<< endl;
        }
      	};
class car: virtual public vehicle 
       {        
       // 宣告虛擬基礎類別car
       public:
        void go()
        {
            cout << "汽車啟動"<< endl;
         }
        void stop()
        {
            cout << "汽車熄火"<< endl;
         }
         };
class aircar: public aircraft, public car {};  // 宣告衍生類別aircar

int main()
        {
         aircar ac;
         ac.start();     // 衍生函數呼叫上兩層基礎類別vehicle的成員函數start
         ac.go();
         ac.fly();
         ac.land();
         ac.stop();
         ac.shutdown();      // 衍生函數呼叫上兩層基礎類別vehicle的成員函數stop
         
         system("pause");
         return 0;
       	}
