#include <iostream>
#include <cstdlib>

using namespace std;
 
int main()
  {
    //宣告變數
    float c, f;
    //輸入攝氏溫度
    cout << "請輸入攝氏溫度：";
    cin >> c;		//運算式
    f=(9*c)/5+32;	//顯示華氏溫度
    cout << "攝氏" << c << "度 = 華氏" << f << "度\n";
    
    system("pause");
    return 0;
  
   } 
