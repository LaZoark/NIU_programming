#include <iostream>
#include <cstdlib>
using namespace std;

template <class type>
class fun
{
  private:
        type y;
  public:
        fun(type x) {y=x;}
        void show()
        {
            cout<<"y="<<y<<endl;
        }
};
int main()
{    
    fun<int>func1(10);
    func1.show();
    fun<float>func2(9.8);
    func2.show();
    fun<char> func3('z');
    func3.show();
    
    system("pause");
    return 0;
}

