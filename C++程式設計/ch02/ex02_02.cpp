#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char ch='A'; //直接指定'A'字元 
    cout<<"ch= "<<ch<<endl;
    ch=65; //10位數值表示 A字元 
    cout<<"ch= "<<ch<<endl;
    ch='\x41';   //16進位ASCII碼表示 A字元 
    cout<<"ch= "<<ch<<endl;
    ch=0x41;    //16進位數值表示 A字元 
    cout<<"ch= "<<ch<<endl;
    ch='\101';   //8進位ASCII碼表示 A字元 
    cout<<"ch= "<<ch<<endl;
    ch=0101;    //8進位數值表示 A字元 	  
    cout<<"ch= "<<ch<<endl;
    
    system("pause");
    return 0;
}
		 
		 
