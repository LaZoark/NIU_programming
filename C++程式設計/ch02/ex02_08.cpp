#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  char ch,c1='B',c2='+';
  
  cout<<"c1="<<c1<<endl;//B字元的ASCII碼是66 
  cout<<"c2="<<c2<<endl;//+字元的ASCII碼是43
  ch=c1+c2;//加法運算後的ASCII碼是109 
  cout<<"c1+c2="<<ch<<endl;//列出ASCII碼109的字元是 m字元 
  
  ch=c1*3+c2*4;//加法運算後的ASCII碼是370
  cout<<"c1*3+c2*4="<<ch<<endl; //列印出字元 r 字元
  
  system("pause");
  return 0;
}
		 
		 
