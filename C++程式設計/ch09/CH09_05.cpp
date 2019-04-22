#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    cout << "在原始程式的第 " << __LINE__  << " 行開始使用前置處理巨集";
    //__LINE__巨集可印出此巨集所出現的行號 
    cout << endl;
    cout << "編譯的程式名稱：" << __FILE__;      // __FILE__ 巨集
    cout << endl;
    cout << "程式編譯日期在 " << __DATE__ << " 的 " << __TIME__; // 巨集記錄編譯的日期時間。     
    cout << endl; 
    
    system("pause");
    return 0;
}

