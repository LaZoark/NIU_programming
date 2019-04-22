#include <iostream>                                      // 含括標頭檔 <iostream>
#include <cstdlib> 
#include <cstring>                                        // 含括標頭檔 <cstring>

using namespace std;

class Student                                             // 宣告 Student 類別
{
// 將減法運算子函數宣告為朋友函數
    friend int operator-(int, Student);
    private:
      char Name[20];                                     // 定義字元陣列 Name[]
      int Score;                                          // 定義整數變數 Score
    public:
      Student(char *N, int s)                               // Student 類別的建構函數
      {
         strcpy( Name, N );
         Score=s;
      }
      bool operator>(Student b)                            // 大於(>)運算子函數多載
      {
          if ( this->Score > b.Score )
            return true;
          else
            return false;
      }
      void ShowName(void) { cout << "名字=" << Name << endl; }  // 顯示變數 Name 的內容
      void ShowScore(void) { cout << "成績=" << Score << endl; }   // 顯示變數 Score 的內容
};

//宣告減法運算子多載
int operator-(int p, Student q)
{
    return (p-q.Score);
}

int main()
{
    Student x("Tom", 70);                              // 定義 Student 的物件 x
    Student y("Mary", 85);                             // 定義 Student 的物件 y
    cout << "物件 x 的資料:" << endl;                   // 顯示物件 x 的資料
    x.ShowName();
    x.ShowScore();
    cout << "差 " <<(100-x) <<" 分才有100分" <<endl;    //呼叫減法運算子函數
    cout << "物件 y 的資料:" << endl;                   // 顯示物件 y 的資料
    y.ShowName();
    y.ShowScore();
    cout << "差 " <<(100-y) <<" 分才有100分" <<endl;    //呼叫減法運算子函數
    cout << "哪一位的成績較高:" << endl;
    if ( x > y )                                        // 使用 「>」運算子比較 x 與 y
      x.ShowName();
    else
      y.ShowName();
      
    system("pause");
    return 0;
}
