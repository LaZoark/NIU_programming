#include<iostream>
#include<cstdlib>
using namespace std;
	
	// 宣告一個類別：student
	class student
	{
	private:
		int lang;
		int math;
	public:
		student();  // 建構子
		void get_score();
		void show_score();
	};
	// 實作建構子函數程式碼
	student::student()
	{
		lang=0;  // 指定成員資料lang初值為0
		math=0;  // 指定成員資料math初值為0
	}
	// 成員函數get_score()：用來取得國文及數學成績
	void student::get_score()
	{
		cout << "輸入國文成績:";
		cin >> lang;
		cout << "輸入數學成績:";
		cin >> math;
	}
	// 成員函數show_score()：將成績顯示在螢幕上
	void student::show_score()
	{
		cout << "國文成績:" << lang << endl;
		cout << "數學成績:" << math << endl;
	}
	
	// 類別st1宣告，自student類別以public型別來繼承
	class st1:public student
	{
	private:
		int age; // 學生年齡
	public:
		void show_data();
		void set_age();
	};
	// 成員函數show_data()：用來在螢幕上顯示資料
	void st1::show_data()
	{
		cout << "===================================" << endl;
		show_score();
		cout << "學生年齡:" << age << endl;
	}
	// 成員函式set_age()：輸入年齡值
	void st1::set_age()
	{
		cout << "輸入學生年齡:";
		cin >> age;
	}
	// 主函式
int main()
{
		// 宣告物件s1
		st1 s1;
		// 呼叫物件的成員函數 
		s1.get_score();
		s1.set_age();
		s1.show_data();
		
		system("pause");
		return 0;
}
