// prog16_1, 繼承的簡單範例
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
using namespace std;
class CWin                          // 定義CWin類別，在此為父類別
{
   private:
     char id;
     int width,height;

   public:
     CWin(char i='D',int w=10,int h=10):id(i),width(w),height(h)
     {
        cout << "CWin()建構元被呼叫了..." << endl;
     }
     void show_member(void)  	    // 成員函數，用來顯示資料成員的值
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

class CTextWin : public CWin        // 定義CTextWin類別，繼承自CWin類別
{
   private:                  	    // 子類別裡的私有成員
      char text[20];

   public:     					    // 子類別裡的公有成員
      CTextWin(char *tx)     		// 子類別的建構元
      {
         cout << "CTextWin()建構元被呼叫了..." << endl;
         strcpy(text,tx);
      }
      void show_text()			    // 子類別的成員函數
      {
         cout << "text = " << text << endl;
      }
};

int main(void)
{
   CWin win('A',50,60); 	   		// 建立父類別的物件
   CTextWin txt("Hello C++");		// 建立子類別的物件

   win.show_member();  			    // 以父類別物件呼叫父類別的函數
   txt.show_member();				// 以子類別物件呼叫父類別的函數
   txt.show_text();				    // 以子類別物件呼叫子類別的函數
   //win.show_text(); 只有單向繼承

   cout << "win 物件佔了 " << sizeof(win) << " bytes" << endl;
   cout << "txt 物件佔了 " << sizeof(txt) << " bytes" << endl;

   return 0;
}
