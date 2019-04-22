#include <iostream>  // 處理輸出入的標頭檔
#include <cstdlib> 
using namespace std;

int main()
{
    char	ch = 'a';
    char	str_e[] = "peace";
    char	str_c[] = "您好";
    cout.put(ch);			// 輸出字元
    cout << endl;
    cout.write( str_e, 5 );	// 輸出5個字元英文字串
    cout << endl;
    cout.write( str_c, 2 );	// 輸出2個字元中文字串
    cout << endl << endl;
    
    system("pause");
    return 0;
}
