#include <iostream>
#include <cstdlib>
using namespace std;

int  main()
{
 char arr2[50];
 int sum=0;
 cout << "請輸入字串：";
 cin >> arr2;       //取得使用者輸入的字串並存入字元陣列arr2中
  for (int i=0;i<50;i++)
  {   
   if (arr2[i]!='\0')   //逐一判斷使用者所輸入字串的各個字元
   {       //如果不是字串結束符號「\0」
     sum++;     //sum的值就遞增
   }else           //而如果是字串結束符號
   {              //就中斷迴圈
  break;
   }
  }
   cout << "您輸入的字串共有 " << sum << " 個字元\n";  //顯示計算結果
  
  system("pause");
  return 0;
  	
  }
