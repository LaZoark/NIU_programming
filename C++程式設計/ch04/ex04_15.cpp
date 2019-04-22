// break練習
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int sum=0;
    for(int i=1; i<=200; i=i+2){
     if(i==101)
	      break;//跳出迴圈 
		 sum+=i;	
	  }
     cout<<"1~99的奇數總和:"<<sum<<endl;
     
    system("pause");
    return 0;
 }
