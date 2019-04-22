#include <iostream>
#include <cstdlib>	

using namespace std;
	
int main()
{
	
	int score=0;	                        //宣告整數變數
	
	cout<<"請輸入國文成績:";
	cin>>score; //輸入國文成績
	
    if(score>=60) //if else 判斷式                        
	   cout<<"本科成績及格."<<endl;               
    else                                
       cout<<"本科成績不及格."<<endl;                 
    
    system("pause");
    return 0;
}
