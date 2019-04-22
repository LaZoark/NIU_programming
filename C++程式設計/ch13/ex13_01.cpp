#include<iostream>
#include<cstdlib>
using namespace std;
	
	// 宣告類別Score
class Score
{
	public:
		int var1;    // 定義變數var1
		Score(int a) // 定義類別Score的建構子函數
		{
			var1=a;
		}
};
	
// 宣告加法運算子多載
	int operator+(int x,Score s1)
	{
		return (x+s1.var1);
	}
	
int main()
{
		Score st1(20);  // 定義Score的物件st1
		cout << "100 + 20 = " << (100+st1) << endl;  // 顯示相加後的結果
		
		system("pause");
		return 0;
}

