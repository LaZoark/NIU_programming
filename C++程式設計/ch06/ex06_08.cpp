#include <iostream>  
#include <cstdlib> 
using namespace std;

int main()  
{  
    int* num = new int[5];  
    int temp,i = 0;  
    cout<<"[請輸入五個數字]"<<endl;  
    while(i < 5) {  
     cout<<"數字"<<i + 1<<"> ";  
     cin>>*(num + i);        //分別輸入五個數字  
   	 i++;  
     }  
    for(i=0;i<4;i++)  
     for(int j=i+1;j<5;j++)  
     	{  
          if(*(num + i) > *(num + j))    //如果*(num+i)大於*(num+j)就互換  
          	{ 
               temp = *(num + i); 
               *(num + i) = *(num + j);  
          	   *(num + j) = temp; 
            }  
            }  
      cout<<"[由小而大的順序是]";  
      for(i=0;i<5;i++)    //輸出排序後的結果  
      cout<<*(num + i)<<'\t';
      cout<<endl;
      delete [] num;       //釋放動態配置的陣列記憶體 
      
      system("pause");
      return  0;
}
