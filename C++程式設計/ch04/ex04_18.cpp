#include <iostream> 
#include <cstdlib>                             
using namespace std;

int main()
{
int Add_Num, Total;                          // 定義整數變數 Add_Num、Total
cout << "輸入整數值(輸入 0 結束程式):";
cin >> Add_Num;                          // 整數變數 Add_Num 儲存輸入值
Total=0;                                 // 整數變數 Total 歸零。
//for 敘述執行累加運算與訊息顯示 
for ( int Counter=1; Counter <= Add_Num ; Counter++)
{
cout << Counter<<"^3";
if ( Counter < Add_Num ) cout << " + ";   // 控制加號(+)的輸出個數
Total+=Counter*Counter*Counter;
}
if ( Total ) cout << " = " << Total;     // 若是整數變數 Total 不為 0，則顯示輸出。
cout << endl;                            // 換行
cout << "程式結束執行...";
cout << endl;         

system("pause");
return 0;
                      
}
