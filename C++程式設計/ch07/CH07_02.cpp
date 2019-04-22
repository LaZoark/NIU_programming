#include<iostream>
#include<cstdlib>

using namespace std;

 int my_pow(int,int);
 void show_output(int);
//ㄧ计
int main()
{
 
  int x,r;
  cout<<"叫块ㄢ计:"<<endl;
  //块计
  cout<<"x=";
  cin>>x;
  cout<<"r=";
  cin>>r;
  //祘Α痹瓃い㊣ㄧ计
  cout<<x<<""<<r<<"Ωよ="<<my_pow(x,r)<<endl;//㊣my_pow()ㄧ计 
  system("pause");
  return 0;
}
//ㄧ计﹚竡场だ*
int my_pow(int x,int r)
{   int i;
	int sum=1;
	for(i=0;i<r;i++)
 	{
 		sum=sum*x;
    } //璸衡x^r 
    return sum; 
}
