#include <iostream>
#include <cstdlib>
#include <fstream>	// 處理檔案輸出入的標頭檔
#include <cstring>    // 使用strlen函數 
using namespace std;

int main()
{
 char str_1[] = "登山觀浮雲";
 char str_2[] = "當下清涼心";
 ofstream ofile("out3.txt");	   // 宣告檔案輸出物件
 
  for( int i = 0; i < (int)strlen( str_1 ); i++)
  {
    ofile.put( str_1[ i ] );				
    // 使用函數put()寫入字元到檔案
   }
   ofile << endl;		// 插入換行字元到檔案中
   ofile.write( str_2, strlen( str_2) );		    // 使用函數write()寫入字串到檔案
   ofile.close();							// 關閉檔案
   
   system("pause");
   return 0;
 }
