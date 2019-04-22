#include <iostream>  // 處理輸出入的標頭檔
#include <cstdlib>
using namespace std;

int main()
{
    int d = 777;//使用十進位格式輸出資料
    cout << "十進位 : " << d << endl;
    cout << "八進位 : " << oct << d << endl;//使用八進位格式輸出資料
    cout << "十六進位 : " << hex << d << endl;//使用十六進位格式輸出資料
    cout << "插入空字元並輸出資料訊息" << ends;//用ends插入空字元
    cout << "@@@" << endl;
    cout << "換行並輸出" << endl;
    cout << flush;
    cout << endl;

    system("pause");
    return 0;
}
