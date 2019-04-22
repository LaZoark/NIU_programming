#include<iostream>
#include<cstdlib>
using namespace std;

double rec_factorial(int );//遞迴函數原型宣告 
double factorial(int );//一般的迴圈函數原型宣告 

int main()
{	
	int n;
	cout<<"請輸入要計算的階乘數:";
	cin>>n;
	cout<<"遞迴函數:"<<n<<"!="<<rec_factorial(n)<<endl;
	cout<<"一般迴圈函數:"<<n<<"!="<<factorial(n)<<endl;
    system("pause");
    return 0;	
}
//遞迴函數 
double rec_factorial(int n)
{	
	if(n==1)
		return 1;//跳出反覆執行過程中的缺口 	
  	else  	
  		return n*rec_factorial(n-1);// 反覆執行的過程 		

}
//一般的迴圈函數 
double factorial(int n)
{
	int i;
    double sum=1;
 	for(i=1; i<=n; i++)
  		sum*=i;//利用迴圈來計算階乘值  
    return sum;	
}
