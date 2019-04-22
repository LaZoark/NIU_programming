#include <iostream>
#include <cstdlib>

using namespace std;

int Add_Fun(int a, int b )// 參數為a,b,回傳值為整數 
{
return a+b; //傳回兩整數和 
} //函數定義與宣告 

int main()
{
    int x;
    int y;

    cout<<"請輸入整數 x=:";
    cin>>x;
    cout<<"請輸入整數 y=:";
    cin>>y;
    cout<<"相加運算結果："<<Add_Fun(x,y)<<endl;//列印Add_Fun函數的回傳值

    system("pause");
    return 0;
}
