#include <iostream>                             // 含括標頭檔 <iostream.h>
#include <cstdlib>

using namespace std;
   
int main()
{
     int check, count;                            // 定義整數變數 check、count

	 for (count=0; count < 3; count++)			  // count 變數記錄輸入的次數。
	 {
	     cout << "輸入使用者密碼:";			 
	     cin >> check;                            // 整數變數 check 儲存輸入的密碼。

		 if ( check == 4321 )
			 break;                               // 若輸入密碼正確，則跳離 for 迴圈。
		 else 
			 cout << "輸入的密碼有誤，請重新輸入..." << endl;
	 }
	 
	 if ( count == 3)                             // 若密碼錯誤達 3 次，則顯示無法登入訊息。
		 cout << "連續 3 次密碼輸入錯誤，請重新登入並輸入正確密碼...";
	 else                                         // 輸入密碼正確，則顯示歡迎的訊息。
         cout << "歡迎光臨本系統...";

     cout << endl;                                // 換行
     
     system("pause");
     return 0;
}
