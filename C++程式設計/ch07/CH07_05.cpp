#include <iostream>
#include <cstdlib>
using namespace std;

void add(int &,int &);		//肚把σ㊣add()ㄧ计 

int main()
{
   int a=5,b=10;
   
   cout<<"㊣add()ぇ玡,a="<<a<<" b="<<b<<endl;  
   add(a,b);	//㊣addㄧ计,磅︽a=a+b; 
   cout<<"㊣add()ぇ,a="<<a<<" b="<<b<<endl;
  
   system("pause");
   return 0;
}

void add(int &p1,int &p2)//肚㊣ㄧ计﹚竡 
{
   p1=p1+p2; 
}

