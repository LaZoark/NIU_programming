	#include<iostream>
	#include<cstdlib>
	using namespace std;
	
	void throwex()
	{
		try  // 外層的try區塊
		{
			
			try {  // 內層的try區
				
				throw exception(); //丟出一個例外
			}
			catch(exception e)  //捕捉例外
			{
				cout<<"目前例外控制權是在函式throwex的第二層try區塊中"<<endl;
				throw; //重新丟出一個例外
			}
		}
		catch(...) //捕捉所有的例外
		{
			cout<<"第一層try區塊,捕捉所有的例外"<<endl;
		}
	
	}
	int main()
	{
		try {
			throwex();  //呼叫函數throwex
			cout<<"在函式main內的try區塊"<<endl;  
		}
		catch(exception e)  //捕捉例外
		{
			cout<<"目前例外控制權是在主函數main中"<<endl;
		}
		cout<<"程式執行完畢"<<endl;
		
		system("pause");
		return 0;
	}
