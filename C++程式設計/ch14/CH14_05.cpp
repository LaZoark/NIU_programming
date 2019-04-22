	#include<iostream>
	#include<cstdlib>
	using namespace std;
	
	// 宣告類別stclass
	class stclass
	{
	public:
		stclass() // 建構子
		{
			cout << "呼叫基礎類別的建構子" << endl;
		}
		~stclass() // 解構子
		{
			cout << "呼叫基礎類別的解構子" << endl;
		}
	};
	// 宣告類別student，並以public型別自類別stclass繼承
	class student :public stclass
	{
	public:
		student()  // 建構子
		{
			cout << "呼叫衍生類別的建構子" << endl;
		}
		~student() // 解構子
		{
   		    cout << "呼叫衍生類別的解構子" << endl;
		}
	};
	void call()
	{
     student st1;
    }
	// 主函式
	int main()
	{
		
	    call();//呼叫宣告物件st1的函數	
		system("pause");
		return 0;
	}
