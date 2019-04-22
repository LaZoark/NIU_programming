#include <iostream>
#include <cstdlib>
using namespace std;

class Student                 //宣告Student類別
{
private:                       //宣告私用資料成員
	char StuID[8];          
	float Score_E,Score_M,Score_T,Score_A;
public:                        //公用資料成員
	void input_data()         //宣告成員函數
	{
	cout << "**請輸入學號及各科成績**" << endl;
	cout << "學號：";
	cin >> StuID;
    }
	void show_data()	       //宣告成員函數
	{
    
    cout << "輸入英文成績："; //實作input_data函數
	cin >> Score_E;
	cout << "輸入數學成績：";
	cin >> Score_M;
	Score_T = Score_E + Score_M;
	Score_A = (Score_E + Score_M)/2;
	cout << "================================" << endl;//實作show_data函數
	cout << "學生學號：" << StuID << "" << endl; 
	cout << "總分是" << Score_T << "分,平均是" << Score_A << "分" << endl;
	cout << "================================" << endl;
    }
};

int main()
{
	Student stud1;               //宣告Student類別的物件
	stud1.input_data();           //呼叫input_data成員函數
	stud1.show_data();           //呼叫input_data成員函數
	
	system("pause");
	return 0;
}
