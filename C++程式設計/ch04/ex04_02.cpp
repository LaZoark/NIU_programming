#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
  int t,total;
  cout<<"停車超過一小時,每小時收費50元"<<endl;
  cout<<"--------------------------------------"<<endl;
  cout<<"請輸入停車幾小時: ";
  cin>>t;	//輸入時數   
 
 if(t>1)//if 判斷式 
  {
    total=t*50;	//計算費用
    cout<<"總額為:"<<total<<"元"<<endl;    
  }
  
  system("pause");
  return 0; 
} 

