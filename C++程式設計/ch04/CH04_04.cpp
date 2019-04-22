#include <iostream>
#include <cstdlib>	

using namespace std;	

int main()
{
	char select;
	cout<<"(A) 義大利"<<endl;
	cout<<"(B) 巴黎"<<endl;
	cout<<"(C) 日本"<<endl;
	cout<<"請輸入您要旅遊的地點：";
	cin>>select;	                          //輸入字元並存入變數
    
	switch(select)
	{
	case 'a':  
	case 'A':                                         //如果select等於'A'或'a'
		cout<<"★義大利5日遊 $35000"<<endl;                 //則顯示文字
		break;                                        //跳出switch
	case 'b': 
	case 'B':                                         //如果select等於'B'或'b'
		cout<<"★巴黎7日遊 $40000"<<endl;                   //則顯示文字*/
		break;                                        //跳出switch
	case 'c':  
	case 'C':                                         //如果select等於'C'或'c'
		cout<<"★日本5日遊 $25000"<<endl;                   //則顯示文字
		break;                                        //跳出switch
	default:                              //如果select不等於ABC或abc任何一個字母 
		cout<<"選項錯誤"<<endl;                        
	}
	
    system("pause");
    return 0;	
}
