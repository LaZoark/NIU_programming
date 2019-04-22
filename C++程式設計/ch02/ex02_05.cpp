#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{	
	int a,b;
    a=b=5;//宣告a,b的值
 	//利用混合指定運算子,計算下列算式
     cout<<"a="<<a<<" b="<<b<<endl;
     
     a+=5; 
 	 b*=6;
 	 cout<<"a+=5,b*=6 "<<endl;
 	 cout<<"a="<<a<<" b="<<b<<endl;
     
  	 //混合指定運算子的多層運算 
  	 a+=a+=b+=b%=4;
     cout<<"a+=a+=b+=b%%=4 "<<endl;
     cout<<"a="<<a<<" b="<<b<<endl;
     
     system("pause");
     return 0;
} 
