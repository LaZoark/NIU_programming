#include<iostream>
#include<cstdlib>
using namespace std;
//加上指標運算子的函式原型宣告,這和傳值呼叫不同
void fun(int*, int*);

int main()
{	
	int a,b;
 	a=10;
    b=15;
    cout<<"主函數中:"<<a<<" b="<<b<<endl;
    cout<<"a的位址:a="<<&a<<" b的位址:"<<&b<<endl;	
	fun(&a,&b);//數需加上&取址運算子,這和傳值呼叫不同
	cout<<"-----------------------------------------"<<endl;
	cout<<"呼叫函數後:a="<<a<<" b="<<b<<endl;
    cout<<"a的位址:a="<<&a<<" b的位址:"<<&b<<endl;
	system("pause");
    return 0;	
}
//加上指標運算子的函數定義宣告,這和傳值呼叫不同
void fun(int *a, int *b)
{
	cout<<"-----------------------------------------"<<endl;
 	//此時的*a與*b代表的是傳遞過來位址上的數值,a與b則代表位址
	cout<<"函數內:a="<<*a<<" b="<<*b<<endl;
	//輸出函式內a與b的位址
	cout<<"a的位址:a="<<a<<" b的位址:"<<b<<endl;
	*a=20;
	*b=30;	
	cout<<"函數內變更數值後:a="<<*a<<" b="<<*b<<endl;
	
}
