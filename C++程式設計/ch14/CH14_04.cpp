#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
  //宣告基礎類別Math
  class Math
  {
     private:
       int Math_Score;                             //數學成績
     public:
       //函數Math_make()：設定數學成績
       void Math_make(int a) 
       {
          Math_Score = a;
       }
       //函數Math_take()：設定傳回數學成績方便衍生類別呼叫
       int Math_take()
       {
          return Math_Score;
       }
  };

  //宣告基礎類別Chinese
  class Chinese
  {
     private:
       int Chinese_Score;                             //國文成績
     public:
       //函數Chinese_make()：設定國文成績
       void Chinese_make(int b)
       {
          Chinese_Score = b;
       }
       //函數Chinese_take()：設定傳回國文成績方便衍生類別呼叫
       int Chinese_take()
       {
          return Chinese_Score;
       }
  };

  //宣告基礎類別History
  class History
  {
     private:
       int History_Score;                             //歷史成績
     public:
       //函數History_make()：設定歷史成績
       void History_make(int c)
       {
          History_Score = c;
       }
       //函數History_take()：設定傳回歷史成績方便衍生類別呼叫
       int History_take()
       {
          return History_Score;
       }
  };

  //宣告類別Student並以三種繼承關鍵字分別繼承三個基礎類別
  class Student: public Math, protected Chinese, private History
  {
     private:
       int Student_Number;                         //學號
     protected:
       char Student_Name[20];                      //姓名
     public:
       //函數Student()：設定學號與姓名
       Student(int d, char *N) 
       {
          Student_Number = d;
          strcpy (Student_Name, N);
       }
       //函數Student_C_make()：間接存取Chinese_make()
       void Student_C_make(int e)
       {
          Chinese_make (e);
       }
       //函數Student_H_make()：間接存取History_make()
       void Student_H_make(int f)
       {
          History_make (f);
       }
       //於螢幕顯示結果
       void Student_Show()
       {
          cout <<endl;
          cout <<"學號：" <<Student_Number <<endl;
          cout <<"姓名：" <<Student_Name <<endl;
          cout <<"數學成績：    " <<Math_take() <<endl;
          cout <<"國文成績：    " <<Chinese_take() <<endl;
          cout <<"歷史成績：    " <<History_take() <<endl;
          cout <<"總成績：      " << Math_take() + Chinese_take() + History_take() <<endl;
       }
  };

  //程式主要執行區域
  int main()
  {
    //類別Student：物件object1
    Student object1(31232, "Alex");
         object1.Math_make(65);
         object1.Student_C_make(78);
         object1.Student_H_make(34);
         object1.Student_Show();
    
     system("pause");
     return 0;
   }
