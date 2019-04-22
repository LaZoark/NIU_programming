#include <iostream>                             // 含括標頭檔 <iostream.h>
#include <cstdlib> 

using namespace std;

int main()
{
	 int Money;                                   // 定義整數變數 Money

     cout << "請輸入年所得:";
     cin >> Money;                                // 整數變數 Money 儲存年所得金額

	 cout << "應繳交的稅額:";

	 //if...else if...敘述，判斷應繳稅額 
	 if ( Money > 750000 )                        // 所得超過 75 萬
		 cout << Money*0.08;
	 else if ( Money > 500000 )                   // 所得超過 50 萬
		 cout << Money*0.05;
	 else if ( Money > 250000 )                   // 所得超過 25 萬
		 cout << Money*0.025;
	 else                                         // 所得不滿 25 萬
		 cout << Money*0.01;                      

 	 cout << endl;                                // 換行
 	 
 	 system("pause");
 	 return 0;
}
