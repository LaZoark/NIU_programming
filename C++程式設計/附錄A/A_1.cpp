#include<iostream>
#include<cctype>//引用字元處理函數表頭檔

using namespace std;

int main()
{
	char ch1;
 	
  		cout<<"請輸入任一字元";
  		cout<<"(輸入空白鍵為結束):";
 		//讀取字元
  		cin.get(ch1);
  		cout<<endl;
  		//字母部分
  		if(isalpha(ch1))
    	{
     		cout<<ch1<<"字元為字母"<<endl;
     		if(islower(ch1))
       			cout<<"將字母轉成大寫:"<<(char)toupper(ch1)<<endl;
  			else
  				cout<<"將字母轉成小寫:"<<(char)tolower(ch1)<<endl;   		
		}
		//數字部分
		else if(isdigit(ch1))
  		{
    		cout<<ch1<<"字元為數字"<<endl;
    	}
    	//其他符號部分
    	else if(ispunct(ch1))
    		cout<<ch1<<"字元為符號"<<endl;
  	
    
    system("pause");	
	return 0;
}
