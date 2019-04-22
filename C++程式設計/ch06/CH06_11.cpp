#include <iostream>   
#include <cstdlib>  
                          
using namespace std;

int main()
{
     int *ptr_1=new int;           // 定義 *ptr_1 指標，並由 new 配置記憶體
	 int *ptr_2=new int;           // 定義 *ptr_2 指標，並由 new 配置記憶體

	 cout << "輸入被加數:";
	 cin >> *ptr_1;                        // *ptr_1 儲存被加數
	 cout << "輸入加數  :";
	 cin >> *ptr_2;                       // *ptr_2 儲存加數

	 cout << *ptr_1 << " + " << *ptr_2 << " = ";
	 cout << *ptr_1+*ptr_2;             // 計算總和
	 
     cout << endl;                     // 換行

	 delete ptr_1;                   // 釋放配置給 ptr_1 的記憶體空間
	 delete ptr_2;                   // 釋放配置給 ptr_2 的記憶體空間
	 
	 system("pause");
	 return 0;
}
