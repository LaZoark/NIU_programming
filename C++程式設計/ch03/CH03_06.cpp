#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int score1=78,score2=69,score3=92;
	int sum=0;
	
 	sum=score1+score2+score3;
 	cout<<"總分為:"<<sum<<endl;
 	cout<<"原來的平均成績為:"<<sum/3<<endl;//不轉換資料型態
 	//強制轉換資料型態
 	cout<<"強制轉換後的平均成績為:"<<(float)sum/3<<endl;
 	
    system("pause");
    return 0;
}
