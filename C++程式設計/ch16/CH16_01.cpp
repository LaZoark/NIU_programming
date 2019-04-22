	#include<iostream>
	#include<cstdlib>
	using namespace std;
	
	int main()
	{
		cout<<"==簡單的例外範例==\n";
		//使用try...catch來捕捉例外
		try
		{
			int n1;
			cout<<"請輸入除數:";
			cin>>n1; //輸入除數值
			if (n1==0) 
				throw 1;  //若除數為0時，則丟出一個例外
			cout<<"沒有補捉到例外"<<endl; //當捕捉到例外時，此行並不會執行
			
		}
		catch(int i)  //找到符合的catch區塊型別
		{
			cout<<"捕捉到除數為0的例外"<<endl;
		}
		cout<<"結束程式的執行"<<endl; //提示已至程式碼的尾端
		
		system("pause");
		return 0;
	}
