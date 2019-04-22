#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int score[10];           // 宣告長度為10的陣列
	int i,sum=0,below=0;
	double avg=0.0;

	// 利用迴圈設定陣列的元素值，並計算總分
	for (i=0;i<10;i++)
	{
		cout << "請輸入第" << i+1 << "位學生的成績：";
		cin >> score[i];    // 設定陣列的元素值
		sum += score[i];    // 計算總分
	}

	avg=(double)sum/(double)10;  // 計算平均分數

	// 計算低於平均分數的人數
	for (i=0;i<10;i++)
	{
		if (score[i] < avg)
			below++;            // 將人數加1
	}
	cout << "總成績：" << sum << endl;
	cout << "平均分數：" << avg << endl;
	cout << "有 " << below << "人成績低於平均分數" << endl;
	
	system("pause");
	return 0;
	
}
