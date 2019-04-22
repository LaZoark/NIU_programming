#include <iostream>  // 處理輸出入的標頭檔
#include <iomanip>
#include <cstdlib>
using namespace std;
 
int main()
{
    	int i, n;// 使用width()函數
        cout << "設定輸出訊息的最小寬度為 3" << endl;
         for( i = 1, n = 0; i < 6; i++)
         {
              n *= 10;
              n += i;
              cout.width(3);
              cout << n << endl;
         }
         cout << endl;
         // 使用fill()函數
         cout << "設定空白填充字元為'@'" << endl;
         for( i = 1, n = 0; i < 6; i++)
         {
              n *= 10;
        	  n += i;
              cout.width(3);
              cout.fill('@');
              cout << n << endl;
           }
         cout << endl;
        	// 取得浮點數位元的預設值
            	cout << "浮點數的位數的預設值為 : " << cout.precision() << endl;	
            	cout << endl; // 使用setf()函數
                cout << "使用setf()函數與旗標\"scientific\"設定浮點數以科學記號格式顯示"
      			<< endl;
         cout.setf(ios::scientific);
         cout << 12.3456789 << endl << endl;// 使用setf( flag, field) 函數
         cout << "使用\" setf( ios::fixed, ios::floatfield );\" " << endl
         << "清除科學記號格式顯示,並重設為fixed point格式" << endl;	
         cout.setf( ios::fixed, ios::floatfield );
         cout << 12.3456789 << endl;
         cout << endl;
         
         system("pause");
         return 0;
         }
