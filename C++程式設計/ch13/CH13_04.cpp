#include<iostream>
#include<cstdlib>
using namespace std;

// 宣告類別Score
 class Score
 {
 private:
 int var1;    // 定義變數var1
 
  friend istream& operator>>(istream& inputvar,Score& s1);
  friend ostream& operator<<(ostream& outputvar,Score& s1);
 };

// 宣告>>運算子多載
istream& operator>>(istream& inputvar,Score& s1)
 {
  cout << "請輸入一個數值：";
  inputvar >> s1.var1;
  return inputvar;
 }

// 宣告<<運算子多載
ostream& operator<<(ostream& outputvar,Score& s1)
 {
  cout << "輸入的值為：";
  outputvar << s1.var1 << endl;
  return outputvar;
 }

 int main()
{
  Score st1;   // 定義Score的物件st1
  
  cin >> st1;  // 使用多載>>運算子來輸入一個變數值
  cout << st1; // 使用多載<<運算子來顯示一個變數值

  system("pause");
  return 0;
}
