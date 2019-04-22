#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
  int number;
  int i,j;
  
  cout<<"請輸入九九乘法表中所不要列印的數字項目: ";
  cin>>number;
  
  //九九乘法表的雙重迴圈   
  for(i=1; i<=9; i++)
  {
    for(j=1; j<=9; j++)
    {
       if(j==number)   
       continue;//設定繼續的的條件
       cout<<j<<'*'<<i<<'='<<i*j<<'\t';
    }
    cout<<endl;
  }
  system("pause");
  return 0;
}
