#include <iostream>                             
#include <cstdlib> 
using namespace std;

#define CHOICE 2                                  //定義識別字 CHOICE 

#if CHOICE==1                           //如果 CHOICE==1,定義識別字 START 為 11,
                                        //識別字 END 為 20
  #define START 11                                
  #define END 20  
                                  
#elif CHOICE==2                                   //如果 CHOICE==2,定義識別字 START 為 21,
                                                  //定義識別字 END 為 30 
  #define START 21                                
  #define END 30   
                                 
#else                                            //如果前面的條件都不成立,定義識別字 START 為 1,
                                                 //定義識別字 START 為 10
  #define START 1                                 
  #define END 10   
                                 
#endif                                            //結束前置處理指令 #if *

int main()                       
{
	 int Total=0,count; 
                                     //定義整數變數 Total 
	 for (count=START; count <= END; count++) // for 迴圈執行加法運算 
	 {
		 cout<<count;
		 if (count < END) cout<<" + ";          //如果整數變數 (count < END)，顯示"+"符號 
		 Total+=count;
	 }
	  cout<<" = "<<Total<<endl;    // 顯示整數變數 Total 的值 
	  
      system("pause");
      return 0;                              
}
