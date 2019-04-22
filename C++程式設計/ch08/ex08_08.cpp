#include<iostream>
#include<cstdlib>
using namespace std;

void UStoTW(float);
float exchange_rate;           //宣告在函數外的變數

 
int main()
{	
	auto float dollar;
	 	cout<<"美元兌換台幣...\n"<<endl;
	 	cout<<"請輸入目前匯率 : "<<endl;
	 	cin>>exchange_rate;
        cout<<"一美元="<<exchange_rate<<"臺幣";
        cout<<"請輸入欲兌換多少台幣(單位:美元) : ";
        cin>>dollar;    
	    UStoTW(dollar);
  	
    system("pause");
 	return 0;	
}

void UStoTW(float dollar)
	{
	    extern float exchange_rate; //extern 外部變數
	    cout<<dollar<<"美元="<< exchange_rate*dollar<<"臺幣"<<endl;
    }
