#include <iostream>
#include <cstdlib>
using namespace std;

class car { 
      public:
       void go()   // car類別的成員函數go
       {
            cout << "汽車發動!"<< endl;
       }
       void stop()   // car類別的成員函數stop
       {
            cout << "汽車熄火!"<< endl << endl;
       }
         };
       class freighter: public car
      	{
      public:
       void stop()   // 覆寫成員函數,原先繼承自car類別的成員函數則會被取代
         {
            cout << "freighter類別 :汽車熄火!"<< endl << endl;
          }
           };
        int main()
         {
          freighter ft;
          ft.go();      // 這裡執行的仍是由基礎類別car所繼承而來的成員函數	   
          cout<<"--------------------------------------"<<endl;
          ft.stop();    // 這裡執行的是覆寫後的成員函數,而不是由基礎類別car繼承而來的成員函數
          
          system("pause");
          return 0;
       	}
