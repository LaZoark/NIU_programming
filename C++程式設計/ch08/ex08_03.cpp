#include <iostream>                 
#include <cstdlib>
using namespace std;

int main()                      
{
     auto int iVar=5;              //定義 auto整數變數 iVar 

	 cout<<"進入程式區塊前的iVar="<<iVar<<endl; 

	 //底下以大括號區隔出一段程式區塊 
	 cout<<"------------------------------------"<<endl;
     {
		 auto int iVar=10;            //程式區塊中定義整數變數 iVar 
         iVar++; //iVar加一 
         cout<<"程式區塊中的 iVar="<<iVar<<endl;
	 }

      cout<<"------------------------------------"<<endl;
      cout<<"離開程式區塊的 iVar="<<iVar<<endl;
     
     system("pause");
     return 0;

}
