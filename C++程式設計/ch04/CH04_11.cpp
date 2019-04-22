#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int score;
	
	cout<<"請輸入數學成績?";
	cin>>score;

	if ( score>60 ) 
		goto pass;		  // 找到標籤名稱為"pass"的程式敘述繼續執行程式.
	else
		goto nopass;	  // 找到標籤名稱為"nopass"的程式敘述繼續執行程式.	

	pass:                         //pass標籤
	cout<<"數學及格!"<<endl;       
	goto TheEnd;          // 找到標籤名稱為"TheEnd"的程式敘述繼續執行程式.

	nopass:               //nopass標籤
	cout<<"數學成績不及格!"<<endl;

	TheEnd:  
    cout<<"---------------------------------"<<endl;
    cout<<"統計完成!"<<endl;  //TheEnd標籤
	
	system("pause");
    return 0;
}



