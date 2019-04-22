#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int score[5][4];            // 宣告5*4的二維陣列，用來存放成績
	int fail[5]={0};            // 宣並初始化二維陣列，用來記錄不及格的科目數
	int i,j,sum=0,count=0;
	bool flag;                  // 用來判斷是否遞增人數
	for(i=0; i < 5; i++)
	{
		flag=false;             // 初始化遞增人數的判斷開關
		cout << "請輸入No." << i+1 << "的國、英、數、自然成績：";
		for (j=0; j < 4; j++)
		{
			cin >> score[i][j];       // 輸入各科成績
			sum += score[i][j];       // 計算總分
			if (score[i][j] < 60)     
			{
				fail[i] += 1;         // 遞增不及格的科目數
				if (flag == false)
				{
					count++;          // 遞增不及格人數
					flag=true;        // 變更判斷開關
				}
			}
		}
	}
	cout << endl;
	cout << "全班總成績：" << sum 
		 << "，全班平均分數：" << (float)sum/(5*4) << endl;
	cout << "共有 " << count << " 人有不及格的科目" << endl;
	// 輸出有不及格科目的學生座號及不及格科數
	for (i=0; i < 5; i++)
		if (fail[i] != 0)
			cout << "No." << i+1 << "有 " << fail[i] << " 科不及格" << endl;
	
	system("pause");
	return 0;
}
