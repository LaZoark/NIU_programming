#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int h=10,day=0;	
	do                                  //do-while迴圈開始
   {                                 
		day++;                          //天數
		if(h-=2)                        //每執行一次迴圈高度減少2公尺(h=h-2)
			h++;                        //加回1公尺(h=h+1)
   } while(h>0);                         //迴圈成立的條件為高度大於0
   cout<<"需要 "<<day<<"天"<<endl;         //印出天數
   
   system("pause");
   return 0;
}

