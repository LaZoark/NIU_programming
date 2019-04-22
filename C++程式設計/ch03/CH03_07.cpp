#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int  one = 9;
  double two = 7.6;
  one = one + static_cast<int>(two);//轉型運算子的應用 

  cout<<"one="<<one<<endl;
  
  system("pause");
  return 0;
}
