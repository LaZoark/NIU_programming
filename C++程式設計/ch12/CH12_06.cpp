#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class Dog{
      
      private:	
       char* pName;    
       char* pColor;	
       static int counter;//宣告為靜態資料成員 
      
      public:	
       
       Dog(char* pN,char* pC)
       {		
         pName = new char[strlen(pN) + 1];
         strcpy(pName,pN);//指定字串	
         pColor = new char[strlen(pC) + 1];		
         strcpy(pColor,pC);//指定字串 
      	 counter++;
        }	
        
      int getCounter(){ return counter; }
};
      int Dog::counter = 0;//類別外指定靜態資料成員初始值 
      
int main()
{	
       
       Dog d1("小白","白色"); //宣告物件d1 
       Dog d2("小黃","黃色"); //宣告物件d2
       Dog d3("小紅","紅色");//宣告物件d3
       
       cout<<d1.getCounter()<<endl;//計算產生物件的總數 
       
       system("pause");
       return 0;
       
}
