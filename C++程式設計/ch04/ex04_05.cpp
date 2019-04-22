#include <iostream>
#include <cstdlib>

using namespace std;
 
int main()
  {
    //宣告變數
    int x ,y , h;
    float ans;
    //輸入梯形的長、寬、高
    cout << "請輸入梯形的長、寬、高：";
    cin >> x >> y >> h;//運算式
    ans=(float)(x+y)*(float)h/2;
    cout << "梯形面積=" << ans << endl;
    
    system("pause");
    return 0;
  
   } 
