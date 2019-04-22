#include <iostream>  // 處理輸出入的標頭檔
#include <iomanip>  // 操縱子的標頭檔
#include <cstdlib>
using namespace std;

int main()
	{
     int i, n;// 使用旗標 ios::right
     cout << "使用格式旗標\"ios::right\"將輸出靠右顯示,此為預設值" << endl;
     for( i = 1, n = 0; i < 6; i++)
     {
      n *= 10;
      n += i;
      cout << setiosflags( ios::right ) << setw(5) << n << endl;
	 }
      cout << resetiosflags( ios::right ) << endl; // 解除設定
     // 使用旗標 ios::left
     cout << "使用格式旗標\"ios::left\"將輸出靠右顯示" << endl;
     for( i = 1, n = 0; i < 6; i++)
     {
      n *= 10;
      n += i;
      cout << setiosflags( ios::left ) << setw(5) << n << endl;
      }
      cout << endl;

      system("pause");
      return 0;
      }


============================================



#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    for(int a=1; a<=9; a++)
    {
        for(int b=1; b<=a; b++)
            cout<< setiosflags( ios::right ) << setw(5) <<b;
        cout<<endl;
    }
}
