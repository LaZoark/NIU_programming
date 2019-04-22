#include <iostream>
#include <cstdlib>
using namespace std;

#define NEWLINE cout<<endl;
#define COPYRIGHT owner()

void owner();    //輸出擁有者訊息的函式 

int main()
{
    COPYRIGHT;//呼叫巨集  
    NEWLINE;//呼叫巨集 
    COPYRIGHT;//呼叫巨集 

    system("pause");
    return 0;
}

void owner()
{
    cout<<"函數名稱也可以巨集定義"<<endl;
    cout<<"版權所有人：Michael"<<endl;
    cout<<"日期：2016/10/16"<<endl;
}

