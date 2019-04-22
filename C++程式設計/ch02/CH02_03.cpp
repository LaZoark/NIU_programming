#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	float Num1;               // 宣告float變數
	double Num2;              // 宣告double變數
	long double Num3=3.144E10;     // 宣告並設定 long double變數的值
	
    Num1=1.742f;
	Num2=4.159;
 
    cout<<"3.5678的儲存位元組="<<sizeof(3.5678)<<endl; 
    //印出 3.5678的儲存位元組大小
    cout<<"3.5678f的儲存位元組="<<sizeof(3.5678f)<<endl; 
    //印出 3.5678f的儲存位元組大小
    cout<<"3.5678L的儲存位元組="<<sizeof(3.5678L)<<endl;
    //印出 3.5678L的儲存位元組大小 
    cout<<"-------------------------------------------------------"<<endl;
    cout << "Num1 的值：" << Num1 << endl   
		 << "長度大小：" << sizeof(Num1)  
		 << " Byte" <<endl;
         // 輸出float變數內容及儲存長度大小
	cout << "Num2 的值：" << Num2 << endl   
		 << "長度大小：" << sizeof(Num2) 
		 << " Byte" <<endl;
         // 輸出double變數內容及儲存長度大小
    cout<< "Num3 的值：" << Num3 << endl 
        << "長度大小：" << sizeof(Num3) 
		 << " Byte" << endl;
         // 輸出long double變數內容及儲存長度大小
       
    system("pause");
    return 0;
}
		 
		 
