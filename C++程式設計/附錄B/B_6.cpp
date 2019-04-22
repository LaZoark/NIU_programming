#include <iostream>  // 輸出入的標頭檔
#include <cstdlib> 
using namespace std;

const int MAX_STR = 80;		// 設定字串長度最長為80個字元
int main()
{
    int		year;
    char	name[MAX_STR];
    cout << "請輸入您的年齡 : ";
    cin >> year;				// 將鍵盤輸入的資料放到變數中
    cout << "請輸入您的姓名 : ";
    cin >> name;				// 將鍵盤輸入的資料放到變數中
    cout << endl;
    cout << "您的年齡是 : " << year << endl;
    cout << "您的姓名是 : " << name << endl;
    cout << endl;

    system("pause");
    return 0;
}
