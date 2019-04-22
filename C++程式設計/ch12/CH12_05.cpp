#include <iostream>
#include <cstdlib>
using namespace std;

class Square    //定義Square類別
{
    int a;
public:
    Square(int n)
    {
      a=n*n;
    }//建構子的定義 
    Square squ_sum(Square b)
    {
     this->a=this->a+b.a;
     return  *this;//透過this指標傳回Square類別物件 
     }  
     int show_data()
    {
      cout<<(*this).a<<endl;//列印私有資料成員a的值 
      return 0;
    }
};

int main()
{
      int n1,n2;
      
      cout<<"輸入第一個數:";
      cin>>n1;
      cout<<"輸入第二個數:";
      cin>>n2;
      Square first(n1),second(n2),third(0);//物件宣告與初始化 
      third=first.squ_sum(second);//呼叫first的成員函數,並傳回Square物件 
      third.show_data();//直接以成員函數列印結果 
      
      system("pause");
      return 0;
}
