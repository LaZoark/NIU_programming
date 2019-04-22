#include <iostream>
#include <cstdlib>
#include <cmath>//引用cmath頭檔
using namespace std;

int main()
{
	double rad;
	double deg;
 	double pi=3.14159;
 	cout<<"請輸入角度:";
	cin>>deg;
	rad=deg*pi/180;//將角度轉換成徑度
	//輸出結果
	cout<<"sin("<<deg<<"度)="<<sin(rad)<<endl;
	cout<<"cos("<<deg<<"度)="<<cos(rad)<<endl;
	cout<<"tan("<<deg<<"度)="<<tan(rad)<<endl;
	//雙曲線部分
 	cout<<"雙曲線的sin("<<deg<<"度)="<<sinh(rad)<<endl;
 	cout<<"雙曲線的cos("<<deg<<"度)="<<cosh(rad)<<endl;
 	cout<<"雙曲線的tan("<<deg<<"度)="<<tanh(rad)<<endl;
	
	system("pause");
 	return 0;
}
