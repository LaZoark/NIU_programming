#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int a=11,b=15;
	int c=a>b;
	int d=a==b;
	int e=a!=b;
	
   //關係與邏輯運算子的交互運算 
	
    cout<<"a="<<a<<" b="<<b<<endl;
    cout<<"c=a>b, c="<<c<<endl;
    cout<<"d=a==b, d="<<d<<endl;
    cout<<"e=a!=b, e="<<e<<endl;
    cout<<"c && d ="<<(c&&d)<<endl;
    cout<<"c || d ="<<(c||d)<<endl;
    cout<<"c || !e ="<<(c||!e)<<endl;
    
    system("pause");  
    return 0;
 }
