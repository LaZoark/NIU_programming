#include<iostream>
#include<cstdlib>
using namespace std;

#define RESULT(r1,r2,h) ((((r1)+(r2))*(h))/2.0)//宣告巨集函數 
int main()
{	
	int r1,r2,h;
	cout<<"-----------------------------------"<<endl;
	//輸入梯形的各數值
	cout<<"上底=";
	cin>>r1;
	cout<<"下底=";
 	cin>>r2;
 	cout<<"高=";
 	cin>>h;
 	//利用巨集函數
 	cout<<"梯形面積="<<RESULT(r1,r2,h)<<endl;
 	cout<<"每個參數+2後的";
    cout<<"梯形面積="<<RESULT(r1+2,r2+2,h+2)<<endl;
    
    system("pause");
    return 0;	
}
