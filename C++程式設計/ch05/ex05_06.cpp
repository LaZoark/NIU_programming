#include<iostream>
#include<string>
using namespace std;

int main()
{
	//將str1字串宣告為5個S字元 
 	string str1(5,'S');
	cout<<"str1="<<str1<<endl;
	//宣告str2的初始值為str1的字串值 
	string str2(str1);
	cout<<"str2="<<str2<<endl;
	string str="this is a string";
	//擷取str字串的第4字元到第15字元作為str3的初始值 
	string str3(str,4,12);
	cout<<"str3="<<str3<<endl;
	
	system("pause");
	return 0;
}
