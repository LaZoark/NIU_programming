	#include<iostream>
	#include<cstdlib>
	using namespace std;
	
	int main()
	{
		int num;  // 俱计跑计num
		cout<<"块num";
		cin>>num; // 块跑计num
		try
		{
			// 安跑计num10τ20碞メ俱计ㄒ
			if ((num > 10) && (num < 20))  
			{
				throw 1;
			}
			// 安跑计num10碞メじㄒ
			if (num < 10)
			{
				throw '*';
			}
		}

		catch(...) // ┮Τㄒ
		{
			cout<<"ヘ玡琌パcatch(...)ㄒ"<<endl;
		}
		
		system("pause");
		return 0;
	}
