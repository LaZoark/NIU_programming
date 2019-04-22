#include <iostream>                                       // 含括標頭檔 <iostream> 
#include <cstdlib>   
using namespace std;

template <class T>                                          // 宣告樣版形式參數 T 
T Add_Array(T *ray)                                         // 宣告樣版函數 Add_Array() 
{
    T Total=0;                                              // 定義樣版形式參數 T 的變數 Total 

	for (int count=0; count < 5; count++)                   // 計算陣列總和
	    Total+=*(ray+count);

	return Total;                                           // 傳回總和
}

int main()
{
     int i_ray[5]={ 10, 20, 30, 40, 50 };                   // 定義整數陣列 i_ray
	 double d_ray[5]={ 40.5, 33.44, 57.65, 89.77, 99.0 };   // 定義 double 陣列 d_ray

	 cout << "i_ray[] 的元素值總和="
	      << Add_Array(i_ray);                              // 呼叫 Add_array，傳入i_ray[]陣列
	 cout << endl;

	 cout << "d_ray[] 的元素值總和="
	      << Add_Array(d_ray);                              // 呼叫 Add_array，傳入d_ray[]陣列
	 cout << endl;
	 
	 system("pause");
	 return 0;
}
