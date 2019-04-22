#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
  int number;
  int i,j;
  
  cout<<"輸入數字,列印此數字之前的九九乘法表項目:";
  cin>>number; 
  //九九乘法表的雙重迴圈
  
  for(i=1; i<=9; i++)
  {
    for(j=1; j<=9; j++)
    {
       if(j>=number)   
            break;//設定跳出的條件
       cout<<j<<"*"<<i<<"="<<i*j<<'\t';//加入跳格字元 
    }
    cout<<endl;
  }
  
  system("pause");
  return 0;
}
