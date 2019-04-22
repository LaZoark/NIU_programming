#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int a,b;
	
    a=5;
    cout<<"a="<<a;
	b=++a;
	cout<<"前置型遞增運算子:b=++a 後 a="<<a<<",b="<<b<<endl;
	//前置型遞增運算子
	cout<<"--------------------------------------------"<<endl;
    a=5;
    cout<<"a="<<a;
	b=a++;
	cout<<"後置型遞增運算子:b=a++ 後 a="<<a<<",b="<<b<<endl;
    //後置型遞增運算子
    cout<<"--------------------------------------------"<<endl;
    a=5;
    cout<<"a="<<a;
	b=--a;
	cout<<"前置型遞減運算子:b=--a 後 a="<<a<<",b="<<b<<endl;
	//前置型遞減運算子
    cout<<"--------------------------------------------"<<endl;
    a=5;
    cout<<"a="<<a;
	b=a--;
	cout<<"後置型遞減運算子:b=a-- 後 a="<<a<<",b="<<b<<endl;
	//後置型遞減運算子
    cout<<"--------------------------------------------"<<endl;
    
    system("pause");  
    return 0;
 }
