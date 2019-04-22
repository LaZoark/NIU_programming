#include <iostream>                                  
#include <cstdlib> 

using namespace std;

int main()
{
	 char letter;                                      // 定義字元變數 letter
	 
     cout << "請輸入英文字元(小寫):";
     cin >> letter;                                    // 字元變數 letter 儲存輸入的數值

	 switch (letter)
	 {
	     case 'a':                                     // (letter == 'a')
		 case 'e':                                     // (letter == 'e')
		 case 'i':                                     // (letter == 'i')
		 case 'o':                                     // (letter == 'o')
		 case 'u':                                     // (letter == 'u')
			 cout << "輸入的是母音字元。";             // 共用的敘述區塊。
			 break;
		 default:                                      // 輸入的字元不在上列選項中。
			 cout << "輸入的是子音字元。";             // default 敘述區塊。
			 break;
	 }
     
     cout << endl;                                     // 換行
     
     system("pause");
     return 0;
}

