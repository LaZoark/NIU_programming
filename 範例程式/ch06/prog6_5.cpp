// prog6_5, 沒有傳回值的函數
#include <iostream>
#include <cstdlib>
using namespace std;
void myprint(int,char);       	// 函數原型的宣告 
int main(void)
{
   int a=6;
   char ch='%';
   myprint(a,ch);		  	// 呼叫自訂的函數，印出a個字元 
   cout << "Printed!!" << endl;
   system("pause");
   return 0;
}

void myprint(int n,char c) 	// 自訂的函數myprint()
{
   int i;
   for(i=1;i<=n;i++)
      cout << c;				// 印出字元
   cout << endl;
   return;
}
