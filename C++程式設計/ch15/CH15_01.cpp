#include<fstream> //處理檔案輸出入的標頭檔
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    ifstream fin;//建立唯讀檔案物件 
    fin.open("testFile.txt",ios::in);//開啟唯讀檔案物件並開啟testFile.txt檔 
    if(!fin.is_open())
        cout<<"檔案無法開啟!!"<<endl;
    else
    {
        cout<<"檔案開啟..."<<endl;
        cout<<"關閉資料流..."<<endl; 
        fin.close();///呼叫函數close()以關閉檔案
    }
    
    system("pause");
    return 0;
}
