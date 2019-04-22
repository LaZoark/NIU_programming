#include <iostream>
#include <cstdlib>
using namespace std;

#include "CH08_06_1.cpp"

int x; //宣告x為全域變數 
int main()
{
    foo(); //呼叫另一個程式檔案中的函數 
    cout<<"x ="<<x<<endl;
    
    system("pause");
    return 0;
}
