#include<iostream>
#include"CH09_01_1.cpp" 
//只宣告函數的原型
using namespace std;

double factorial(int );//函數原型宣告 
double Cnk(int ,int);//函數原型宣告 
//主程式部分
int main()
{	
	int n,k;
	cout<<"計算C(n,k)=n!/(k!(n-k)!)"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"請輸入n=";
	cin>>n;
 	cout<<"請輸入k=";
	cin>>k;	
	cout<<n<<"!"<<"/("<<k<<"!("<<n<<"-"<<k<<")!)="<<Cnk(n,k)<<endl;//印出結果 
    
    system("pause");
    return 0;	
}
