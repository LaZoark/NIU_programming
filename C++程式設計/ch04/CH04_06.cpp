#include <iostream>                                
#include <cstdlib>

using namespace std;
 
int main()
{
	 int Mul_1, Mul_2;                                 // 定義整數變數 Mul_1、Mul_2
	 
     for (Mul_1=1; Mul_1 <= 9; Mul_1++)                // 第一層 for 迴圈 
	 {                                                 // 整數變數 Mul_1 作為乘數
		 for (Mul_2=2; Mul_2 <= 9; Mul_2++)            // 第二層 for 迴圈
		 {                                             // 整數變數 Mul_2 作為被乘數
             //顯示訊息與運算結果。 
		 	 cout << Mul_2 << '*' << Mul_1 << '=' << Mul_2*Mul_1 << ' ';

			 //相乘後的數值若只有個位數，則輸出空白字元，調整輸出。 
			 if ( Mul_1*Mul_2 < 10 ) cout << ' ';  
		 }

		 cout << endl;                             // 換行
	 }	 
	 
	 system("pause");
	 return 0;
}
