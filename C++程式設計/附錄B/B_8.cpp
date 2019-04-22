#include <iostream>  // 輸出入的標頭檔
#include <cstdlib>
using namespace std;

const int MAX_STR = 80;		// 設定字串長度最長為80個字元

int main()
{
    	char	name[MAX_STR];
        int		age = 0;
        int		index = 0;
        cout << "請輸入您的姓名 : ";
        cin.getline( name, MAX_STR, '\n' );	// 使用getline(str, size, delimiter)函數
        while(1)
        {
         cout << "請輸入您的年齡 : ";
         cin.unsetf(ios::skipws);// 不跳過空白字元,將其視為輸入的字元,
								// 因為它不是數字所以會造成錯誤
         cin >> age;			// 將輸入存入型態為整數的變數中
         	if( age < 0 )
             {
              cout << "您輸入的年齡小於0" << endl;
              cin.clear( ios::failbit );	// 設定failbit錯誤狀態位元
              }
             if( cin.good() )		// 若是輸入正確
             {
              cin.ignore( MAX_STR, '\n' );	// 清除暫存區
              break;						// 跳出迴圈
         	 }// 輸入錯誤
           cin.clear();						// 先清除錯誤位元,
           cout << "輸入錯誤!" << endl;		// 輸出錯誤訊息
           cin.ignore( MAX_STR, '\n');			// 清除暫存區中的字元
           }
           cout << endl;
           cout << "您的姓名是 : " << name << endl;
           cout << "您的年齡是 : " << age << endl;
           cout << endl;
           
           system("pause");
           return 0;
  	}
