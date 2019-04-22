#include <iostream>
#include <cstdlib>
using namespace std;

template <class type>
class function //宣告樣版類別 
{
  private:
        type y;
  public:
        function(type x) {y=x;}//代入樣版形式參數 
        void show()
        {
            cout<<"y="<<y<<endl;
        }
};
int main()
{    
    function<int> func1(10);// 物件名稱與物件及建構子的合併宣告
    func1.show();
    function<float> func2(9.8);// 物件名稱與物件及建構子的合併宣告
    func2.show();
    function<char> func3('z');// 物件名稱與物件及建構子的合併宣告
    func3.show();
    
    system("pause");
    return 0;
}

