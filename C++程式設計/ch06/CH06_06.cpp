#include <iostream>
#include <cstdlib>

using namespace std;

int main()	{
    
    int iArrVal[3]={10,20,30};//宣告陣列並指定初值 
    int* piVal=iArrVal;  //宣告指標變數，並將指標指向陣列起始 
    int i;
    for(i=0;i<sizeof(iArrVal)/sizeof(iArrVal[0]);i++)
      {
      cout<<"陣列資料的列印  iArrVal["<<i<<"] 值為 "<<iArrVal[i]<<endl;  
      cout<<"利用指標列印陣列資料 *(piVal+"<<i<<") 值為 "<<*(piVal+i)<<endl; 
      cout<<"----------------------------------------------------"<<endl;
      }
    cout<<endl;
    system("pause");
    return 0;
    }
