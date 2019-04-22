#include<iostream>
#include<cstdlib>
using namespace std;

int sum(int);
int sum1(int);// ㄧ计 
int main()
{	
	int n;
	
	cout<<"材Ω㊣"<<endl; 
 	cout<<"跑计ㄧ计:"<<sum(5)<<endl;
  	cout<<"繰篈跑计ㄧ计:"<<sum1(5)<<endl;
	cout<<"材Ω㊣"<<endl; 
    cout<<"跑计ㄧ计:"<<sum(10)<<endl;
  	cout<<"繰篈跑计ㄧ计:"<<sum1(10)<<endl;
  	cout<<"材Ω㊣"<<endl; 
 	cout<<"跑计ㄧ计:"<<sum(15)<<endl;
  	cout<<"繰篈跑计ㄧ计:"<<sum1(15)<<endl;
    
    system("pause");
    return 0;	
}
//跑计ㄧ计
int sum(int n)
{ 
	int sum=0;//﹍砞﹚0
	sum+=n;
	return sum;
}
//繰篈跑计ㄧ计
int sum1(int n)
{
	//繰篈跑计sum
	static int sum;
	
	sum+=n;
 	return sum;
}
