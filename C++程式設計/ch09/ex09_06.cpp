#include<iostream>
#include<cstdlib>
using namespace std;

#define PrintInt(v1) cout << "變數值為：" << v1 ;

int main()
{
  int v;
  cout << "請輸入一個變數值：";
  cin >> v;
  PrintInt(v);
  cout<<endl;
  system("pause");
  return 0;
}
