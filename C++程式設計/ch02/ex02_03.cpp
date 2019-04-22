#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{	
    int a,b,c;
    
    a=b=c=100; //同步指定值給不同變數
    a=a+5;//將a值加5後指派給變數a
    
    cout<<"a="<<a<<endl;
    b=a+b+c;//計算a+b+c的結果後指派給變數a 	   
    cout<<"b="<<b<<endl;
    
    system("pause");
    return 0;	
}
