#include<iostream>
#include<cstdlib>

using namespace std;	

int main()
{
   
  int Chi,Eng,Math;
  float Total,Average;
  
  cout<<"請輸入國文 英文 數學成績:";
  cin>>Chi>>Eng>>Math;
  
  Total=Chi+Eng+Math;//計算兩者成績總和
  Average=Total/3; //計算兩者平均成績
  cout<<"======================================"<<endl;
  cout<<"成績總分="<<Total<<"平均成績="<<Average<<endl;
  
  system("pause");
  return 0;
} 
