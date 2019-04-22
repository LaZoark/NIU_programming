#include <iostream>
#include <cstdlib>       //含括 <cstdlib> 標頭檔 
using namespace std;

int main()
{
	char Read_Str[20]; //定義字元陣列 Read_Str[20] 
    double d,cubic;
    
		cout<<"請輸入打算轉換成實數的字串:";
		cin>>Read_Str;  //讀取字串 
		d=atof(Read_Str); //atof() 函式數輸出 
		cubic=d*d*d;
        cout<<d<<"的立方值="<<cubic<<endl;     
                                        	
        system("pause");
        return 0;
}
