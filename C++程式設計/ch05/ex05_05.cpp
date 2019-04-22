#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	char Str_1[40];                   //定義字元陣列 Str_1[40] 
	char Str_2[40];                 //定義字元陣列 Str_2[40] 
	int count;
    
    cout<<"字串 Str_1 的內容:";
    cin>>Str_1;
	cout<<"字串 Str_2 的內容:";
	cin>>Str_2;
	
	for (count=0; Str_1[count] != '\0' && Str_2[count] != '\0'; count++)
	     if ( Str_1[count] == Str_2[count] )
			 continue;                                //相等則繼續比較下一個字元 
		 else
			 break;                                   //不相等即跳出迴圈的執行 
		
	if ( Str_1[count] == '\0' && Str_2[count] == '\0' ) //判斷兩個字串是否都比較到結尾字元 
		cout<<"2個字串相等...";                     //顯示結果 
	else
		cout<<"2個字串不相等...";                   //顯示結果 

	cout<<endl; 
     
     system("pause");                                    
     return 0;
     
}
