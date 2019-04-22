#include<iostream>
#include<cstdlib>
using namespace std;
	
	// 宣告類別student
	class student
	{
	private:
		int age;
	protected:
		int lang;
	public:
		int math;
		student()  // 建構子
		{
			age=0;
			lang=0;
			math=0;
		}
		void set_age(int a1)
		{
			age=a1;
		}
		void show_age()
		{
			cout << "age=" << age << endl;	
		}
	};
	
	// 以 private型別自類別student繼承成為新的類別s1
	class s1:private student
	{
	public:
		void set_lang(int v3)
		{
             
			lang=v3;   // 可直接設定型別為protected的成員資料lang
			
		}
		void set_math(int v4)
		{   

			math=v4;   // 可直接設定型別為public的成員資料math
		}
		void setage(int v5)
		{
			// 因為無法直接存取private型別的成員資料age
			// 必須藉由呼叫set_age成員來設定成員資料age
			set_age(v5); 
		}
		void show_data()
		{
			// 因為無法直接存取private型別的成員資料age，必須
		    // 藉由呼叫show_age()成員函式來取得age值並在螢幕上顯示
			show_age();			// 可直接存取類別student內的protected型別的成員資料lang
			// 可直接存取類別student內的public型別的成員資料math
			cout << "lang=" << lang << endl;
			cout << "math=" << math << endl;
		}
	};	
	int main()
	{
		// 宣告物件obj1
		s1 obj1;
		// 可藉由呼叫setage成員函式來呼叫類別student內public型別的成員函式set_age()
		obj1.setage(35); 
		// 可直接存取類別student內的protected型別的成員資料lang
		obj1.set_lang(100);
		// 可直接存取類別student內的public型別的成員資料math
		obj1.set_math(95);
		obj1.show_data();
		
		system("pause");
		return 0;
	}
