 //短整數型態範圍測試
#include <iostream>
#include <cstdlib> 

using namespace std;

int main()
 {
      //分別設定三個變數值
      short int i1=32767;           //短整數上限值
      short int i2=32768;           //超過短整數上限值1
      short int i3=32769;           //超過短整數上限值2
      
      //輸出變數中實際儲存的數值
        
      cout<<"i1=32767===> "<<i1<<endl; 
      cout<<"i2=32768===> "<<i2<<endl;
      cout<<"i3=32769===> "<<i3<<endl;
 
      system("pause");
      return 0;
}
