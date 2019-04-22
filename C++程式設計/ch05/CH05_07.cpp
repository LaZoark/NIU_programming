    #include<iostream>
    #include<cstdlib>
	// 引用字串類別
	#include<string>
	
	using namespace std;
	
	int main()
	{
		// 宣告String字串
		string st1,st2,st3,st4,st5;
		st1="abcdef";
		st2="ABCDEF";
		st3="Happy ";
		st4="Birthday";
		
		// 進行字串連接運算
		st5=st3+st4;
		cout<<"st3="<<st3<<endl;
		cout<<"st4="<<st4<<endl;
		cout << "s3與s4串接後字串變數st5的值為：" << st5 << endl;
		cout<<"--------------------------------------"<<endl;
		// 進行字串之間的比較
		cout<<"st1="<<st1<<endl;
		cout<<"st2="<<st2<<endl;
		if (st1 > st2)
			cout << "st1 與 st2之間的關係為：st1 > st2 " << endl;
		else
			cout << "st1 與 st2之間的關係為：st1 > st2 " << endl;
			
		 system("pause");
		 return 0;
	}
