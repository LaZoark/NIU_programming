#include <iostream>
#include <cstdlib>
using namespace std;

class Cube    //定義Cube類別
{
    int a;
public:
    Cube(int n)
    {
      a=n*n*n;
    }
    void cub_sum(Cube,Cube);       //函數原型宣告
};

void Cube::cub_sum(Cube b,Cube c)   //函數cub_sum程式碼實作
{
     a=a+b.a+c.a;
     cout<<"三數的立方和: "<<a;
}
int main()
{
      Cube first(2),second(3),third(4);
      first.cub_sum(second,third);
      cout<<endl;
      system("pause");
      return 0;
}
