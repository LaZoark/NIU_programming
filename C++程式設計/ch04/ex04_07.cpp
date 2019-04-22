#include <iostream>
#include <cstdlib>

using namespace std;
		
int main()
{
	int year=0;	 
     //宣告整數變數
	cout<<"請輸入西元年:";
	cin>>year;  //輸入西元年 
	if(year % 4 !=0)	 //如果year不是4的倍數
	   cout<<year<<"年不是潤年"<<endl; //則顯示year不是潤年
	else if(year % 100 ==0)  //如果year是100的倍數
        {
            if(year % 400 ==0)      //且year是400的倍數
	   			 cout<<year<<"年是潤年"<<endl; 
               //顯示year是潤年
			else      
	   			 cout<<year<<"年不是潤年"<<endl;
            //則顯示year不是潤年
		}	
    else  
         cout<<year<<"年是潤年"<<endl;//顯示year是潤年
    
    system("pause");
    return 0;
}
