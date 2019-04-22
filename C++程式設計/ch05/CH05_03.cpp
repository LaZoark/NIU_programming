#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	char Str_1[]={ 'W', 'o', 'r', 'l', 'd','!' };          //定義字元陣列 Str_1[] 
	char Str_2[]="World!";                                 //定義字元陣列 Str_2[] 
	
    cout<<"Str_1 佔用的記憶體空間:"<<sizeof(Str_1)<<endl;  //顯示 Str_1 佔用的記憶體空間 
	cout<<"字元陣列 Str_1 的內容:"<<Str_1<<endl;             // 顯示 Str_1 的內容                                          
	cout<<"Str_2 佔用的記憶體空間:"<<sizeof(Str_2)<<endl;  //顯示 Str_2 佔用的記憶體空間 
	cout<<"字元陣列 Str_2 的內容:"<<Str_2<<endl;             //顯示 Str_2 的內容 
	                                         
    system("pause");
    return 0;
}
