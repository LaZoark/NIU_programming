#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	char Str[6][30]={	"張繼    楓橋夜泊",       // 宣告並初始化二維字串陣列
						"================",       // 省略了每個元素之間的大括號
						"月落烏啼霜滿天",
						"江楓漁火對愁眠",
						"姑蘇城外寒山寺",
						"夜半鐘聲到客船"	};
	int i;
	for (i=0; i<6; i++)
		cout << Str[i] << endl;                   // 輸出字串陣列內容
		
	system("pause");
	return 0;
}
