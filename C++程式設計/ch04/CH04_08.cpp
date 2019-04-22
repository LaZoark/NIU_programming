#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int sum=0,n,i=0;
    cout<<"請輸入n值："; 
	cin>>n;
	
   //do while條件式
	
    do {
		sum+=i;          
		cout<<"i="<<i<<" sum="<<sum<<endl;    //印出i和sum的值
		i++;
	}while(n<=10 && i<=n) ; //判斷迴圈結束條件 
	
    system("pause"); 
    return 0;             
}

