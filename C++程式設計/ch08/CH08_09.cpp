#include<iostream>
#include<cstdlib>
using namespace std;

//︽ずㄧ计﹚竡 
inline int fun1(int a, int b,int c)
{
	return a+b+c;
}

int main()
{
	int a,b,c;
	cout<<"叫块计:";
	cin>>a>>b>>c;

 
 	if(fun1(a,b,c)%2==0)	//㊣︽ずㄧ计 
  		cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<"案计"<<endl; 
 	else
  		cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<"计"<<endl; 
    
    system("pause"); 
    return 0;
}
