#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int Score;      // 定義整數變數 Score，儲存學生成績
    cout << "輸入學生的分數:";
    cin >> Score;
    if ( Score > 100 )       // 判斷是否超過 
    cout << "輸入的分數超過 100." << endl;
     else 
      if ( Score < 0 )   // 判斷是否低於0 
     cout << "怎麼會有負的分數??" << endl;
      else	      // 輸入的分數介於 0-100
        if ( Score >= 60 )         // 判斷是否及格
        cout << "得到 " << Score << " 分，還不錯唷...";
        else
        cout << "不太理想喔...，只考了 " << Score << " 分";  // 分數不及格的情況
     cout << endl;        // 換行
    
    system("pause");
    return 0;
}
