#include<iostream>
#include<cstdlib>
using namespace std;

#define F(no)(no%2==0)?printf("块计案计\n"):printf("块计计\n");

int main()
{
  int number;
  
  cout<<"叫块计: ";
  cin>>number;//块计
  F(number);
  
  system("pause");
  return 0;
}
