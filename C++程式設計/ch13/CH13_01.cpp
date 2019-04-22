#include <iostream>                               // 含括標頭檔 <iostream>
#include <cstdlib>  
using namespace std;

class Student
{
    friend int operator+(Student&, Student&);           // 宣告朋友 operator+() 運算子函數
    private:
    int Score;
    public:
      
      Student(int S_Score)                           // Student 類別的建構函數
      {
         Score=S_Score;
      }
      
};

int operator+(Student& a, Student& b)                  // 加法運算子函數
{
    return (a.Score+b.Score);
}

int main()
{
    Student x(90);                                  // 定義 Student 的物件 x
    Student y(75);                                  // 定義 Student 的物件 y
    cout << "x+y=" << x+y << endl;
    
    system("pause");
    return 0;
}
