#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int score[10]={64,84,91,100,58,71,66,43,67,84};  //宣告並初始化陣列
	int degree[10]={0};                              //宣告並初始化陣列
	int i,j,sum=0;
	double avg=0.0;

	//利用迴圈計算總分，並遞增對應的分數級距人數 
	for (i=0; i<10; i++)
	{
		sum += score[i];            //算總分 
		if (score[i]/10 == 10)
			degree[9]++;            //成績為100，則將索引值9的元素加1
		else
			degree[score[i]/10]++;  //遞增對應的分數級距人數 
	}
	avg = (double)sum /(double)10;// 計算平均 
 
    cout<<"總分="<<sum<<"平均="<<avg<<endl; 
     cout<<"-----------------------------"<<endl;
    cout<<"人數分佈圖如下："<<endl;
    cout<<"-----------------------------"<<endl;
	cout<<"分數級距\t人數"<<endl;
	cout<<"-----------------------------"<<endl;
	
    for (i=0; i<10; i++)
	{
     cout<<i*10<<'~'<<i*10+9<<'\t'<<'\t'; //設定分數級距的輸出文字
		for (j=0;j<degree[i];j++)
			cout<<"*";                //以星號代表該級距的人數 
	 cout<<endl;
	}
 
   system("pause");
   return 0;
}
