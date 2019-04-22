#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

//宣告類別Student

class Student
{
  public:
     char *Student_Name;  //學生姓名
     long Name_Len;    //字串長度
     int Str_Num;   //字元編號
     //建構子
     Student()
     {
       Name_Len = 0;
       Student_Name = new char [Name_Len + 1];
       Student_Name[0] = '\0';
      }//Student函數：設定學生姓名
     Student(char *N)
      {
       Name_Len = strlen(N);
       Student_Name = new char [Name_Len + 1];
       strcpy(Student_Name, N);
      }//多載「[]」運算子
     char operator[](int In_Num);//宣告>>運算子多載函數為朋友關係
     friend istream& operator>>(istream& input, Student& obj);
 };//多載「[]」運算子宣告內容
 
 char Student::operator[](int In_Num)
 {
 //若In_Num值超過字串長度，則將In_Num值設為Name_Len -1
  if (In_Num >= Name_Len)
  {
   In_Num = Name_Len - 1;
  }//若In_Num值小於0，則將In_Num值設為0
  if (In_Num < 0)
  {
  In_Num = 1;
  }//傳回取得的字元
  return Student_Name[In_Num];
  }
  //>>運算子多載宣告
  istream& operator>>(istream& input, Student& obj)
 {
  cout <<"請輸入學生姓名：";
  input >>obj.Student_Name;
  cout <<endl <<"請輸入您想取得第幾個字元：";
  input >>obj.Str_Num;
  return input;
  }
 int main()
 {
  Student x; //利用剛宣告的>>運算子多載輸入物件x的資料
  cin >>x;
  cout <<endl <<"學生姓名：" <<x.Student_Name <<endl;
  //利用剛宣告的[]運算子多載，輸出所選擇的字元
  cout <<endl <<"學生姓名的第" <<x.Str_Num;
  cout <<"個字元為：" <<x.Student_Name[x.Str_Num - 1] <<endl;
  
  system("pause");
  return 0;
 }
