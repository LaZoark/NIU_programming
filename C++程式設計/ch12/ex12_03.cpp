#include <iostream>
#include <cstdlib>
using namespace std;
	
	//定義類別Addsum
class Addsum
{
	int x;
	public:
	//宣告建構子函數原型
	Addsum(int);
	//宣告函數原型
	void sum(Addsum);   //傳入類別參數
	void show();
};
	
	//實做建構子函數並傳入值
	Addsum::Addsum(int s)
	{
	x=s;
	}
	
	//實做sum函數成員傳入物件參數
	void Addsum::sum(Addsum obj)
	{
	x+=obj.x;  //本身物件資料成員值加上傳入物件之資料成員值
	}
	
	void Addsum::show()
	{
	cout<<x;
	}
	
int main()
{
	Addsum a(1000),b(1500);
	a.show();
	cout<<"+";
	b.show();
	cout<<"=";
	a.sum(b);   //呼叫物件a的函數成員，並將物件b傳入
	a.show();
	cout<<endl;
	
	system("pause");
	return 0;
}
