#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

  //宣告類別Student
  class Student
  {
     public:
       char Student_Num[10];                   //學號
       int Student_Score;                       //總分
  //建構子
     Student() {}
  //Student函數：設定學生編號及總分
     Student(char *a, int b)
     {
         strcpy(Student_Num,a);
         Student_Score = b;
     }
  //多載比對運算子「>」、「= =」
      bool operator>(Student b)
      {
          if (this->Student_Score > b.Student_Score)
            return true;
          else
            return false;
      }
      bool operator==(Student c)
      {
          if (this->Student_Score == c.Student_Score)
            return true;
          else
            return false;
      }
  //宣告>>運算子多載函數為朋友關係
       friend istream& operator>>(istream& input, Student& obj);
  };

  //>>運算子多載宣告
  istream& operator>>(istream& input, Student& obj)
  {
       cout <<endl <<"請輸入學生學號：";
	      input >>obj.Student_Num;
	      cout <<endl <<"請輸入學生分數：";
       input >>obj.Student_Score;
       return input;
  }

  int main()
  {
     //宣告物件x與y
     Student x, y;
     //利用剛宣告的>>運算子多載輸入物件x與y的資料
     cout <<"第一個學生" <<endl;
     cin >>x;
     cout <<endl <<"第二個學生" <<endl;
     cin >>y;
     
     if (x == y)
	    cout <<endl <<"學號" <<x.Student_Num <<"與學號" <<y.Student_Num <<"分數相同。" <<endl;
     else
        if (x > y)
		   cout <<endl <<"學號" <<x.Student_Num <<"分數比學號" <<y.Student_Num <<"高" <<endl;
        else
           cout <<endl <<"學號" <<x.Student_Num <<"分數比學號" <<y.Student_Num <<"低" <<endl;
		
	 system("pause");
     return 0;
  }
