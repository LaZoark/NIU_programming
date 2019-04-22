#include<iostream>
#include <cstdlib>

using namespace std;

int main()
{	
	
	short int number1=0200;//宣告短整數變數,並以八進位數設定其值
  	int number2=0x33f;//宣告整數變數,並以十六進位數設定其值
    long int number3=1234567890;//宣告長整數變數,並以十進位數設定其值
    unsigned long int number4=978654321;//宣告無號長整數變數,並以十進位數設定其值
 	
     //輸出各種整數資料型態值與所佔位元數 
     
	cout<<"短整數="<<number1<<"所佔位元組"<<sizeof(number1)<<endl;
	cout<<"整數="<<number2<<"所佔位元組"<<sizeof(number2)<<endl;
	cout<<"長整數="<<number3<<"所佔位元組"<<sizeof(number3)<<endl;
	cout<<"無號長整數="<<number4<<"所佔位元組"<<sizeof(number4)<<endl;
	
	
    system("pause");
 	return 0;
} 

