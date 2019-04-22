#include <iostream>                   // 函括標頭檔 <iostream.h>
#include <cstdlib> 

using namespace std;

int main()
{
	 char Name[]="John";                //定義字元陣列 Name[]，並指定其初始值
	 char *p_N="Mary";                  //定義字串指標 *p_N，並指定其初始值
	 cout<<"Name[] 的位址:"<<&Name<<" 字串的內容:"<<Name<<endl;    
              //顯示字元陣列的內容
	 //Name++; Name為指標常數,不可運算 
	 //Name=p_N Name為指標常數,不可改變其值 
      
     cout<<"p_N的位址:"<<(int*)p_N<<" 字串的內容:"<<p_N<<endl;
     //顯示字串指標的內容
	 p_N=Name;//p_N 指標變數,可改變其值   
	 cout<<"p_N 字串的新內容:"<<p_N<<endl;     //顯示字串指標的內容
	 p_N++; //p_N 指標變數,可進行運算  
     cout<<"p_N 字串的新內容:"<<p_N<<endl; 
     
     system("pause");
     return  0;
}
