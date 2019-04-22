#include <iostream>          // 輸出入的標頭檔
using namespace std;
const int MAX_STR = 80;		// 設定字串長度最長為80個字元

int main()
 {
          char	name[MAX_STR];
          char	weight[MAX_STR];
          char	height[MAX_STR];
          char	blood[MAX_STR];
          char	birthday[MAX_STR];
          char	ch;
          int		index = 0;
          cout << "請輸入您的姓名 : ";
          
           while(ch != '\n')
            {
             cin.get(ch);			// 使用get(char)函數
             name[index] = ch;
             index++;
             }
             name[index] = '\0';// 加入字串結束字元'\0'
             cout << "請輸入您的身高 : ";
             cin.get( height, MAX_STR );// 使用get(str, size)函數
             cin.ignore( MAX_STR, '\n');	// 清除暫存區中的字元
             cout << "請輸入您的體重 : ";
             cin.get( weight, '\n' );	// 使用get(str, delimiter)函數
             cin.ignore( MAX_STR, '\n');	// 清除暫存區中的字元
             cout << "請輸入您的血型 : ";
             cin.get( blood, MAX_STR, '\n' );	// 使用get(str, size, delimiter)函數
             cin.ignore( MAX_STR, '\n');	// 清除暫存區中的字元
             cout << "請輸入您的生日 : ";
             cin.getline( birthday, MAX_STR, '\n' );// 使用getline(str, size, delimiter)函數
	         cout << "您輸入 " << cin.gcount() << " 個字元" << endl;	// 使用gcount()函數
	         cout << endl;
             cout << "您的姓名是 : " << name;
         	 cout << "您的身高是 : " << height << endl;
          	 cout << "您的體重是 : " << weight << endl;
             cout << "您的血型是 : " << blood << endl;
           	 cout << "您的生日是 : "<<birthday<<endl; 
           	 
           	 system("pause");
           	 return 0;        	 
  }
