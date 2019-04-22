#include <iostream>  // 處理輸出入的標頭檔
#include <iomanip>  // 操縱子的標頭檔
#include <cstdlib> 
using namespace std;


int main()
{
    int i, n;
    cout << "設定輸出訊息的最小寬度為 3" << endl;
    for( i = 1, n = 0; i < 6; i++)
    	{
             n *= 10;
             n += i;
             cout << setw(3) << n << endl;	// 使用setw()操縱子
        }
        cout << endl;
           	 cout << "設定空白填充字元為'@'" << endl;
     for( i = 1, n = 0; i < 6; i++)
         {
              n *= 10;
              n += i;
        	  cout << setw(3) << setfill('@') << n << endl;	 // 使用setfill()操縱子
         }
        cout << endl;
        cout << "設定浮點數的位數為3與5" << endl;
        cout << setprecision( 3 ) << 12.3456789 << endl	// 使用setprecision()操縱子
        << setprecision( 5 ) << 123.456789 << endl;
        cout << endl;
        cout << "使用setiosflags()操縱子與ios旗標\"scientific\"設定浮點數以科學記號格式顯示"<< endl;
        // 使用setiosflags()操縱子
        cout << setiosflags( ios::scientific ) << setprecision( 3 ) << 12.3456789 << endl << endl;
       	cout << "使用resetiosflags()操縱子與ios旗標\"scientific\"清除科學記號格式顯示"<< endl;
         	// 使用resetiosflags()操縱子
        cout << resetiosflags( ios::scientific ) << setprecision(3) << 12.3456789 << endl;
        cout << endl;
        
        system("pause");
        return 0;
         }
