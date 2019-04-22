#include <iostream>
#include <cstdlib>
 //引數：x 為底數       
 //y 為指數       
 //傳回值：次方運算結果 
using namespace std;

 float Pow( float x, int y )
 {
   float p = 1;
   int i;
   for( i = 1; i <= y; i++ )
   p *= x;

   return p;
 }

int main()
{
  float x;
  int y;

  cout<<"請輸入次方運算（ex.2^3）：" ;
  cin>>x>>y;
  cout<<"次方運算結果："<<Pow(x, y)<<endl;
  
  system("pause");
  return 0;
}
