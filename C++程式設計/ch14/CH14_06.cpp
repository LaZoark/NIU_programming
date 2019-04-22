	#include<iostream>
	#include<cstdlib>
	using namespace std;
	
	// 宣告類別stclass
	class stclass
	{
	public:
		stclass() // 建構子
		{
			cout << "呼叫stclass類別的建構子" << endl;
		}
		~stclass() // 解構子
		{
			cout << "呼叫stclass類別的解構子" << endl;
		}
	};
	// 宣告類別score
	class score
	{
	public:
		score() // 建構子
		{
			cout << "呼叫score類別的建構子" << endl;
		}
		~score() // 解構子
		{
			cout << "呼叫score類別的解構子" << endl;
		}
	};
	// 宣告類別student，並以public型別分別自類別stclass及score繼承
	class student :public stclass,public score
	{
	public:
		student()  // 建構子
		{
			cout << "呼叫類別student的建構子" << endl;
		}
		~student() // 解構子
		{
			cout << "呼叫類別student的解構子" << endl;
		}
	};
	// 主函式
	void call()
    {
      student st1; // 宣告物件st1
     }  
	int  main()
	{
	call();	
	
    system("pause");
    return 0;	
	}
