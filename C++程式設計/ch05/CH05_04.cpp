#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	char str[30];                 // 宣告長度為30的字串變數
	cout << "陣列長度：30，可接受輸入長度：10" << endl;
	cout << "請輸入任意字串：";
	cin.getline(str, 10, '\n');    // 使用getline()函數輸入字串，最多接受10個字元
	cout << "str字串變數為：" << str << endl;
	
	system("pause");
	return 0;
}
