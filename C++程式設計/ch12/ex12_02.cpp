#include <iostream>
#include <cstdlib>
using namespace std;

class Square    //定義Square類別
{
    int a;
public:
    Square(int n)
    {
      a=n*n;//計算平方和 
    }
    void squ_sum(Square*);       //函數原型宣告
};

void Square::squ_sum(Square *b)   //函數squ_sum程式碼實作
{
     a=a+b->a;
     cout<<"-----------------------------------"<<endl;
     cout<<"兩數的平方和: "<<a<<endl;
     cout<<"-----------------------------------"<<endl;
}
int main()
{
      Square first(8),second(6);
      first.squ_sum(&second);
      
      system("pause");
      return 0;
}
