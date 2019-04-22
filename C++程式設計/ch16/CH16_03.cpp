	#include<iostream>
	#include<cstdlib>
	using namespace std;
	
	int main()
	{
		int num;  // 宣告一個整數變數num
		try  // 最外層的try...catch 區塊
		{
			try  //最內層的try...catch區塊
			{
				cout<<"輸入一個值:";
				cin>>num;
				// 判斷變數值num是否大於0且小於8
				if ((num > 0) && (num < 8))
				{
					throw 1; // 當變數num值大於0且小於8時，則丟出一個型別為整數的例外
				}
				// 判斷變數值num的平方和是否大於100
				if (num*num>100)
				{
					throw "平方和大於100"; // 當變數num的平方合大於100時，丟出一個型別為字串的例外
				}
			}
			catch(int ex1)  // 捕捉型別為整數的例外
			{
				cout<<"執行最內層的catch區塊"<<endl;
			}
		}
		catch(const char *str)  // 捕捉型別為字串的例外
		{
			cout<<"執行最外層的catch區塊且"<<str<<endl;
		}
		cout<<"程式將要結束執行"<<endl;
		
		system("pause");
		return 0;
	}
