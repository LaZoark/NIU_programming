#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	
    int a=11,b=15; //宣告兩個運算元 
	//關係運算子運算關係
    cout<<"a=11 , b=15\n"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"比較結果為真,則為1...比較結果為假,則為0\n"<<endl; 
    cout<<"a>b,比較結果為 "<<(a>b)<<endl;
    cout<<"a<b,比較結果為 "<<(a<b)<<endl;
    cout<<"a==b,比較結果為 "<<(a==b)<<endl;
    cout<<"a!=b,比較結果為 "<<(a!=b)<<endl;
    cout<<"a>=b,比較結果為 "<<(a>=b)<<endl;
    cout<<"a<=b,比較結果為 "<<(a<=b)<<endl;
    
    system("pause");    
    return 0;
 }
